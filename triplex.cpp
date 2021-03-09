#include <iostream>
#include <ctime>
#include <string>

void PrintCoverImg()
{
    std::cout << "\n\n";
    std::cout << R"(
                                                                    `-sddmmmmmmmmmmmmmmho:`                                                           
                                                                ./+hdddmmmNmNNNNNNNNNNNmmdho`                                                         
                                                               .ymdmmdmmmmmNNNNNNNNNNNNNNNmmds:`                                                      
                                                    `.`.--`  .ohdmmNmmNmddmmNNNNNNNNNNNNNNNNmmmy-                                                     
                                                    :dyhmd- -oddmmNNNNNNmmdmmmmmNmNNNNNNNNNNNNmmdo`                                                   
                                                    .mhhmm/./ydmmmmNNmmNNNNNNNNNNNNmmNNNNNNNNNNNmd/                                                   
                                                     ddymm+.ommNNdyysyhyhdmdhsssso+ooosyydmNNNNNmmh-                                                  
                                                     ydymms.yNNNd+/::-----:-...---::/++ooyhmNNmmmmmh                                                  
                                                     omymNhoNNNmy/::-......```...--:/+++syhdmNmmmmmd:                                                 
                                                     +mydNdomNNms/:--...........--:///+oyyhmNmmmmmmms                                                 
                                                     :mhdNmsmNNNy+:---..........-::://+syhdNNNmNmmmmh`                                                
                                                     .mhdNmdmNNNd+::---.........-:://+oshdmNNNNNNmmmd.                                                
                                                     `ddhmmohmNNdsoo+/::-:::---://+ooshddmmNNNNNNmmms                                                 
                                                      hdhmmo-mmNdysyhhhyys/::+yhhhhdddddmmmmNNNNmmd-                                                  
                                                      sdhmms -hmh++o//+/+/:.:syo//:/oshyyhhdmNNNmdd.                                                  
                                                      -hdmd:  +dy/-------::-/so+:---:///+oydmmmmmdh-                                                  
                                                      yydmmo  -sy/---..--::-+soo/----::/+sydmmmmmdy`                                                  
                                                     -hddmmo  `/y+/:-----/-./sys/----//osyydmmmmhy-                                                   
                                                    `yddddms   `+s+/:--:/+:-oyhyo::::/osyyhdmmmdh/                                                    
                                                 `.-sdddddmy    .yo+/:--:++shdhy+:://oyyhdddmmmmd.                                                    
                                                -`  .yddmmmh     ss+/::::/://+++/++++oyhddhdmmmmh`                                                    
                                               `:..--+ddmmmd     .o+///+++++oossooosooyhhhhmmmdo`                                                     
                                             ``.ho:-:+hdddmd.     `o+++///::/++oossooshdhdmmmmo                                                       
                                        ```.`.-:o....:smmddd-      .oo++oosssyyssssoyhddmmNmmdy`                                                      
                                    ``..-:::..::+h/..:yNmmdd:       `/++///////+oooyhdmmNmmddhhy+                                                     
                                   `---:.:::-.-/:s/../hNmdmd:         /o++////+osyhmmmmmdddyyydmd+                                                    
                                   .:--/--:::-.::--.-odNmmmm/         +yyyyyyyyhhddddddhyooydmmmmdo                                                   
                                   .::::---::-.-//-.-omNmdmmy`       `:syso+oyhhhhhhhy+/+ymNNmmmmmdo                                                  
                                   .--.--..:/-.-++/::ymNmdmd:        --.:`   `...-----ohmmmmmmmmmmmdo`                                                
                                   ----:::-/:--/+/+/shmmy/:-       `-+oo`          :sdmmmmmmmmmmNmmmmh.                                               
                                   ::::/::://::o+/+shhs`     `-/+shmddso+       `+hmmmmmmmmmNNNNNNmmmmh:                                              
                                  .-::://::+/-/o++shhs` `:shdmmmmmmmhdddh:    -sdmmmmmmmNNNNNNNNNNNNmmmdy-                                            
                                  --::://::+::o++shh+ `odmmNNNNNNNNddmdd+` `/hmmmmmmmNNNNNNNNNNNNNNNNmmmmdo`                                          
                                  ----::/::+:+o/shh- /dNNNNNNNNNNNdsdddy `+dmmmmNNNNNNNNNNNNNNNNNNNNNNNmmmmh+`                                        
                                  .:---:://+/s/shd- omNNNNNNNNNNNdysmdd//dmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmdh:                                       
                                  `:---:///++ooyh/ omNNNNNMMMMMNNdyydmmdmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmdy.                                     
                                   :---:://+oosyh`-mNNNNMMMMMMNNmssymNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmd/                                    
                                   .:::-::::-:::/-mNNNNMMMMMMMNNhysdNNNNNNNNNNNNNNNNNNNNNNNNNmmmmmmmNNNNNNNNNNNmmd-                                   
                                    `          `.:dNNNMMMMMMMNmyoddNNNNNNNNNNNNNNNNNNNNmmmmmmmmmmNNNNNNNNNNNNNNNmms                                   
)";
}

