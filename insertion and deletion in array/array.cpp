#include <iostream>
using namespace std;

int main()
{
    int maxarray;

    cout << "max array to store values"<<endl;
    cin >> maxarray;

    cout<<endl;


    int array[maxarray], i, number, position, total, delpos;

    char caseno, insertcase, deletecase;

    // size of array represented with total
    cout << "enter size of array" << endl;
    cin >> total;

    if (total > 0 && total<=maxarray)
    {
        // print number with help of for loop
        cout << "enter numbers in array" << endl;
        for (i = 0; i < total; i++)
            cin >> array[i];
    }
    else
    {
        cout << "entered value is wrong " << endl;
        return 0;
    }

    do
    {

        // instruction for opreations to perform
        cout << "type --a--  for insert element in array" << endl;
        cout << "type --b--  for delete element in array" << endl;
        cout << "type --e--  for exit" << endl;

        // caseno is used to executed specific case number
        cin >> caseno;

        if (caseno == 'a' || caseno == 'b' || caseno == 'e')
        {
            switch (caseno)
            {

                // insert element  in array

            case 'a':

                // getting new number to add in array
                cout << "enter " << total + 1 << "th number to add in array" << endl;
                cin >> number;

                // getting position to add new number in array
                cout << "enter postion to enter number" << endl;
                cin >> position;

                // condition is checking  i.e
                // * wheather number is greater or equal to 0
                // * positon should be greater than 0
                // * but positon number not greater than size of array
                if (number >= 0 && position > 0 || position <= total)
                {
                    // instruction for opreations to perform in which position to add number
                    cout << "type --a--  for insert element at given positon" << endl;
                    cout << "type --b--  for insert element after given value" << endl;
                    cout << "type --c--  for insert element before given value" << endl;

                    // case opreation to be performed
                    cin >> insertcase;

                    switch (insertcase)
                    {

                        // case a is used for insertion in array with 3 operation

                        // at given position
                        // after given value
                        // before given value

                    case 'a':

                        // insert element at given positon in array

                        for (i = total; i >= position; i--)
                            array[i] = array[i - 1];
                        array[i] = number;

                        total++;

                        cout << "new array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];
                        cout << endl;
                        cout << endl;
                        break;

                    case 'b':

                        // insert element after given value

                        for (i = total; i >= position + 1; i--)
                            array[i] = array[i - 1];
                        array[i] = number;

                        total++;

                        cout << "new array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];

                        cout << endl;
                        break;

                    case 'c':

                        // insert element before given value

                        for (i = total; i >= position - 1; i--)
                            array[i] = array[i - 1];
                        array[i] = number;

                        total++;

                        cout << "new array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];

                        cout << endl;
                        break;
                    }

                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "number " << number << " and positon " << position << " should greater than 0 " << endl;
                    return 0;
                }

                break;

                // case a end here ( insertion in array end here )

                // case b is used for deletion in array with 3 operation

                // at given position
                // after given value
                // before given value

            case 'b':

                cout << "enter  position to delete number" << endl;
                cin >> delpos; // postion number

                if (delpos > 0 && delpos <= total)
                {
                    cout << "type --a--  for delete element at given positon" << endl;
                    cout << "type --b--  for delete element after given value" << endl;
                    cout << "type --c--  for delete element before given value" << endl;

                    cin >> deletecase;
                    switch (deletecase)
                    {
                    case 'a':
                        // delete element at given positon in array

                        for (i = delpos - 1; i < total; i++)
                            array[i] = array[i + 1];

                        total--;
                        cout << "new deleted array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];

                        cout << endl;
                        cout << endl;

                        break;

                    case 'b':

                        // delete element after given value

                        for (i = delpos; i < total; i++)
                            array[i] = array[i + 1];
                        total--;

                        cout << "new deleted array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];

                        cout << endl;
                        cout << endl;

                        break;

                    case 'c':

                        // delete element before given value

                        for (i = delpos - 2; i < total; i++)
                            array[i] = array[i + 1];
                        total--;
                        cout << "new deleted array" << endl;
                        for (i = 0; i < total; i++)
                            cout << array[i];

                        cout << endl;
                        cout << endl;

                        break;
                    }
                }
                else
                {
                    cout << "deletion in array not successfully performed";
                    return 0;
                }

                break;

                // last case e is used to  exit the switch case , in this when we call case e then this case return 1 and switch case get exits
            case 'e':
                return 1;
                break;
            }
        }
        else{
            cout<<"entered value is wrong";
            return 0; 
        }

    } while (caseno == 'a' || caseno == 'b' || caseno == 'e');
}
