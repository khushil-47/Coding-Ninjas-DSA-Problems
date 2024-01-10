#include <bits/stdc++.h> 
int calculateScore(vector<string> &matchResult, int n)
{
    
    vector<int>temp;

    int j=0;

    for(int i=0;i<n;i++){

        string s=matchResult[i];

        if(s=="+"){

            temp.push_back(temp[j-1]+temp[j-2]); // adding previous two elements

            j++;

        }

        else if(s=="D"){

            temp.push_back(2*temp[j-1]); //adding double of previous element

            j++;

    }

        else if(s=="C"){

                temp.pop_back(); //removing element

                j--;

        }

        else{

            j++;

            temp.push_back(stoi(s)); //stoi() fun converts string into integer

        }

    }

    int result = 0;

    for(int i=0;i<temp.size();i++){

        result +=temp[i]; //adding all the values in result

    }

    return result ;
}
