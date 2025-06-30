const emojis = ['🦋', '✨', '❤️', '🧁', '🍒'];

function createEmoji() {
  const emoji = document.createElement('div');
  emoji.classList.add('floating-emoji');
  emoji.style.left = `${Math.random() * 100}vw`;
  emoji.style.animationDuration = `${5 + Math.random() * 5}s`;
  emoji.style.fontSize = `${20 + Math.random() * 15}px`;
  emoji.style.zIndex = Math.random() > 0.5 ? '5' : '0';
  emoji.textContent = emojis[Math.floor(Math.random() * emojis.length)];
  document.body.appendChild(emoji);

  setTimeout(() => {
    emoji.remove();
  }, 10000);
}

setInterval(createEmoji, 400);
