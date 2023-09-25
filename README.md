#C語言學習筆記 L1
# 資料型態
# 簡易輸入輸出
重點整理:
1.printf、scanf、gets、puts等常用的輸入輸出函數皆位於stdio.h標頭檔中
2.資料型態:字元(char)、整數(int)、浮點數(float)、倍精度浮點數(double)......等等。
3.有號(sign)變數可存放正負值、無號(unsigned)變數只能存放正值，不過能表示範圍更大。
4.由L1_3可知，int佔了4位元組、float佔了4位元組、char佔了1位元組。
5.連續使用輸入函數在按下Enter鍵時會同時被判定而造成錯誤，須在中間加入清暫存的程式fflush(stdin)、rewind(stdin)。
