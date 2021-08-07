//
// Created by ubantu on 2021/8/7.
// 排序算法
//

#ifndef INC_2021_08_01_SORT_H
#define INC_2021_08_01_SORT_H

/*
 * 功 能：插入排序
 * 参 数：s: 数组
 *       len: 数组长度
 * 时 间：O(N^2)
 * 描 述：取出第P(P从1开始增长，保证到P处时，P-1之前的元素是有序的)个元素，
 *      然后依次从P-1到0处的元素进行比较。（相当于打牌时的抓牌并按大小放位置。）
 */
void InsertionSort(char *s, int len) {
    int i, j;
    char element;
    for (i = 1; i < len; i++) {
        element = s[i];
        for (j = i; j > 0 && s[j - 1] > element; j--)
            s[j] = s[j - 1];
        s[j] = element;
    }
}

/*
 * 功 能：希尔排序
 * 参 数：s: 数组
 *       len: 数组长度
 * 时 间：o(N^2)
 * 描 述：选取增量(步长)I(一般为长度的一半)，然后将数组按照步长I进行插入排序。
 */
void ShellSort(char *s, int len) {
    char tmp;
    int i, j, increment = len / 2;
    for (increment; increment > 0; increment /= 2) {
        for (i=increment; i<len; i++){
            tmp = s[i];
            for (j =i; j>=increment && s[j-increment] > tmp; j -= increment)
                s[j] = s[j-increment];
            s[j] = tmp;
        }
    }
}


#endif //INC_2021_08_01_SORT_H
