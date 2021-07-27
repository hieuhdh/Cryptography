#include"library.h"

// Function to encrypt the string
string encrypt(string message){
    string cipher = "";
    for(int i = 0; i < message.size(); i++){

        if (message[i] != 32){ // Check message[i] backspace key
            
            if (message[i] >= UPPER_A && message[i] <= UPPER_M)
                cipher += message[i] + 13 ;
            else if (message[i] >= UPPER_N && message[i] <= UPPER_Z)
                cipher += message[i] - 13;
            if (message[i] >= LOWER_A && message[i] <= LOWER_M)
                cipher += message[i] + 13 ;
            else if (message[i] >= LOWER_N && message[i] <= LOWER_Z)
                cipher += message[i] - 13;
            else if(message[i] < UPPER_A || message[i] > LOWER_Z || (message[i] > UPPER_Z && message[i] < LOWER_A))
                cipher += message[i];
        
        }

        else if ( message[i] == 32) 
            // Add backspace key
            cipher += " ";
        
    }

    return cipher;
}
  
// Driver code
int main(){
    cls;
    string message;

    cout << "Input message: ";
    getline(cin, message);

    cout << "The message after encrypting: " << encrypt(message) << "\n";
    cout << "The message after decrypting: " << encrypt(encrypt(message)) << "\n";
    
    pause;
    return 0;
}
