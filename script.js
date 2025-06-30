const prompts = {
  work: "what's on your mind about work today?",
  personal: "what's going on in your personal world?",
  creative: "what creative idea or inspiration do you want to explore?",
  random: "no rules. let it all out."
};

function selectCategory(category) {
  document.querySelector('.category-buttons').style.display = 'none';
  const promptForm = document.getElementById('promptForm');
  const promptLabel = document.getElementById('promptLabel');
  promptLabel.textContent = prompts[category];
  promptForm.style.display = 'flex';
}
