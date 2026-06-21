# ⚡ NeonCode OS TUI (Alpha)

Minimalny, tekstowy "system operacyjny" (TUI) napisany w C++, stworzony w stylu eksperymentalnego środowiska konsolowego. 

---

## 🔧 Funkcje systemu

- 🔐 **Bezpieczne logowanie** – Prosty moduł autoryzacji użytkownika przed uzyskaniem dostępu do powłoki.
- 📟 **System Info** – Wyświetlanie podstawowych danych o systemie i środowisku uruchomieniowym.
- 🧮 **Wbudowany kalkulator** – Szybkie operacje matematyczne bezpośrednio z poziomu TUI.
- 🌐 **Intuicyjne Menu** – Nawigacja oparta na interfejsie tekstowym.

---

## 🧠 Struktura projektu

Projekt został zaprojektowany modularnie, co ułatwia jego dalszą rozbudowę:

| Plik | Rola w projekcie |
| :--- | :--- |
| `main.cpp` | Główna pętla programu i zarządzanie TUI |
| `login.h` / `.cpp` | Logika autoryzacji i sesji użytkownika |
| `calculator.h` / `.cpp` | Silnik obliczeniowy kalkulatora |
| `osinfo.h` / `.cpp` | Moduł generowania informacji o systemie |

---

## 🧮 Moduł Kalkulatora

Kalkulator wspiera podstawowe operacje arytmetyczne z wbudowanymi zabezpieczeniami:

- Dodawanie (`+`)
- Odejmowanie (`-`)
- Mnożenie (`*`)
- Dzielenie (`/`) – *z zabezpieczeniem przed krytycznym błędem dzielenia przez zero!*

---

## 🚀 Kompilacja i Uruchomienie

### Wymagania
- Środowisko Linux / WSL
- Kompilator `g++` (wspierający min. C++11)

### Instrukcja krok po kroku

1. **Kompilacja wszystkich modułów:**

    g++ main.cpp login.cpp calculator.cpp osinfo.cpp -o neonos

2. **Uruchomienie systemu:**

    ./neonos

---

## 🧑‍💻 Autor

- **NeonCode Entertainment**
- *Made by Neon*
- 🌐 **Make internet free again**
