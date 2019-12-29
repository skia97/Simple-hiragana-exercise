#include  "funz.h"
using namespace std;

int main(){
    int n;
    int *v;
    int k=0;



    srand(time(NULL));
    cout << "Insert number of characters for exercise: "<<endl;
    cin>> n;

    //ciclo controllo imput valori:
    while (n<0 || n>200){
        cout << "Error! number of characters must be in (0,200]"<< endl;
        cout << "Insert number of characters for exercise: "<< endl ;
        cin >>n;
    }
    
    v=new int [n];
    for (int i=0; i<n; i++){
        v[i]= numsing();
    }
// lungo delirio sulla conversione da numero a carattere in romanji...
    while (k<n){
        //composti di a
        if (v[k]==0){
            cout<< "a ";
            k++;
        }
        if (v[k]==1){
            cout<< "ka ";
            k++;
        }
        if (v[k]==2){
            cout<< "sa ";
            k++;
        }
        if (v[k]==3){
            cout<< "ta ";
            k++;
        }
        if (v[k]==4){
            cout<< "na ";
            k++;
        }
        if (v[k]==5){
            cout<< "ha ";
            k++;
        }
        if (v[k]==6){
            cout<< "ma ";
            k++;
        }
        if (v[k]==7){
            cout<< "ya ";
            k++;
        }
        if (v[k]==8){
            cout<< "ra ";
            k++;
        }
        if (v[k]==9){
            cout<< "wa ";
            k++;
        }
        if (v[k]==10){
            cout<< "ga ";
            k++;
        }
        if (v[k]==11){
            cout<< "za ";
            k++;
        }
        if (v[k]==12){
            cout<< "da ";
            k++;
        }
        if (v[k]==13){
            cout<< "ba ";
            k++;
        }
        if (v[k]==14){
            cout<< "pa ";
            k++;
        }
        //i
        if (v[k]==15){
            cout<< "i ";
            k++;
        }
        if (v[k]==16){
            cout<< "ki ";
            k++;
        }
        if (v[k]==17){
            cout<< "shi ";
            k++;
        }
        if (v[k]==18){
            cout<< "chi ";
            k++;
        }
        if (v[k]==19){
            cout<< "ni ";
            k++;
        }
        if (v[k]==20){
            cout<< "hi ";
            k++;
        }
        if (v[k]==21){
            cout<< "mi ";
            k++;
        }
        //
        if (v[k]==22){
            cout<< "ri ";
            k++;
        }
        if (v[k]==23){
            cout<< "wi ";
            k++;
        }
        if (v[k]==24){
            cout<< "gi ";
            k++;
        }
        if (v[k]==25){
            cout<< "ji ";
            k++;
        }
        if (v[k]==26){
            cout<< "dji ";
            k++;
        }
        if (v[k]==27){
            cout<< "bi ";
            k++;
        }
        if (v[k]==28){
            cout<< "pi ";
            k++;
        }
        //u
        if (v[k]==29){
            cout<< "u ";
            k++;
        }
        if (v[k]==30){
            cout<< "ku ";
            k++;
        }
        if (v[k]==31){
            cout<< "su ";
            k++;
        }
        if (v[k]==32){
            cout<< "tsu ";
            k++;
        }
        if (v[k]==33){
            cout<< "nu ";
            k++;
        }
        if (v[k]==34){
            cout<< "fu ";
            k++;
        }
        if (v[k]==35){
            cout<< "mu ";
            k++;
        }
        if (v[k]==36){
            cout<< "yu ";
            k++;
        }
        if (v[k]==37){
            cout<< "ru ";
            k++;
        }
        if (v[k]==38){
            cout<< "gu ";
            k++;
        }
        if (v[k]==39){
            cout<< "zu ";
            k++;
        }
        if (v[k]==40){
            cout<< "dzu ";
            k++;
        }
        if (v[k]==41){
            cout<< "bu ";
            k++;
        }
        if (v[k]==42){
            cout<< "pu ";
            k++;
        }
        //e
        if (v[k]==43){
            cout<< "e ";
            k++;
        }
        if (v[k]==44){
            cout<< "ke ";
            k++;
        }
        if (v[k]==45){
            cout<< "se ";
            k++;
        }
        if (v[k]==46){
            cout<< "te ";
            k++;
        }
        if (v[k]==47){
            cout<< "ne ";
            k++;
        }
        if (v[k]==48){
            cout<< "he ";
            k++;
        }
        if (v[k]==49){
            cout<< "me ";
            k++;
        }
        if (v[k]==50){
            cout<< "re ";
            k++;
        }
        if (v[k]==51){
            cout<< "we ";
            k++;
        }
        if (v[k]==52){
            cout<< "ge ";
            k++;
        }
        if (v[k]==53){
            cout<< "ze ";
            k++;
        }
        if (v[k]==54){
            cout<< "de ";
            k++;
        }
        if (v[k]==55){
            cout<< "be ";
            k++;
        }
        if (v[k]==56){
            cout<< "pe ";
            k++;
        }
        //o
        if (v[k]==57){
            cout<< "o ";
            k++;
        }
        if (v[k]==58){
            cout<< "ko ";
            k++;
        }
        if (v[k]==59){
            cout<< "so ";
            k++;
        }
        if (v[k]==60){
            cout<< "to ";
            k++;
        }
        if (v[k]==61){
            cout<< "no ";
            k++;
        }
        if (v[k]==62){
            cout<< "ho ";
            k++;
        }
        if (v[k]==63){
            cout<< "mo ";
            k++;
        }
        if (v[k]==64){
            cout<< "yo ";
            k++;
        }
        if (v[k]==65){
            cout<< "ro ";
            k++;
        }
        if (v[k]==66){
            cout<< "wo ";
            k++;
        }
        if (v[k]==67){
            cout<< "go ";
            k++;
        }
        if (v[k]==68){
            cout<< "zo ";
            k++;
        }
        if (v[k]==69){
            cout<< "do ";
            k++;
        }
        if (v[k]==70){
            cout<< "bo ";
            k++;
        }
        if (v[k]==71){
            cout<< "po ";
            k++;
        }
        //
        if (v[k]==72){
            cout<< "kya ";
            k++;
        }
        if (v[k]==73){
            cout<< "sha ";
            k++;
        }
        if (v[k]==74){
            cout<< "cha ";
            k++;
        }
        if (v[k]==75){
            cout<< "nya ";
            k++;
        }
        if (v[k]==76){
            cout<< "hya ";
            k++;
        }
        if (v[k]==77){
            cout<< "mya ";
            k++;
        }
        if (v[k]==78){
            cout<< "rya ";
            k++;
        }
        //
        if (v[k]==79){
            cout<< "kyu ";
            k++;
        }
        if (v[k]==80){
            cout<< "shu ";
            k++;
        }
        if (v[k]==81){
            cout<< "chu ";
            k++;
        }
        if (v[k]==82){
            cout<< "nyu ";
            k++;
        }
        if (v[k]==83){
            cout<< "hyu ";
            k++;
        }
        if (v[k]==84){
            cout<< "myu ";
            k++;
        }
        if (v[k]==85){
            cout<< "ryu ";
            k++;
        }
        //
        if (v[k]==86){
            cout<< "kyo ";
            k++;
        }
        if (v[k]==87){
            cout<< "sho ";
            k++;
        }
        if (v[k]==88){
            cout<< "cho ";
            k++;
        }
        if (v[k]==89){
            cout<< "nyo ";
            k++;
        }
        if (v[k]==90){
            cout<< "hyo ";
            k++;
        }
        if (v[k]==91){
            cout<< "myo ";
            k++;
        }
        if (v[k]==92){
            cout<< "ryo ";
            k++;
        }
        //
        if (v[k]==93){
            cout<< "gya ";
            k++;
        }
        if (v[k]==94){
            cout<< "ja ";
            k++;
        }
        if (v[k]==95){
            cout<< "dja ";
            k++;
        }
        if (v[k]==96){
            cout<< "bya ";
            k++;
        }
        if (v[k]==97){
            cout<< "pya ";
            k++;
        }
        //
        if (v[k]==98){
            cout<< "gyu ";
            k++;
        }
        if (v[k]==99){
            cout<< "ju ";
            k++;
        }
        if (v[k]==100){
            cout<< "dju ";
            k++;
        }
        if (v[k]==101){
            cout<< "byu ";
            k++;
        }
        if (v[k]==102){
            cout<< "pyu ";
            k++;
        }
        //
        if (v[k]==103){
            cout<< "gyo ";
            k++;
        }
        if (v[k]==104){
            cout<< "jo ";
            k++;
        }
        if (v[k]==105){
            cout<< "djo ";
            k++;
        }
        if (v[k]==106){
            cout<< "byo ";
            k++;
        }
        if (v[k]==107){
            cout<< "pyo ";
            k++;
        }
        if (v[k]==108){
            cout<< "n";
            k++;
        }
        if (v[k]==109){
            v[k]--;
        }
        //finita la sostituzione
    }
    cout << endl;


    return 0;
}
//--29/12/19 mancava 'n', sistemato ed aggiunto; aggiunto controllo su n; sistemata probabilita' di ultimo carattere;
