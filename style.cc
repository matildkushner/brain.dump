body {
  background: white;
  font-family: 'Comic Sans MS', cursive, sans-serif;
  margin: 0;
  padding: 0;
  overflow-x: hidden;
  position: relative;
}

.container {
  background: white;
  border-radius: 20px;
  padding: 40px;
  max-width: 600px;
  margin: 100px auto;
  box-shadow: 0 8px 20px rgba(0,0,0,0.1);
  position: relative;
  z-index: 10;
  text-align: center;
}

h1 {
  font-size: 1.6em;
  margin-bottom: 30px;
}

.category-buttons {
  display: flex;
  flex-direction: column;
  gap: 10px;
  align-items: center;
  margin-bottom: 30px;
}

.category-buttons button {
  background: #fce4ec;
  border: none;
  padding: 10px 20px;
  border-radius: 12px;
  cursor: pointer;
  font-size: 1em;
  transition: 0.3s;
}

.category-buttons button:hover {
  background: #f8bbd0;
}

form {
  display: flex;
  flex-direction: column;
  align-items: center;
  gap: 20px;
}

label {
  font-size: 1.2em;
}

textarea {
  width: 80%;
  max-width: 500px;
  padding: 15px;
  border: 2px solid #eee;
  border-radius: 10px;
  font-size: 1em;
  resize: vertical;
}

form button {
  background: #ffc0cb;
  color: white;
  border: none;
  padding: 12px 24px;
  border-radius: 12px;
  cursor: pointer;
  font-size: 1em;
  transition: 0.3s;
}

form button:hover {
  background: #ffb6c1;
}

.floating-emoji {
  position: fixed;
  z-index: 0;
  animation: floatDown linear infinite;
  font-size: 24px;
  pointer-events: none;
  opacity: 0.9;
}

@keyframes floatDown {
  0% {
    transform: translateY(-10vh);
    opacity: 1;
  }
  100% {
    transform: translateY(110vh);
    opacity: 0;
  }
}
