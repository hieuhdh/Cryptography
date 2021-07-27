#include"library.h"

// Function to encrypt the string
string encrypt(string message){
    string cipher = "";
    for(int i = 0; i < message.size(); i++){

        if (message[i] != 32){ // Check for duplicates between message[i] and backspace key
            
            if (message[i] >= UPPER_A && message[i] < UPPER_J)
                cipher += message[i] + 17;
            else if (message[i] >= UPPER_J && message[i] <= UPPER_Z)
                cipher += message[i] - 9;
            else if (message[i] >= LOWER_A && message[i] < LOWER_J)
                cipher += message[i] + 17;
            else if (message[i] >= LOWER_J && message[i] <= LOWER_Z)
                cipher += message[i] - 9;
            else if(message[i] < UPPER_A || message[i] > LOWER_Z || (message[i] > UPPER_Z && message[i] < LOWER_A))
                cipher += message[i];
            
        }

        else 
            // Add backspace key
            cipher += " ";
    }

    return cipher;
}

// Function to decrypt the string
string decrypt(string message){
    string decipher = "";
    for(int i = 0; i < message.size(); i++){

        if (message[i] != 32){ // Check for duplicates between message[i] and backspace key
            
            if (message[i] > UPPER_Q && message[i] <= UPPER_Z)
                decipher += message[i] - 17;
            else if (message[i] >= UPPER_A && message[i] <= UPPER_Q)
                decipher += message[i] + 9;
            else if (message[i] > LOWER_Q && message[i] <= LOWER_Z)
                decipher += message[i] - 17;
            else if (message[i] >= LOWER_A && message[i] <= LOWER_Q)
                decipher += message[i] + 9;
            else if(message[i] < UPPER_A || message[i] > LOWER_Z || (message[i] > UPPER_Z && message[i] < LOWER_A))
                decipher += message[i];
            
        }

        else 
            // Add backspace key
            decipher += " ";
    }

    return decipher;
}
  
// Driver code
int main(){
    cls;
    string message;

    cout << "Input message: ";
    getline(cin, message);

    cout << "The message after encrypting: " << encrypt(message) << "\n";
    cout << "The message after decrypting: " << decrypt(message) << "\n";

    pause;
    return 0;
}
