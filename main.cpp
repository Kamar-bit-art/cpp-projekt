// Add here content of the exercise!
// Diese Funktion berechnet das größte k, sodass 2^k die Zahl 2n teilt.
// Wenn verbose wahr ist, wird jeder erfolgreiche Teilungsschritt ausgegeben.

/**
 * Berechnet die Ruler-Funktion für eine gegebene Zahl n.
 * 
 * @param n Ganze Zahl (int) – Die Eingabezahl, für die f(n) berechnet wird.
 * @param verbose Wahrheitswert (bool) – Wenn true, werden Zwischenschritte ausgegeben.
 * @return int – Das berechnete k.
 */
int ruler(int n, bool verbose) {
    int k = 0;             // Zähler für die Anzahl der Teilungen durch 2
    int wert = 2 * n;       // Starte mit 2n

    // Solange wert durch 2 ohne Rest teilbar ist
    while (wert % 2 == 0) {
        if (verbose) {
            // Ausgabe, dass 2 den aktuellen Wert teilt
            cout << "2 teilt " << wert << endl;
        }
        wert /= 2;          // Teile den Wert durch 2
        k++;                // Erhöhe den Zähler
    }

    return k;               // Gib das gefundene k zurück
}

/**
 * Fragt den Benutzer nach n und dem Verbose-Modus, berechnet und gibt f(n) aus.
 */
int main() {
    int n = 0;              // Eingabezahl
    bool verbose = false;   // Steuerung der ausführlichen Ausgabe

    // Benutzeraufforderung zur Eingabe der Zahl
    cout << "Bitte gib eine Zahl n ein: ";
    cin >> n;

    // Benutzeraufforderung zur Auswahl des Verbose-Modus
    cout << "Möchtest du die Zwischenschritte ausgeben lassen? (0 = Nein, 1 = Ja): ";
    cin >> verbose;

    // Berechne das Ergebnis mit der Ruler-Funktion
    int ergebnis = ruler(n, verbose);

    // Ausgabe des Ergebnisses
    cout << "Der Wert von f(" << n << ") ist: " << ergebnis << endl;

    return 0; // Beende das Programm erfolgreich
}




Exercise 3:

/**
 * Berechnet die Ruler-Funktion für eine gegebene Zahl n.
 */
int ruler(int n, bool verbose) {
    int k = 0;             // Zähler für die Anzahl der Teilungen durch 2
    int wert = 2 * n;      // Starte mit 2n

    // Solange wert durch 2 ohne Rest teilbar ist
    while (wert % 2 == 0) {
        if (verbose) {
            // Ausgabe, dass 2 den aktuellen Wert teilt
            cout << "2 teilt " << wert << endl;
        }
        wert /= 2;          // Teile den Wert durch 2
        k++;                // Erhöhe den Zähler
    }

    return k;               // Gib das gefundene k zurück
}

/**
 * Ruft die Funktion `ruler()` mit den Werten 228 und true auf.
 */
int main() {
    int n = 228;           // Die Zahl n, für die f(n) berechnet wird
    bool verbose = true;   // verbose auf true gesetzt, damit die Zwischenschritte angezeigt werden

    // Aufruf der Funktion ruler() mit den Argumenten n = 228 und verbose = true
    int ergebnis = ruler(n, verbose);

    // Ausgabe des Ergebnisses
    cout << "Der Wert von f(" << n << ") ist: " << ergebnis << endl;

    return 0; // Beende das Programm 
}

Exercise 2:

// Diese Funktion berechnet das größte k, sodass 2^k die Zahl 2n teilt.
// Wenn verbose wahr ist, wird jeder erfolgreiche Teilungsschritt ausgegeben.


int ruler(int n, bool verbose) {
    int k = 0;             // Zähler für die Anzahl der Teilungen durch 2
    int wert = 2 * n;       // Starte mit 2n

    // Solange wert durch 2 ohne Rest teilbar ist
    while (wert % 2 == 0) {
        if (verbose) {
            // Ausgabe, dass 2 den aktuellen Wert teilt
            cout << "2 teilt " << wert << endl;
        }
        wert /= 2;          // Teile den Wert durch 2
        k++;                // Erhöhe den Zähler
    }

    return k;               // Gib das gefundene k zurück
}

int main() {
    // Testfälle mit assert
    // Diese Tests verwenden verbose = false.

    // Test 1: n = 5
    // 2 * 5 = 10 -> 10 ist durch 2 teilbar, 10 / 2 = 5 -> f(5) = 1
    assert(ruler(5, false) == 1);

    // Test 2: n = 4
    // 2 * 4 = 8 -> 8 ist durch 2 teilbar, 8 / 2 = 4 -> 4 / 2 = 2 -> 2 / 2 = 1 -> f(4) = 3
    assert(ruler(4, false) == 3);

    // Test 3: n = 7
    // 2 * 7 = 14 -> 14 ist durch 2 teilbar, 14 / 2 = 7 -> f(7) = 1
    assert(ruler(7, false) == 1);

    // Test 4: n = 10
    // 2 * 10 = 20 -> 20 ist durch 2 teilbar, 20 / 2 = 10 -> 10 / 2 = 5 -> f(10) = 2
    assert(ruler(10, false) == 2);

    // Test 5: n = 8
    // 2 * 8 = 16 -> 16 ist durch 2 teilbar, 16 / 2 = 8 -> 8 / 2 = 4 -> 4 / 2 = 2 -> 2 / 2 = 1 -> f(8) = 4
    assert(ruler(8, false) == 4);

    cout << "Alle Tests wurden erfolgreich bestanden!" << endl;

    return 0;
}



























