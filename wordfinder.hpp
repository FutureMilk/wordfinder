#include <iostream>
#include <getopt.h>

using namespace std;




// void getMode(int argc, char * argv[]) {
//     opterr = false; // Let us handle all error output for command line options
//     int choice = 0;
//     int index = 0;


//     option long_options[] = {
//         {"mode",  required_argument,  nullptr,   'm'},
//         {"help",  no_argument,        nullptr,   'h'},
//     };
    

//     while ((choice = getopt_long(argc, argv, "m:h", long_options, &index)) != -1) {
//         switch (choice) {
//             case 'm': {
//                 string arg{optarg};
//                 if (arg != "MST" && arg != "FASTTSP" && arg != "OPTTSP") {
//                     cerr << "Error: Invalid mode\n";
//                     exit(1);
//                 }
//                 // ketchum.mode = arg[0];
//                 break; 
//             }
//             case 'h': 
//                 //print help
//                 cout << "I just want to graduate dude";
//                 exit(0);
//             default:
//                 cerr << "Error: Invalid option\n";
//                 exit(1);
//         }  //  switch 
//     }  //  while 
// }  // getMode()

