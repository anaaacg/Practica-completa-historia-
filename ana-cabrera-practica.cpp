#include <iostream>
using namespace std;

int main (){
    string name;
    int ready;
        
    cout << "Ingresa tu nombre: " << endl;
    cin >> name;
    cout << "Hola " << name << ", bienvenido a esta maravillosa experiencia interactiva," << endl
         << "en donde te adentras en una historia llena de misterios." << endl;
    cout << "En esta historia tú eres el protagonista, y tu destino depende de las decisiones que tomes." << endl;
    
    cout << "¿Estás listo para comenzar?" << endl << "1. Si" << endl << "2. No" << endl;
    cin >> ready;
    
    if(ready == 1){
        cout << "¡Genial! Comencemos." << endl;
        cout << "Te deseo suerte en tu aventura." << endl;
        cout << "titulo" << endl;
        cout << "Te despiertas en un lugar desconocido, rodeado de árboles y un silencio inquietante." << endl;
        cout << "Intentas recordar que fue lo que te llevó hasta ahí, pero simplemente se te hace imposible." << endl;
        cout << "De repente, escuchas un ruido detrás de ti. Te das la vuelta y ves a un niño extraño que te observa fijamente." << endl;
        cout << "Tiene un aspecto descuidado, ropa húmeda y sucia, y su mirada profunda y fría te causa un escalofrío que sube por todo tu cuerpo." << endl;
        cout << "- Hola, soy Lucas, ¿quién eres tú? - dice el niño." << endl;
        cout << "- Soy " << name << ", ¿dónde estamos?" << endl;
        cout << "- No lo sé, ¿y tú?." << endl;
        cout << "- No, no lo sé. ¿Qué hacemos aquí?." << endl;
        cout << "- No lo sé, pero tengo miedo." << endl;
        cout << "- Yo también....- dices mientras intentas una vez más reconocer aquello que te rodea." << endl;
        
        int decision1;
        cout << "Elige una opción: " << endl
             << "1) Seguir a Lucas para buscar ayuda o respuestas." << endl
             << "2) Explorar la zona por tu cuenta y buscar pistas." << endl
             << "3) Huir corriendo en la dirección contraria." << endl
             << "Ingresa el número de tu elección: " << endl;
        cin >> decision1;
        
        int pista = -1;  
        

            if(decision1 == 1){
                        cout << "Decides seguir a Lucas, quien parece tener una idea de lo que está pasando." << endl;
                cout << "Después de caminar un rato, llegas a una cabaña con aspecto sucio y deteriorado." << endl;
                cout << "Lucas te dice que cree que la cabaña puede tener respuestas." << endl;
                cout << "¿Qué haces?" << endl;
                int decision1_1;
                cout << "Elige una opción: " << endl
                     << "1) Entrar a la cabaña con Lucas." << endl
                     << "2) Preguntar a Lucas si tiene alguna idea de lo que está pasando." << endl
                     << "3) Decirle a Lucas que espere en la cabaña y seguir explorando el bosque solo." << endl
                     << "Ingresa el número de tu elección: " << endl;
                cin >> decision1_1;
                if(decision1_1 == 1){
                    cout << "Decides entrar a la cabaña con Lucas, pero la puerta está cerrada." << endl;
                    
                    char Epuerta;
                    int abrirpuerta = 1;  
                    
                    while (abrirpuerta == 1) {  
                        int contador = 0;  
                        cout << "Agarras una piedra e intentas forzar la puerta pulsando la tecla 'E' 5 veces" << endl;
                        
                        for (int i = 0; i < 5; i++) { 
                            cout << "Presiona 'E': " << endl;
                            cin >> Epuerta;
                            if (Epuerta == 'E' || Epuerta == 'e') {
                                contador++;
                            } else {
                                cout << "Inténtalo de nuevo" << endl;
                                break;  
                            }
                        }
                        
                        if(contador == 5) {
                            abrirpuerta++;  
                        } 
                    }
                    
                    cout << "La puerta se abre" << endl;
                    cout << "Ambos entran a la cabaña, la cual está abandonada y llena de polvo." << endl;
                    pista = 0;  
                    
                } else if (decision1_1 == 2){
                    cout << "Decides preguntar a Lucas si tiene alguna idea de lo que está pasando." << endl;
                    cout << "- Yo no... creo que no... - dice Lucas, con una mirada perdida." << endl;
                    cout << "- Está bien, no te preocupes. Tal vez podamos encontrar algo en la cabaña." << endl;
                    cout << "Ambos deciden entrar a la cabaña pero la puerta está cerrada." << endl;
                    char Epuerta;
                    int abrirpuerta = 1;  
                    
                    while (abrirpuerta == 1) {  
                        int contador = 0;  
                        cout << "Agarras una piedra e intentas forzar la puerta pulsando la tecla 'E' 5 veces" << endl;
                        
                        for (int i = 0; i < 5; i++) { 
                            cout << "Presiona 'E': " << endl;
                            cin >> Epuerta;
                            if (Epuerta == 'E' || Epuerta == 'e') {
                                contador++;
                            } else {
                                cout << "Inténtalo de nuevo" << endl;
                                break;  
                            }
                        }
                        
                        if(contador == 5) {
                            abrirpuerta++;  
                        } 
                    }
                    
                    cout << "La puerta se abre" << endl;
                    cout << "Ambos entran a la cabaña, la cual está abandonada y llena de polvo." << endl;
                    pista = 0; 
                    
                } else if (decision1_1 == 3){
                    cout << "Decides decirle a Lucas que espere en la cabaña y seguir explorando el bosque solo." << endl;
                    cout << "Lucas parece un poco asustado, pero accede a esperar." << endl;
                    decision1 = 2;  
                }
            } 
            if (decision1 == 2){
                cout << "Decides explorar la zona por tu cuenta." << endl;
                cout << "Mientras caminas, encuentras un peluche tirado en el suelo." << endl;
                cout << "Es un peluche viejo y sucio, pero parece tener un aire familiar." << endl;
                cout << "¿Qué decides hacer?" << endl;
                int decision1_2;
                cout << "Elige una opción: " << endl
                     << "1) Recoger el peluche y seguir explorando." << endl
                     << "2) Llevar el peluche a Lucas." << endl
                     << "3) Ignorar el peluche y seguir caminando." << endl
                     << "Ingresa el número de tu elección: " << endl;
                cin >> decision1_2;
                if(decision1_2 == 1){
                    cout << "Decides recoger el peluche y seguir explorando." << endl;
                    cout << "Mientras caminas, te das cuenta de que el peluche tiene una pequeña nota en su interior." << endl;
                    cout << "La nota dice: 'Espera en la cabaña, volveré pronto." << endl
                         << "Ten cuidado, no salgas, y si lo escuchas llegar, corre y no mires atrás." << endl
                         << "Te quiere por siempre, Mamá.'" << endl;
                    cout << "Te sientes confundido y asustado." << endl;
                    cout << "Decides volver por Lucas para contarle lo que encontraste." << endl;
                    cout << "Cuando volviste, te diste cuenta de que él ya no se encontraba." << endl;
                    cout << "Te sientes un poco asustado, pero decides seguir buscando." << endl;
                    cout << "Mientras caminas, te das cuenta de que el bosque se vuelve cada vez más oscuro y tenebroso." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                    cout << "La puerta está abierta y parece que hay alguien dentro." << endl;
                    cout << "Decides entrar a la cabaña y encuentras a Lucas." << endl;
                    pista = 1;  
                }
                else if(decision1_2 == 2){
                    cout << "Decides llevar el peluche a Lucas." << endl;
                    cout << "Cuando llegas al lugar, le muestras el peluche." << endl;
                    cout << "Lucas se ve sorprendido y dice: 'Ese peluche es mío, ¿dónde lo encontraste?'." << endl;
                    cout << "Le cuentas que lo encontraste en el bosque y decidiste volver para ver si le pertenecía." << endl;
                    cout << "Lucas parece aliviado y dice: 'Gracias, pensé que lo había perdido para siempre'." << endl;
                    cout << "Ambos deciden ir a seguir explorando juntos." << endl;
                    cout << "Mientras caminan, te das cuenta de que el peluche tiene un agujero con una pequeña nota en su interior." << endl;
                    cout << "La nota dice: 'Espera en la cabaña, volveré pronto." << endl
                         << "Ten cuidado, no salgas, y si lo escuchas llegar, corre y no mires atrás." << endl
                         << "Te quiere por siempre, Mamá.'" << endl;
                    cout << "Le preguntas a Lucas por ella, pero él no sabe nada." << endl;
                    cout << "Te sientes confundido y asustado, pero decides no decir nada y continuar." << endl;
                    cout << "Mientras caminan, te das cuenta de que el bosque se vuelve cada vez más oscuro y tenebroso." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                    cout << "Se veía antigua y sucia, pero deciden entrar." << endl;
                    cout << "Al hacerlo, Lucas comenzó a comportarse extraño, como si estuviera recordando algo, como si..." << endl;
                    pista = 1;  
                }
                else if(decision1_2 == 3){
                    cout << "Decides ignorar el peluche y seguir caminando." << endl;
                    cout << "Mientras caminas, te das cuenta de que el bosque se vuelve cada vez más oscuro y tenebroso." << endl;
                    cout << "Te da miedo, por lo que decides dar la vuelta y regresar con Lucas." << endl;
                    cout << "Cuando llegas al lugar, te das cuenta de que Lucas no se encuentra." << endl;
                    cout << "Te sientes un poco asustado, pero decides seguir buscando." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                    cout << "La puerta está abierta y parece que hay alguien dentro." << endl;
                    cout << "Decides entrar a la cabaña y encuentras a Lucas." << endl;
                    pista = 1;  
                }
            }
            if (decision1 == 3){
                cout << "Decides huir corriendo en la dirección contraria." << endl;
                cout << "Mientras corres, te das cuenta de que el bosque se vuelve cada vez más oscuro y tenebroso." << endl;
                cout << "Luego de un tiempo, cansado y ya más tranquilo, decides parar a descansar." << endl;
                cout << "Mientras descansas, te das cuenta de que se escucha un río a lo lejos." << endl;
                cout << "Te levantas y decides ir a buscarlo." << endl;
                cout << "Mientras caminas, encuentras con una prenda, parece ser el abrigo de un niño, Lucas tal vez." << endl;
                cout << "¿Qué decides hacer?" << endl;
                int decision1_3;
                cout << "Elige una opción: " << endl
                     << "1) Recoger la prenda y seguir caminando." << endl
                     << "2) Ignorar la prenda y seguir caminando." << endl
                     << "3) Recoger la prenda y buscar a Lucas." << endl
                     << "Ingresa el número de tu elección: " << endl;
                cin >> decision1_3;
                if(decision1_3 == 1){
                    cout << "Decides recoger la prenda y seguir caminando." << endl;
                    cout << "Llegas al río y ves que este es muy profundo y peligroso." << endl;
                    cout << "Decides no cruzarlo y seguir explorando por otro lado." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                }
                else if(decision1_3 == 2){
                    cout << "Decides ignorar la prenda y seguir caminando." << endl;
                    cout << "Llegas al río y ves que este es muy profundo y peligroso." << endl;
                    cout << "Decides no cruzarlo y seguir explorando por otro lado." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                }
                else if(decision1_3 == 3){
                    cout << "Decides recoger la prenda y buscar a Lucas." << endl;
                    cout << "Cuando llegas al lugar, te das cuenta de que Lucas no se encuentra." << endl;
                    cout << "Te sientes un poco asustado, pero decides seguir buscando." << endl;
                    cout << "Más adelante encuentras una deteriorada cabaña." << endl;
                }
                cout << "Quieres entrar a la cabaña pero la puerta está cerrada." << endl;
                {
                    char Epuerta;
                    int abrirpuerta = 1;  
                    
                    while (abrirpuerta == 1) {  
                        int contador = 0;  
                        cout << "Agarras una piedra e intentas forzar la puerta pulsando la tecla 'E' 5 veces" << endl;
                        
                        for (int i = 0; i < 5; i++) { 
                            cout << "Presiona 'E': " << endl;
                            cin >> Epuerta;
                            if (Epuerta == 'E' || Epuerta == 'e') {
                                contador++;
                            } else {
                                cout << "Inténtalo de nuevo" << endl;
                                break;  
                            }
                        }
                        
                        if(contador == 5) {
                            abrirpuerta++;
                        } 
                    }
                }
    
                cout << "La puerta se abre" << endl;
                cout << "Entras a la cabaña, la cual está abandonada y llena de polvo." << endl;
                cout << "Luego de un par de horas escuchas la puerta abrirse." << endl;
                cout << "Te asustas y decides ir a ver." << endl;
                cout << "Al asomarte, ves a Lucas, quien parece estar un poco asustado." << endl;
                pista = 2; 
            }
        
        
        cout << "Lucas comienza a llorar, y tú, casado y confundido, decides abrazarlo." << endl;
        cout << "Mientras lo abrazas, sientes que algo no está bien." << endl
             << "Tu cabeza no deja de cuestionar todo lo que está pasando." << endl
             << "En medio de eso escuchas un sollozo de Lucas diciendo:" << endl
             << "- ¿Por qué me hizo eso? ¿Acaso mi mamita no me extraña?" << endl
             << "- Quiero irme a casa, no quiero estar aquí." << endl
             << "- ¿A qué te refieres? ¿Recuerdas algo de lo que te sucedió? - le preguntaste, pero él no dijo nada y siguió llorando." << endl;
             
        if(pista == 0){
            cout << "Decides no decir nada y seguir abrazándolo." << endl;
            cout << "Luego de un rato, Lucas se calma y te dice: 'Gracias por estar aquí'." << endl;
            cout << "Tú decides salir de la cabaña y seguir explorando los alrededores para ver si encuentras algo más." << endl;
            cout << "Mientras estas caminando esuchas una corriente de agua y decides ir hacia alli." << endl
            << "en el camino encuentras un abrigo pequeño y supones que puede ser de Lucas"<<endl
            << "sigues y encuentras un rio muy profundo y peligroso"<<endl
            << "decides volver a la cabaña con lucas"<<endl;
            cout << "Le preguntas acerca del abrigo que habías visto antes." << endl
            << "Él responde: 'Ese abrigo me lo dio mi mami, es mi favorito'." << endl
            << "'Estaba con él cuando mi mami me dejó aquí'." << endl
            << "'Ella me dijo que volvería por mí, pero nunca lo hizo'." << endl;
            cout << "Entonces, ¿ya logras reconocer dónde estamos? -- le preguntas." << endl
                 << "'No, no lo sé, pero mi mami me dijo que no saliera de la cabaña, " << endl
                 << "y que si mi papá venía a buscarme, me escondiera." << endl
                 << "Pero mientras lo hacía, mi peluche se cayó y mi papi me encontró." << endl
                 << "Así que hice lo que ella me dijo y corrí a esconderme." << endl
                 << "Pero mientras corría cerca de un río se me cayó mi abrigo, me caí y me golpeé la cabeza." << endl
                 << "'Cuando me desperté me hacía frío, ya no estaba mi mami, ni mi peluche, ni nada." << endl
                 << "'Solo estaba yo, y el bosque. Y luego te encontré a ti.' " << endl;
            cout << "Muchas más dudas pasaron por tu cabeza. ¿Qué sucedió con su madre? ¿Esconderse de su papá? ¿Corrían ambos peligro?" << endl;
            cout << "Cuando de repente...." << endl;
        }
        else if(pista == 1){
            cout << "Decides no decir nada y seguir abrazándolo." << endl;
            cout << "Luego de un rato, Lucas se calma y te dice: 'Gracias por estar aquí'." << endl
                 << "Le preguntas acerca del peluche que habías visto antes." << endl
                 << "Él responde: 'Ese peluche es ñoñi, siempre lo llevaba conmigo'." << endl
                 << "'Él me acompañó cuando mi mami me dejó aquí'." << endl
                 << "'Ella me dijo que volvería por mí, pero nunca lo hizo'." << endl;
            cout << "Entonces, ¿ya logras reconocer dónde estamos? -- le preguntas." << endl
                 << "'No, no lo sé, pero mi mami me dijo que no saliera de la cabaña, " << endl
                 << "y que si mi papá venía a buscarme, me escondiera." << endl
                 << "Pero mientras lo hacía, ñoñi se cayó y mi papi me encontró." << endl
                 << "Así que hice lo que ella me dijo y corrí a esconderme." << endl
                 << "Pero mientras corría cerca de un río, me caí y me golpeé la cabeza." << endl
                 << "'Cuando me desperté, ya no estaba mi mami, ni ñoñi, ni nada." << endl
                 << "'Solo estaba yo, y el bosque. Y luego te encontré a ti.' " << endl;
            cout << "Muchas más dudas pasaron por tu cabeza. ¿Qué sucedió con su madre? ¿Esconderse de su papá? ¿Corrían ambos peligro?" << endl;
            cout << "Cuando de repente...." << endl;
        }
        else if(pista == 2){
            cout << "Decides no decir nada y seguir abrazándolo." << endl;
            cout << "Luego de un rato, Lucas se calma y te dice: 'Gracias por estar aquí'." << endl
                 << "Le preguntas acerca del abrigo que habías visto antes." << endl
                 << "Él responde: 'Ese abrigo me lo dio mi mami, es mi favorito'." << endl
                 << "'Estaba con él cuando mi mami me dejó aquí'." << endl
                 << "'Ella me dijo que volvería por mí, pero nunca lo hizo'." << endl;
            cout << "Entonces, ¿ya logras reconocer dónde estamos? -- le preguntas." << endl
                 << "'No, no lo sé, pero mi mami me dijo que no saliera de la cabaña, " << endl
                 << "y que si mi papá venía a buscarme, me escondiera." << endl
                 << "Pero mientras lo hacía, mi peluche se cayó y mi papi me encontró." << endl
                 << "Así que hice lo que ella me dijo y corrí a esconderme." << endl
                 << "Pero mientras corría cerca de un río se me cayó mi abrigo, me caí y me golpeé la cabeza." << endl
                 << "'Cuando me desperté me hacía frío, ya no estaba mi mami, ni mi peluche, ni nada." << endl
                 << "'Solo estaba yo, y el bosque. Y luego te encontré a ti.' " << endl;
            cout << "Muchas más dudas pasaron por tu cabeza. ¿Qué sucedió con su madre? ¿Esconderse de su papá? ¿Corrían ambos peligro?" << endl;
            cout << "Cuando de repente...." << endl;
        }
        
    
    cout<<"suena la alarma, un nuevo dia comienza."<<endl
    <<"haces tu rutina de cada mañana y mientras desayunas escuchas las noticias reproduciendo..."<<endl;
    cout << "NOTICIA DE ULTIMO MOMENTO:" << endl;
    cout << "El dia de ayer, Jueves 27 de marzo, se descubrio el cuerpo sin vida de un menor a orillas de un rio, "
         << "lo que ha dejado a la comunidad completamente consternada." << endl;
    cout << "El pequeño fue identificado como Jose Lucas Dávalos Ortega, de tan solo 5 años de edad. "
         << "El cadaver presentaba multiples heridas y, en particular, un golpe severo en la cabeza, lo que sugiere un acto de violencia extrema." << endl;
    cout << "Al intentar localizar a sus familiares, las autoridades realizaron un descubrimiento aun mas perturbador: "
         << "la madre del niño fue encontrada muerta en su domicilio, victima de un asesinato. En el lugar, los investigadores hallaron grabaciones y evidencia "
         << "que apuntan a que la mujer sufria constantes maltratos a manos de su pareja." << endl;
    cout << "El principal sospechoso, quien ya esta siendo intensamente buscado, es el cónyuge de la madre, y se espera que sea procesado judicialmente "
         << "por estos crimenes tan desgarradores." << endl;
    }else{
        cout << "¡No hay problema! Puedes volver cuando quieras." << endl;
    }
    
    return 0;
}