document.addEventListener('DOMContentLoaded', () => {
  const menuIcon = document.querySelector('.menu-icon');
  const sideMenu = document.querySelector('.side-menu');
  const closeIcon = document.querySelector('.close-icon');
  const dropdownBtns = document.querySelectorAll('.dropdown-btn');
  const heroContent = document.querySelector('.hero-content');
  const searchInput = document.querySelector('input[type="text"][placeholder="Search..."]');
  const searchButton = document.querySelector('button[type="submit"]');

  menuIcon.addEventListener('click', () => {
    sideMenu.style.left = '0';
  });

  closeIcon.addEventListener('click', () => {
    sideMenu.style.left = '-340px';
  });

  dropdownBtns.forEach(btn => {
    btn.addEventListener('click', () => {
      const dropdownContent = btn.nextElementSibling;
      dropdownContent.style.display = dropdownContent.style.display === 'block' ? 'none' : 'block';
      btn.textContent = btn.textContent === '+' ? '-' : '+';
    });
  });

  // Add event listener for search button
  searchButton.addEventListener('click', () => {
    const searchTerm = searchInput.value.toLowerCase();
    const subItems = document.querySelectorAll('.dropdown-content li a');

    subItems.forEach(subItem => {
      const subItemText = subItem.textContent.toLowerCase();
      if (subItemText.includes(searchTerm)) {
        // Scroll to the section
        subItem.click(); // Trigger click event on the matching dropdown item
        return; // Exit the loop after finding the first match
      }
    });
  });

  // Add event listeners to scroll to specific sections when subitems are clicked
  const subItems = document.querySelectorAll('.dropdown-content li a');
  subItems.forEach(subItem => {
    subItem.addEventListener('click', (event) => {
      event.preventDefault(); // Prevent default anchor behavior
      const targetId = subItem.getAttribute('href').substring(1); // Get target ID from href
      const targetElement = document.getElementById(targetId);

      if (targetElement) {
        // Hide all contents except the target section
        const sections = document.querySelectorAll('main > section');
        sections.forEach(section => {
          section.style.display = 'none';
        });
        targetElement.style.display = 'block';

        // Scroll to the target section
        targetElement.scrollIntoView({ behavior: 'smooth' });
      }
    });
  });
});
