//
//  main.cpp
//  AckleyFunction
//
//  Created by mahmut akyol on 23.11.2016.
//  Copyright © 2016 home. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    float firstSum = 0.0;
    float secondSum = 0.0;
    float start, end, result, resultForN2;
    int n = 0;
    
    // kromozom değer aralıkları girilir
    // grilen değerler sırası ile başlangıç ve son olmak üzere
    // start ve end değerlerine atanır.
    cout << "C1: ";
    cin >> start;
    cout << "C2: ";
    cin >> end;
    
    //Önce toplam sembolü içindeki işlemler girilen değer aralığında tanımlanır.
    for (int c = start; c <= end; c++) {
        firstSum += powf(c, 2.0);
        secondSum += cosf(2.0 * M_PI * c);
        n++;
    }
    
    //Değer aralığında bulunan toplam değerleri ackley fonksiyonunda yerine konarak sonuca ulaşılır.
    result = (-20.0) * expf((-0.2) * sqrtf(firstSum/n)) - expf(secondSum / n) + 20 + M_E;
    resultForN2 = (-20.0) * expf((-0.2) * sqrtf(firstSum / 2)) - expf(secondSum / 2) + 20 + M_E;
    
    
    //Sonuç ekrana yazdırılır.
    cout << "originalResult: " << result << endl;
    cout << "resultForN2: " << resultForN2 << endl;
    
    return 0;
}
