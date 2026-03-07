# Sliding Puzzle

## Zaawansowane C++

Realizacja: rok akademicki **2025/2026**, półsemestr: **3**  

**Autor:**  
Przemysław Marcinkowski  
Numer albumu: **347314**

---

## Wybrany temat

**Układanki z lat dziecinnych – przesuwane puzzle n×n z jednym pustym polem.**

---

## Opis działania programu

Celem programu jest symulacja klasycznej układanki przesuwanych kafelków w wersji jedno- lub wieloosobowej. Program umożliwia rozegranie rozgrywki przez kilku graczy grających kolejno, z możliwością prowadzenia rankingu wyników oraz systemu punktowego zależnego od poziomu trudności, liczby ruchów i czasu rozwiązania.

Po uruchomieniu aplikacji użytkownicy wprowadzają swoje nazwy (nicki). Możliwe jest dodanie dowolnej liczby graczy, którzy będą uczestniczyć w rozgrywce. Po zatwierdzeniu listy graczy rozpoczyna się seria rund. W każdej rundzie gracze grają kolejno – aktywny gracz jest wyświetlany na ekranie wraz z numerem rundy.

Przed rozpoczęciem swojej tury gracz wybiera poziom trudności, który odpowiada rozmiarowi planszy **n×n**. Przykładowo rozmiar **3×3** oznacza poziom prostszy, natomiast **6×6** poziom trudniejszy. Po wybraniu poziomu program generuje planszę zawierającą kafelki ponumerowane od **1 do n²−1** oraz jedno puste pole oznaczone symbolem **„_”**. Początkowy układ jest od razu losowy, ale jednocześnie gwarantujący rozwiązywalność.

Podczas rozgrywki gracz wykonuje ruchy poprzez przesuwanie kafelka sąsiadującego z pustym polem. W wersji konsolowej ruch może być realizowany poprzez wskazanie kierunku (góra, dół, lewo, prawo) lub numeru kafelka znajdującego się obok pustego pola. W wersji okienkowej kafelki są reprezentowane jako przyciski, a kliknięcie przycisku powoduje przesunięcie kafelka na puste pole, o ile ruch jest dozwolony. Program weryfikuje poprawność każdego ruchu i blokuje operacje niezgodne z zasadami gry.

Podczas rozgrywki zliczana jest liczba wykonanych ruchów oraz mierzony jest czas od momentu rozpoczęcia tury danego gracza. Aktualna liczba ruchów oraz czas wyświetlane są na ekranie w czasie rzeczywistym. Gracz ma możliwość cofnięcia ostatniego ruchu, co przywraca poprzedni stan planszy i odpowiednio aktualizuje licznik ruchów.

Warunek zwycięstwa zostaje spełniony, gdy kafelki są ułożone w kolejności rosnącej wierszami, a puste pole znajduje się w prawym dolnym rogu planszy. Po zakończeniu gry program wyświetla komunikat o zakończeniu rundy oraz podsumowanie zawierające liczbę ruchów i czas rozwiązania.

System punktacji zależy od wybranego poziomu trudności, liczby wykonanych ruchów oraz czasu rozwiązania. Wyższy poziom trudności zwiększa bazową liczbę punktów, natomiast większa liczba ruchów i dłuższy czas powodują jej obniżenie. Dzięki temu gracze rozwiązujący trudniejsze układanki szybciej i mniejszą liczbą ruchów otrzymują więcej punktów.

Po zakończeniu swojej tury wynik gracza zostaje zapisany do tablicy wyników wraz z jego nickiem, rozmiarem planszy, liczbą ruchów, czasem oraz zdobytymi punktami. Po zapisaniu wyniku gra przechodzi do kolejnego gracza. Po rozegraniu wszystkich tur możliwe jest rozpoczęcie kolejnej rundy, w której gracze ponownie grają w tej samej kolejności. Liczba rund może być ustalana na początku gry.

Tablica wyników przechowuje wszystkie uzyskane rezultaty i umożliwia ich przeglądanie w osobnym widoku. Wyniki mogą być sortowane według liczby punktów lub czasu. Dane są zapisywane do pliku, dzięki czemu ranking pozostaje dostępny po ponownym uruchomieniu programu.

Wersja podstawowa projektu będzie realizowana jako aplikacja konsolowa w środowisku **CLion**, w której zaimplementowana zostanie pełna logika gry oraz mechanizmy zarządzania graczami i punktacją. W kolejnym etapie jako rozszerzenie projektu powstanie wersja okienkowa z wykorzystaniem biblioteki **Qt**. Interfejs graficzny będzie stanowił warstwę prezentacji i będzie korzystał z tej samej logiki gry, co zapewni wyraźne rozdzielenie modelu od interfejsu użytkownika.

---

# Biblioteki i narzędzia

## Język i środowisko

- **Język:** C++
- **System budowania:** CMake
- **Etap 1:** CLion – implementacja logiki gry, obsługi graczy, rund oraz wersji konsolowej
- **Etap 2 (rozszerzenie):** Qt – wersja okienkowa aplikacji

---

## Biblioteki standardowe C++ (STL)

- `vector` – przechowywanie planszy oraz listy graczy i wyników  
- `string` – obsługa nazw graczy (nicków)  
- `random` – generowanie losowego układu planszy  
- `iostream` – obsługa wersji konsolowej  
- `fstream` – zapis i odczyt tablicy wyników oraz stanu gry  
- `chrono` – pomiar czasu gry  

---

## Qt (wersja graficzna – rozszerzenie)

- `QMainWindow` – główne okno aplikacji  
- `QGridLayout` – siatka planszy n×n  
- `QPushButton` – kafelki planszy  
- `QLabel` – wyświetlanie liczby ruchów, czasu oraz aktualnego gracza  
- `QMessageBox` – komunikaty o wygranej i podsumowanie rundy  