void PrintIntroduction(int Difficulty)
{
    // Lays out the story to introduce the main game loop
    // std::string userName; 
    // std::cout << "Enter a name: ";
    // std::cin >> userName; // Get user input from the keyboard
    // std::cout << std::endl;
    // std::cout << "Hello, Agent " << userName;
    std::cout << "\nYou are breaking into level #" << Difficulty;
    std::cout << "\nYou need to enter the correct code in order to not raise any alarms...\n";
}


bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declares the 3 number code with its CodeSum and CodeProduct
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC; 
    int CodeProduct = CodeA * CodeB * CodeC;


    // Prints the instructions to the terminal
    std::cout << std::endl;
    std::cout << "- There are 3 numbers in the code";
    std::cout << "\n- They add up to " << CodeSum;
    std::cout << "\n- They multiply to " << CodeProduct;
    std::cout << std::endl;

    int GuessA, GuessB, GuessC;

    // Prompts the user to input their guesses
    std::cout << std::endl;
    std::cout << "Enter number #1: ";
    std::cin >> GuessA;
    std::cout << "Enter number #2: ";
    std::cin >> GuessB;
    std::cout << "Enter number #3: ";
    std::cin >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << R"(
                                                                                                 ` ````.``.````.``..``````.`.....`.`.``....`          
                                                 ```   .``   ``.                                 - ``-.--..--. ```````````` ````` `````````           
                           `+`  ./    :          /:+  `+:/   :/+`                                . ..--:-.--:-.----.-..---.---------:.`````           
                            -   `-    .          `.`   `.`   `.`                                 . ``----..--.---.-.-.----.-..-.-..---.-.--           
                            .    .    .           .     .     .                                  -  `---`````````````````````````````.`.``.           
                            .    .    .        `.`.     .     .                                  - .`--:.-------:-:.--.......`......`.`....           
                            .    .    .  .:/ooossy/-`   .     .                                  . ``-.-..-.-.--..--...`...`.`....````...`.`          
                            .    .    .`-os++syyyyoyo:` .     .                                  . ``:-::-:-`..``````..``.``.`.`.`````.`````          
                            .    .    .:o/.``./o+/++syo/-`    .                                  - ``--...`.`......`....```....`.``.....`.``          
                            .    . ``.::/-     `::ososooo/:`  .                                  - ``:---.....-.`-`.-` `                              
                            .    ..//--./+-````..-.s+ooo+oys/`.                    ``            - .`:-.-.--------:.-.--.```````````````````          
                .--.        .    ..o+/++yhy+s+sy:.oyyyyyosssys:`           ````````/+``````-::   . ``-------::--.-:---:..``.``.`..`..`..`..`          
               .hdyd.    ``.-``  . .ss+syy+:sssooosoo++/////:.-.         `` `.--./-/.      `.`   .`.`--:--.-----.:--:.`````````` ```````` `           
              `/soo/o:-:-:dNdhs- . o+:-/::oo:o:+/++o/o/+/+:-` .        ``  -s:+s:o-        ..-`  .`.`--...-.-....---------..------:......`.`          
           `  `/+:++:-:shysysoo` . ++`-+/syhhs/.-++o:+o/++:/+:-      ``    `+++oo/.````````-::.  .`-`::----::.-:-:-:--:.----.-:--::.`-.....`          
          ./``---:/-.-``    .     `-o/++ssmymho///``/:++oo+:--:.  ```     `oysyys:.         ``   . ` -.-`-.--.-.-..``  `                              
               ::..-/       ``````.syo++hs/hy+/.:.::++sso+-+/.-+.``   `..-/oyhhyhys/.``````-+o-  .`:`:::-:::-:/.:-::::-:.::--.....-......--           
          -:````.-:-```````````````/h//sd/ oooo+o. :::/:+o//.-:s+ ./oo:--.sss+++ssys-.           .`-`------..------.-..--.-..---`                     
          `.      `             /o+oo//:-- .+yss//++++///:oo+o+s: `++/s:--++:--`-/.-.+           .`-`:--:-..-::------::-:-:.                          
                  ` ````````    -ooso+++oyo:+:y/::.:/oos/so//---    `..--//+-..``.-+:/           .`:`::/::--.---:---.:::----.`                        
          .-             `.-...-oosysyooyhsy/:--::----` .-/y:-------`.```..-+d/.-`.+             .`-`:---...----...--.-`-.-.---.                      
          --`````````...:-:-```:hyyhhs/o+o/..`            -hs  :--:----.--:+oo:``.`              .`:`//:::/-/-:::/-`.-.....`                          
                    :-  .yyo+/ `o//os.````-...:` ..-//-./:.:+..::/:-....-...:- ````````````-++-  .`- -.-......--....`---.-.`-`..-.-`..`..-`.          
          `/````````:.:..`---.``----.``````/:-+:--:++/:/+:/o+/:-.`                         ``.`  .`. ::::-:-:-::--::-:--:::::.....`                   
                     .+/...:.``:---     `.----/.:syhyshyyhsysoos:                           ``   .`-`:--.-..-.---.-.-----.```                         
          -/``````````./.--/  ....````.----:/++o++hhsyhys+yyyyyyys+.```````````````````````-+/   .`:`::.:-.-----:.--:-:::.-.:-:-----.```              
          `.           ```.:..```......-`:o/--/mhmmds-.-//+oNmyooo+-                        ``   .`-`::-::.---:::.-.--:.--.-------..-.-..`.`          
          .-```````````````.```````.``--.o/::--yoooo:``....oyyshmdo:.                       ``   . ` ----. ` `````` ````````````````````````          
          ./               .          `..+/+s++soyo///:...:dyoyhdhhhs.`` ``` ``````````````-//-  .`- ::----..`..``....`..-.`-.`.`..``.....``          
         ```               .          -///::+:+o+shyyo+os+oosyso//+o`                       ```  .`. ---.-..`..`.`.......`......`                     
         -::```````````````.````````  /s/` `.:-/ysdNMMMMNhy+/oss+oos-.                           .`: :-:-::---:--:--:::::::-:::::-.`````````          
          ``               .          ./s:.` -./-/oomMMmhyyy+oyyys+///-.                         . . ------...---:..-.-.:--``...```````.````          
         `:/```````````````.```````````.++:.`-..-..:-syo/:/ooo++o+-///++`                        . - ::--:----::--.::.::--`                           
          ``               .            `oo-:--.`.:/:-..::o-:.:+o+-``-::```````  ``````````./+.  .`:`::--.----::--------```                           
         `.-               `````        `-/os//..`-//+++ooh/o-oo:/  ```-.::--::- `  `  `  ``.``  .`: :-----.:.:--:::.--::--                           
         `:/`   `    ````   ````````      `:so-``.-.`/+/:+///+/+/:``` `.:++//++-           `.``  .`:`:::-:----::-:-:-:---:---..........               
          ``                      `````     --/```.-./o+/++o+/:..```.-/::+++o//.```````````./-:  .`: -----.-...-----.--...`                           
         `/+``````````````````````````.-``   ..``  `--..-.`  `````  -::/so+++++:.                .`/`:/:::-:-:::...``.`                               
                                     -//:.                ``````    :-o+/o///+/o:`  ```````.:--  . - --...-.------..---```                            
           `                         `+s/`         ``````````...`` .o+/o/--+/+:.````       `...  .`: ::--:-:.:---:-.:.:-:-.....``-`.-`......          
         ./o``````````````````````.:./++:/.-  ``.-/+/+o+-//+oo://:-+o-/o++//:.`            `..`  . ` ------:.````````````````                         
                                  .:.----.-+.`//+oo//osyys++//-..-::+.`.:-///--`           .::.  .`: :----.---.-.-:::`.`....`                         
         `:/`````````````````````-.:/+//+osoo/o+:/+:/+soo:-:+/..---:+--/-+:-o//-.                .`:`::::.-::-.-.-------``-.--.--`--.--.`.-`          
          .-                 `.:/:`-:`o:+d/oooyymo+++/-/h/`-./:-/-+od:/y:s--o/:`:/` ..`       `  .   .---`- ....`.`.`.--.`..-.-.`...........          
         `.-         `..-::///+++- ``-++so://++/h++o-:yys:/+.o/....odhhy///+/-/+:+./++/-`    :d:```. ::::--...----.-.-----...--..`-.--......          
          /+```````.-+o//:..+++ooh+/o++oosyysooys+///s+o--://s++o//o..-dy++/.:-/s//o:.+o:  `:--.`.`` -.-:---.::---:-:-:--::````````````  `      `     
                  `:-s+`   .--./sodsdhhoo++ooo-+o//oooyyysoo+++/+d++/+o:++/oooohhh:.:/-+:```-``  .`+`://:-://:/:::/:////:/:/:::::///:`....      `     
         `++```````//o-`   `  -+s/+/s+o/::/:+o:/:-.:+ooo+//+ooooooys/++/+oyyyossyd- /::/-        .`/:+:++::---.-.---:--:`` ` ``  ```` ` ``            
                  `/++ `  `  ``/ss+s++/++/os+//:++o///:hmyooo:/so///:shs/:/:/+mhmo-`o.//-``./::  .`:`::-.--:--:.------:....-----.--`                  
         .//``    `/:+````---:.o/+::o/o+::sso++::-om:-/so+//:---o/::-:::syossyhhdyy/:::/.   `oss`.`: :::----:::-:--:-::-:::::-:`.-..                  
         `.-       /:/ ` `:-:: +so:-/o+/+oo/////-:+y//:.```...-:o/:/-. .sysssyosh+o/.-//`   ``-- .`- -.-..---..-.-...--.--..-..-.-.`.`......          
                   /-/ ` .:::- +:so+o:-`-//+ooss+o/:+ -o++h/+yssms+o:` .oysssyosy+s/:./+.``.+//  .   -.:::::..`..-.`..--.-....`..----`--....          
                   /-/`` .:::..///-oooo.+soh/oo+-+:./.od+oyssmsod+:/+. .ohsssyosyos:-:/o    `    .`````....`````````````````````````````````          
         `..       /:o::.:///::///-oooo /s/hos:+-+/:::+y/oddddssdo/::/..shsssyooyos  `:+``..                   ``.                                    
         .:/```````//+::-.....`///-+++o`:/.s.s///:/+.:/o-ossddssd+  ``/-ohsyyysyyoo..-:/+o+:/:```            ``-/+`                                   
         `         /+/`        ://-o+oo :- o`o/:--.::-/o-oosddssdo-://+.oh+///ssy+/-.....` `:o/.               ` `                                    
         ///```````./-`````````://-+++/`:-.o-+//:/--/-+o-ossddsshs+::---/yo:s+oo/.`.````` `---++:              ``.                                    
         ```                   ://.ooo+ :/:y/+//::-:/-/o-ossdh++//:/-:/:hhh+s//+//:/.```....../o/` ````````````-::                                    
                               /+/-oooo ::-s:+/:..o/+++s-ossmdo+oo+/:+-:/shy+-:-/oo+:+...-/osyo::::``.-                                  ``           
                               ::+-ooos`/::+://++++o+/+d/oyhmy:-:syy:/:/:://:-:+//oo::/--/o//:+/+:+so:+        ``.                        `           
                                `:-//::.o++//:-.``  :-:os+syo::+s/:+::/..` .:-+.-:-:::/+:----:/:::/so-/````````-/+`                       `           
                          `+-```````..---..`````````.:o/:-+s::/:++//`    ```+/y:::///+//..`..:::::-/o-/                                   `           
                           .``                      .-:/::/o/`.:.``   ``   `+yy:.-/+/-` ``.////+o+.-o:+:       `..                                    
                                                         ``.. `    ``` ``.-hyyso+o:-. `-:++/-ossoo:-d-+/       -:/`                                   
                          .::.``               ```    ````````     ..--:/ohmdyso+/``::-/+-``-+o//+o-sos  `..`                                         
                          `.-`                                     :+/://ohdy/s---.+o-..`  .-.-.-:/:-./.-/..:  ..-                                    
                          `..`                            ``       ://-.++ossosy+/oo---``...-.....-/::::/-  :  .:/`                                   
                          -:/-``         `  `````     ```````````  :/- -/++++/+Nds++oo/+o--/.--:..-.-:--.   :                                         
                                                                   :.- :-/::-.`+yys:ooos:--.-.:-  `.-:so```.:. .-:`                                   
                          -:+.`````````````````````````````````````:.-`:...:o:-/oh-+//y-:.:...``..` .-..````::`.--`                                   
                          ```                                      :::.:..``--:/o://.+:/yo/:``.` `----`     :-                                        
                          ``.                                `.-::/:+o:+/:-.--.+o  `.-:-/`:-.:.----.`  `.--:/:.`                                      
                          :/+.``````````````````````````..-.::-..``-+/-+.:-:+s+sy`     -:s::y+-.`..`.-//o/+//:/::+/.                                  
                                                  `....-.-`     .+-:-:-/:-o+/s+oo:-    . .:+.`    -+/:.-/....:///+syo-                                
                                             `..--.-------    ..----.:+ `-://:y:-:`sy- ` .s+     :ooosso./+o+:/:-/+s::/                               
                            `          `...----.`  :.``  `   `.`.` ..-:////:-.::-+/dh+ ` .d-:-.  oyosyyso+:`.-:---:+/..-.                             
                          -+o-````.-:.-:``/:--.+/  `  ``..   `......:/--.        .://: `  +---`/do+yyyo+-`.-. `--:+oooosoo.                           
                                ::-:::::`--...:s-  --:::/....`...//+--            --+:--   `...++dyhoo+/+.` `:++++++++++++o+`                         
                           .``  o  .-+-::-s. ``   `/:--.......```::-::             --...        .hyso+/+::-:+++++//-.`` .:/:/:                        
                          `/-.``://-.:/---..-/+--.`.....`  `..```-:/:-             .   `         oyssso:-+/+++/:...`.----/++:o.                       
                           `     ./+//::.-:////:::-.-.     `` ``-+/:-//            .   `          ohhh/:oo+++/. -::::/oyhdhysyo.                      
                                  `--..-:/::-:...`         ``   -/::+o/            .   `          .:sy:osoo//:/:+:+/s/+sydhNmmd/                      
                          .//-`     `:o/oo`                ``     ````             .   `          . `--yss/:::+ooo+/::::://ooss/                      
                          `..`       -o/o+`                ``                      `   `          .   .yso//:++yy/:-:/::::::://.                      
                                      .:/`                  `                      `   `          .    -s++s/syNh:::::://::://-                       
            ``````````````````````     ``                   `                      `   .          .     `//:+omNd++++:-////+/.                        
           `-````...-----..--````-                          `                      .   .          .       -+osdNNo++++::/+/-`                         
           `. ``````...`..`..``  -                          .                      .   .          .         .:ooso+o+//:-.                            
           `. ``..`....`.......` -                          .                      .   .          .           ````..```                               
           `.  .-----..------..  -                          .                      .   .          .                                                   
           `.    .-.---.----`    -                          .                      .   .          .                                      `            
           `.    `..........     .                         `.`                    `-` `.`        .-`                                     `            
           `--...-:-:-::-.:---...-                         ///                    /+/ -/:       .+:-                                                  
           `.............`.`......                         .``                                                                                        
)";
    std::cout << "\n\nYou cracked the code! Continue to the next level to complete your mission!\n";
    return true;
    }
    else 
    {
        std::cout << R"(
MMMMMMMMMMMMMMMMMMMNNNmmNNNNNmNNNNmNNNmmmmmNNNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmmmNNmmmmmmmmmmmmmmmmMNmmmmmmmmmmmmmmmmmmmmmmMMMNMMMMMMM
MMMMMMMMMMMMMMMMMMMMMNNmNNNNmNMNmNNMNNNNmmmmmmNNNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmNNmmmmmmmmmmmmmmmNMmmmmmmmmmmmmmmmmmmmmmmMMNNMMMMMMM
MMMMMMMMMMMMMMMMMMMNNNNMMNNNMMNNNNmmmNNNNNNmmmmmNNMNmmmmmmmmmmmmmmmmNNNNNNNmmmmmmmmmNNNmmmmmmmmmmmmmNmmmmmmmmmmmmmmmMNmmmmmmmmmmmmmmmmmmmmmMMNmNMMMMMM
MMMMMMMMMMMMMMMMMNNNNNMMNNNNNMMMMMMNNmNNMNNmmmmmNNMMNNNNNNNNNNNNMMMMMMMMMMMMMMMNNNNmmmmNNmmmmmmmmmmmmNNmmmmmmmmmmmmmNMmmmmmmmmmmmmmmmmmmmmmMMNmmmNMMMM
MMMMMMMMMMMMMMMNNNNNNMNMMMNNNNNNNMNNNNNMMNmNNNNMMMNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNmmNNmmmmmmmmmmmNNmmmmmmmmmmmmmMNmmmmmmmmmmmmmmmmmmmmMMmmmmmmNNM
MMMMMMMMMMMMMMNNNNNNNNNNNNMMNNNNNNMNNNNMMMMNNNNMMMNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNNNNmmmmmmmmmmNNmmmmmmmmmmmmNMmmmmmmmmmmmmmmmmmmmNMMmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMNNNNNNNNNNNNNMMNNMMNNMMMNNNMMMMMMMMMMMMMMMMMMMMMNNNNNNNNNNNNNMMMMMMMMMMMMNNmmmmmmmmmNmmmmmmmmmmmmmMmmmmmmmmmmmmmmmmmmmNMMmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMMNNNNNMMMMMNMNNMMNNNMMMMMMMMMMMMMMMMNNmmmddddddddddddddddmmNNMMMMMMMMNmmmmmmmmmNmmmmmmmmmmmmMNmmmmmmmmmmmmmmmmmmNMNmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMNMMMMNNNMMNNNMMMMMMMMMMMMMMNmdddddddddddddddddddddddddddmNNMMMMMMNmmmmmmmmNmmmmmmmmmmmNNmmmmmmmmmmmmmmmmmmMMmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMNNNMMMMNNNNMMMNNNNNNNMMMMMMMMMMMMNmddddddddddddddmNNmdddddddddddddddmmNMMMMNmmmmmmmNNmmmmmmmmmmNMmmmmmmmmmmmmmmmmmmMMmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMNMMMMMMNNNMMMNNMMMMMMMMMMMMMMMMmddddddddddddddddNmNNNmdddddddddddddddddmNMMMNmmmmmmmNmmmmmmmmmmmMmmmmmmmmmmmmmmmmmNMNmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMMMMNNNNNMMMMMMMMMMMMmddddddddddddddddddmmmNNmdddddddddddddddddddmNMMNmmmmmmmNmmmmmmmmmmMmmmmmmmmmmmmmmmmmMMNmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMMMMNmddddddddddddddddddddmmNmddddddddddddddddddddddmMMNmmmmmmNmmmmmmmmmmMmmmmmmmmmmdddmmmmMMmmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMMNNNNNNNMMMMMMMMMMMMMMMmdddddddhhhhddddddddmmdmmNmddddddddddddddddddddddddNMNmmmmmNmmmmmmmmmmMmmmdhyo+/:::::/+NMmmmmmmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMNNNNNNNNNMMMMMMMMMMMMNmdddhyo/-.``.:shddddNMNdmNNmNNmddddddddddddddddddddddNMNmmmmmNmmmmmmmmmMds/:-----------/MN:/oydmmmmmmm
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdys+:.`        `-ydddmMMNNMNmmNNmdddhhyyssssssssyyhhdddNMNmmmmNmmmmmmmdhN:--------------hMy.---:/sydmdd
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm:.`               `/yddNMMMMMNddNd/:-..```     ````..:oydNMNmmmNmmmdhyo:+m.-------------/NN-------.-:/oy
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo                    `/smNNNNNNy/Nm.                    `-/dNhsodo+/::---sh--------------dMo----------..-
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdd`                      `+mmmNNNmyNN+                       /No--y--------d+-------------oMd--------------
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNo                        +mmmNNNNNNNy                       `my--h-------:m-------------:NN:--------------
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMN-                        ymmmmNNNNNNm.                       oN:-h-------sy-------------hNo---------------
MMMMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMm`                        ymmmmNNNNNNN+                       :Mo:s------:m:------------sMy----------------
MMMMMMMMMMMMMMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMd                        `dmmmmNNNNNNNd`                      .Nyo/------sy---------:::oNh-----------------
MMMMMMNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd                        -mmmmNNNNNNNNm+                      `Nyy------/d:--------:::+Nd:-----------------
MMMMMNMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMN`                       -mmmNNNNNNNNNds                      .Nd/-----:h+-----:-::::/md:------------------
MMMMNMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMMM-                       .mmNNNNmNNNNNds                      +Ns------ss-----::::::/md:---------------:---
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs                       -mNNNNm:hNNNNy`                      hd------os------:-:::+mh:----------------:---
MMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMMMMm.`                     :mNNNNs -dmNNh                      -N+-----os-------::::oNy:----------:--:--:----
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+``                    +NNNNm-  /mNNm-                    `hd----:ss-------::::smo--------::::::::::::::-
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/``                   yNNNNy    hmNNo                    +N/---:s+----:---::/hd/--::::::::::::::::::::::
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:``                  yNNNm-    /NNNy                   /mo---/y/--------::omy:---:-:::::::::::::::::::o
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/``                `mNNNy     -NNNd                 `+No--:oo---------:/hd+----::::::::::::::::::::+dM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo``               .mNNh`     `mNNm`               `sNo-:+s/------:--:sds:-------::::::::::::::::+hMMN
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh-``             .mNm.       hNNm.              :dd/:+o/--------::+dy/--:::-:::::::::::::::::/hNMNh/
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNNs.``           .NNy        oNNd`            .sms/oo/---------:+hy/-----::::::::::::::::::/hNMNy/--
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMddNNs-`          sNN:        :NNm`         `.smhoo+:---------:ohy/------:::::::::::::::::+hNMNy/-:-:
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmNMNysdNNh/.``    `:NNm:     ` ``hNN/```````./yNmso/:---:---::/shs:---:---::::::::::::::::odMMms:-:::::
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMmyhdmdssdmNNy+.```-sso/-.````    /hmd+..-:+ymds+::-------::/ohy+---:---::::::::::::::::/smMNh+:::::::::
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmNMdoyNmNMNmssdmNdyo/.``           ``-/o+ymmho/:::---:::::/syy+:-----::::::::::::::::::+hNMmy/-::::::::::
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNyNMN+sdmNms////+oyhdNNmhysssooossyhdmdhys+::::--:-:::/syys/-------:::::::::::::::::/ymMNh+::::::::::::+d
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmmhshNm+/+sydy/::::::::/+oyddhyssoo+/:----:::::::/+syyso/:----::-:::::::::::::::::/sdMNdo::::::::::::::sNM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhsooomm/::::+hy+::::::::::::/+ooooooooossssssssso/:-------::::::::::::::::::::/sdNNdo::::::::::::::::yMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNo///+o//:::::/yhs::::::::::-----------------------:-:-:-:-::::::::::::::::oymMNho:::::::::::::::::+dMMMM
        )";
        std::cout << "\n\nYou entered the wrong code! Enemy forces are closing in on your position.\nHurry and try again before they get there!\n";
        return false;
    }
}


int main()
{
    srand(time(NULL));

    PrintCoverImg();
    // Gets the users name in the beginning so it doesn't ask for it every level loop
    std::string userName; 
    std::cout << "Enter your codename: ";
    std::cin >> userName; // Get user input from the keyboard
    std::cout << std::endl;
    std::cout << "Hello, Agent " << userName << ", you are a spec ops agent for the [REDACTED]\nYour mission is to infiltrate an enemy controlled facility to acquire schematics for a new type of mili-tech hardware\nThere is five levels you need to infiltrate!\n";


    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) //Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            // Increase the level difficulty 
            ++LevelDifficulty;
        }
        
    }
    std::cout << "You acquired all of the schematics! Get out of there and reach the rendezvous point for extract!";
    return 0;
}