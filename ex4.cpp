// Ex.4 P.1
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int MAX_GENERATED_NUMBER_VALUE = 1000;
    int first_number_in_couple;
    int second_number_in_couple;
    bool is_sorted = true;
    
    for (int current_generated_number_index = 0 ; 
            current_generated_number_index < 10; 
                current_generated_number_index+=2) {
        
        // Generating the numbers
        first_number_in_couple  = rand() % MAX_GENERATED_NUMBER_VALUE;
        second_number_in_couple = rand() % MAX_GENERATED_NUMBER_VALUE;
        
        // Printing the number
        cout << "first generated number: " << first_number_in_couple << "\n";
        cout << "second generated number: " << second_number_in_couple << "\n";
        
        if (! second_number_in_couple < first_number_in_couple) {
            is_sorted = false;   
        }
    }
    
    if (! is_sorted) {
        cout << "the 10 generated numbers were not sorted :(" << "\n";
    }
    else {
        cout << "the 10 generated numbers were sorted :)" << "\n";
    }
}



// Ex.4 P.2
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int inputs_sum_threshold, max_input_numbers;
    
    cout << "enter 2 positive numbers...\n";
    
    cin >> inputs_sum_threshold;
    
    while (inputs_sum_threshold <= 0) {
        cout << "ERROR\n";
        cin >> inputs_sum_threshold;    
    }
    
    cin >> max_input_numbers;
    
    while (max_input_numbers <= 0) {
        cout << "ERROR\n";
        cin >> max_input_numbers;    
    }
    
    cout << "enter a list of numbers...\n";
    
    int sum_inputs = 0, current_input_index = 0, current_input_number;
    bool is_input_valid = false;
    
    for ( ; current_input_index < max_input_numbers && sum_inputs <= inputs_sum_threshold ; current_input_index ++) {
        cin >> current_input_number;
        sum_inputs += current_input_number;
    }
 
    cout << sum_inputs << "\n";
}


// Ex.4 P.3
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "enter a number...\n";
    int fibonnaci_limit;
    cin >> fibonnaci_limit;
    
    while ( fibonnaci_limit < 0) {
        cout << "ERROR\n";
        cin >> fibonnaci_limit;    
    }
    
    const int fibonnaci_first_number  = 0;
    const int fibonnaci_second_number = 1;
  
    std::vector<int> fibonnaci_series;
    
    fibonnaci_series.push_back(fibonnaci_first_number);
    fibonnaci_series.push_back(fibonnaci_second_number);
    
    for (int current_fibonnaci_index = 2 ; current_fibonnaci_index <= fibonnaci_limit ; current_fibonnaci_index++) {
        fibonnaci_series.push_back(fibonnaci_series[current_fibonnaci_index - 2] + fibonnaci_series[current_fibonnaci_index - 1]);
    }
    
    for (int i = 0 ; i <= fibonnaci_limit; i++) {
        cout << fibonnaci_series[i] << " ";
    }
}



