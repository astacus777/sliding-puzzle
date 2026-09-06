# Sliding Puzzle

## Zaawansowane C++

Realizacja: rok akademicki **2025/2026**, półsemestr: **3**

**Autor:**  
Przemysław Marcinkowski  
Numer albumu: **347314**

**Repozytorium GitHub:**  
https://github.com/astacus777/sliding-puzzle

## Wybrany temat

**Układanki z lat dziecinnych – przesuwane puzzle n×n z jednym pustym polem.**



## Opis działania programu

Celem programu jest symulacja klasycznej układanki przesuwanych kafelków w wersji konsolowej. Program umożliwia rozegranie rozgrywki przez kilku graczy grających kolejno oraz prowadzenie rankingu wyników z wykorzystaniem systemu punktowego zależnego od rozmiaru planszy, liczby ruchów i czasu rozwiązania.

Po uruchomieniu aplikacji użytkownicy wprowadzają swoje nazwy (nicki). Możliwe jest dodanie kilku graczy, którzy uczestniczą w rozgrywce. Następnie ustalana jest liczba rund. W każdej rundzie gracze grają kolejno, a program wyświetla aktualnego gracza oraz numer rundy.

Przed rozpoczęciem swojej tury gracz wybiera rozmiar planszy **n×n**. Program tworzy planszę zawierającą ponumerowane kafelki oraz jedno puste pole. Plansza jest następnie losowana poprzez wykonywanie dozwolonych ruchów, dzięki czemu otrzymany układ pozostaje rozwiązywalny.

Podczas rozgrywki gracz przesuwa kafelki sąsiadujące z pustym polem, podając kierunek ruchu: `g` – góra, `d` – dół, `l` – lewo, `p` – prawo. Kierunek oznacza kierunek przesunięcia kafelka z numerem na puste pole, a nie kierunek przemieszczania pustego pola. Program sprawdza poprawność każdego ruchu i nie pozwala na wykonanie ruchu niedozwolonego.

W czasie gry zliczana jest liczba poprawnie wykonanych ruchów oraz mierzony jest czas rozgrywki za pomocą mechanizmów biblioteki `chrono`.

Warunek zwycięstwa zostaje spełniony, gdy wszystkie kafelki zostaną ustawione w prawidłowej kolejności. Po rozwiązaniu układanki zatrzymywany jest pomiar czasu i obliczany jest wynik gracza.

System punktacji uwzględnia rozmiar planszy, liczbę wykonanych ruchów oraz czas rozwiązania. W projekcie zastosowano osobne klasy systemu punktacji, wykorzystując dziedziczenie i funkcje wirtualne.

Po zakończeniu tury zdobyte punkty są dodawane do wyniku danego gracza. Następnie gra przechodzi do kolejnego gracza. Po rozegraniu wszystkich rund program wyświetla końcowe wyniki graczy.

Wersja podstawowa projektu została zrealizowana jako aplikacja konsolowa w środowisku **CLion**. Zaimplementowano logikę planszy, obsługę graczy i rund, pomiar czasu oraz system punktacji.

Rozpoczęto również implementację wersji okienkowej z wykorzystaniem biblioteki **Qt**. Skonfigurowano środowisko Qt oraz utworzono podstawowe okno aplikacji. Ze względu na ograniczenia czasowe pełna integracja interfejsu graficznego z logiką gry nie została ukończona. Kompletna i działająca wersja projektu została dostarczona w wersji konsolowej.

Dokumentację kodu przygotowano przy użyciu **Doxygen**.



# Biblioteki i narzędzia

## Język i środowisko

- **Język:** C++
- **Środowisko:** CLion
- **System budowania:** CMake
- **Dokumentacja:** Doxygen
- **Wersja podstawowa:** aplikacja konsolowa
- **Rozszerzenie:** rozpoczęta implementacja interfejsu Qt



## Biblioteki standardowe C++ (STL)

- `vector` – przechowywanie planszy oraz listy graczy
- `string` – obsługa nazw graczy
- `random` – losowanie ruchów planszy
- `iostream` – obsługa wejścia i wyjścia w wersji konsolowej
- `chrono` – pomiar czasu gry


## Qt – rozpoczęte rozszerzenie

W ramach rozszerzenia projektu rozpoczęto implementację interfejsu graficznego z wykorzystaniem biblioteki **Qt**. Skonfigurowano bibliotekę Qt w projekcie oraz utworzono podstawowe okno aplikacji. Pełna wersja interfejsu graficznego nie została ukończona.

Kod rozpoczętej wersji Qt znajduje się na osobnej gałęzi `qt-gui` repozytorium.