#include <stdio.h>

int main()
{
    int n;  
    // n variable array का size store करने के लिए

    // user से array का size input लेना
    printf("ENTER SIZE OF ARRAY = ");
    scanf("%d", &n);

    int arr[n];
    // user-defined size का array declare किया

    // array के सभी elements user से input लेने के लिए loop
    for (int i = 0; i < n; i++)
    {
        // user को बताने के लिए कौन सा element enter करना है
        printf("ENTER %d ELEMENT = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest, second;
    // largest -> सबसे बड़ा element store करेगा
    // second  -> दूसरा सबसे बड़ा element store करेगा

    // array के पहले दो elements की तुलना
    if (arr[0] > arr[1])
    {
        // अगर पहला element बड़ा है
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        // अगर दूसरा element बड़ा है
        largest = arr[1];
        second = arr[0];
    }

    // तीसरे element से लेकर आखिरी element तक loop
    for (int i = 2; i < n; i++)
    {
        // अगर current element largest से बड़ा है
        if (arr[i] > largest)
        {
            // पुराना largest अब second largest बन जाएगा
            second = largest;
            // नया largest update होगा
            largest = arr[i];
        }
        // अगर element second से बड़ा है और largest के बराबर नहीं है
        else if (arr[i] > second && arr[i] != largest)
        {
            // second largest update होगा
            second = arr[i];
        }
    }

    // दूसरा सबसे बड़ा element print करना
    printf("\nSECOND LARGEST ELEMENT = %d", second);

    return 0;
}
