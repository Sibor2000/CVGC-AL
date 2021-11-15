# CVGC-AL
Car video game controller using Arduino Leonardo

###ENG###
-coming soon-

###HUN###
Szükséges hard és szoftver elemek
-A kormány modul
-A pedál modul
-Arduino program esetleges konfiguráció estén
-Egy olyan autós játék ami támogatja a kontrollereket.

Programozási és hardware dokumentáció

A kontrollerem alapjában véve egy Arduino Leonardo köré épül. Ennek a mikroprocesszornak az a tulajdonsága, hogy a számítógép perifériális eszközként ismeri fel. Az Arduino Leonardot az Arduino saját fordítóprogramjával programoztam be, ez alapjában véve egy C++ környezet. Annak érdekében, hogy a számítógép kontrollerként ismerje fel a Leonardot, a Joystick.h könyvtárat használtam.
A Joystick.h könyvtár segítségével két pedált, egy kormányt és két gombot sikerült beprogramozni.

A kontrollert fából, fémből, szenzorokból és egyéb elektronikai részekből építettem meg.
A pedáloknál szenzorként potenciométereket használtam. Ezek úgy működnek, hogy annak függvényében, hogy mennyire vannak elfordítva, a bemeneti feszültséget két irányba osszák szét. Előnyük az, hogy olcsók és meglehetősen strapabírók.
A kormány több részből áll. A kormánykerék egy régi Volkswagenből lett kiemelve. A tengely egy függönyrúd lefűrészelt része. Szenzorként egy enkódert használtam. Ez hasonlít a potenciométerhez, viszont sokkal pontosabb és képes arra, hogy a fordulás sebességét is visszatérítse. Az enkódert és a tengelyt két 3d-s nyomtatóval készített fogaskerék köti össze. Ezeket az Igus weboldalán készítettem.
A sebességváltó két limitswitchből áll. Ezek igazából gombok, csak az alakjuk miatt sokkal strapabíróbbak.

Felhasználói dokumentáció

Csatlakoztatod az Arduinot a számítógéphez és ha fel van rá töltve a program, minden rendeben kéne működjön. A játékba belépve be kell állítani a kontrollokat és kész.

Továbbfejlesztési lehetőségek

A kontrolleren rengeteg mindent lehet fejleszteni. Eredetileg hárompedálosra terveztem, viszont a könyvtár csak két pedált enged, terveim szerint a harmadik potenciométert gombként kezelem.
Egy arduino motor shield és motor segítségével force-feedbacket lehet beépíteni, ehhez még szükség van fogaskerekére.
A kormány lehetne kisebb és ha lennének rajta gombok azokat be lehetne kötni. Ezeket a gombokat egy fésű segítségével csatlakoztathatjuk az arduinohoz.
A kormány mögé lehetne klapettákat szerelni, mint a valódi versenyautókban, ezeket is limit swtichekkel oldhatjuk meg.
A kontrollert lehetne fémből és műanyagból készíteni, a fa nem egy ideális megoldás, de legalább olcsó.
