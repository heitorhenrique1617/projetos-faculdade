document.addEventListener('DOMContentLoaded', () => {
     const hamburguer = document.querySelector('.hamburguer');
     const menu = document.querySelector('.menu');
     const dropdowns = document.querySelectorAll('.dropdown');
     const menuItems = document.querySelectorAll('.menu > li > a');

     // Alternar menu em telas menores
     hamburguer.addEventListener('click', () => {
       menu.classList.toggle('active');
       const expanded = menu.classList.contains('active');
       hamburguer.setAttribute('aria-expanded', expanded);
     });

     // Abrir submenu e fechar outros
     dropdowns.forEach(dropdown => {
       dropdown.addEventListener('click', (e) => {
         e.preventDefault();
         const submenu = dropdown.querySelector('.submenu');
         const isActive = submenu.classList.contains('active');

         // Fechar todos os submenus
         document.querySelectorAll('.submenu').forEach(sm => {
           sm.classList.remove('active');
         });

         // Abrir o submenu clicado, se não estava ativo
         if (!isActive) {
           submenu.classList.add('active');
         }
       });
     });

     // Destacar item selecionado
     menuItems.forEach(item => {
       item.addEventListener('click', () => {
         menuItems.forEach(i => i.classList.remove('selected'));
         item.classList.add('selected');
       });
     });
   });