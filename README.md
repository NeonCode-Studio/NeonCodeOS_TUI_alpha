# NeonCode OS TUI Alpha

Minimalny terminalowy „system” napisany w C++ w stylu eksperymentalnego OS.

## 🔧 Funkcje

- Logowanie użytkownika
- Informacje o systemie
- Kalkulator (operacje +, -, *, /)
- Proste menu TUI

## 🧠 Struktura projektu

Projekt oparty na modularnym C++:

- `main.cpp` – główna logika programu
- `login.h / login.cpp` – system logowania
- `calculator.h / calculator.cpp` – kalkulator
- `osinfo.h / osinfo.cpp` – informacje o systemie

## 🧮 Kalkulator

Obsługiwane operacje:
- dodawanie `+`
- odejmowanie `-`
- mnożenie `*`
- dzielenie `/` (z ochroną przed dzieleniem przez 0)

## 🚀 Kompilacja

Linux / g++:

```bash
g++ main.cpp login.cpp calculator.cpp osinfo.cpp -o neonos
