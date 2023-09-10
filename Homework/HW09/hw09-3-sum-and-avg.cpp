/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)
    
    Test case:
        Input value to Array1 [0]: 
            9
        Input value to Array1 [1]: 
            5
        Input value to Array1 [2]: 
            6
        Input value to Array1 [3]: 
            8
        Input value to Array1 [4]: 
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]: 
            7
        Input value to Array1 [1]: 
            -3
        Input value to Array1 [2]: 
            5
        Input value to Array1 [3]: 
            19
        Input value to Array1 [4]: 
            27
        Input value to Array1 [5]: 
            -16
        Input value to Array1 [6]: 
            13
        Input value to Array1 [7]: 
            -7
        Input value to Array1 [8]: 
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*/

#include <stdio.h>

int main() {
    
    int array1[ 100 ]  ;
    int count = 0 , check ;
    
    while ( check != -1) { // รับค่าจนสิ้น -1 
        printf ( "Input : \n" ) ;
        scanf ( "%d", &check ) ;
        if ( check != -1 ) {
            array1[ count ] = check ;
            count++ ;
        } // end if
    } // end while

    // แสดงค่า array1 ทั้งหมด
    printf ( "Array1 =" ) ;
    for ( int  i = 0 ; i < count ; i++) {
       printf ( " %d", array1[ i ] ) ;
    } // end for
 
    // แสดงค่า array2 ที่เพิ่งสร้างให้ช่องเท่ากับรอบที่เก็บ และแต่ละช่องมีค่า = 0
    int array2[ count ] ;
    printf ( "\nArray2 =" ) ;
    for ( int  i = 0 ; i < count ; i++) {
        array2[ i ] = 0 ;
       printf ( " %d", array2[ i ] ) ;
    } // end for

    // ให้ array2 = array1
    printf ( "\n--| Copy Data from Array1 to Array2" ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        array2[ i ] = array1[ i ] ;
    } // end for

    // แสดง array2 ที่เพิ่งก็อปข้อมูลจาก array1 
    printf ( "\nArray2 =" ) ;
    for ( int i = 0 ; i < count ; i++) {
        printf ( " %d", array2[ i] ) ;
    } // end for
    
    return 0;
}