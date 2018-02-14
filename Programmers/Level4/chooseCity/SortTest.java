import java.util.*;
 
public class SortTest
{
    public static void printArray(Object[][] arr)
    {
        for( int i = 0; i < arr.length; i++ )
        {
            for( int j = 0; j < arr[i].length; j++ )
                System.out.print(arr[i][j] + "\t");
            System.out.println();
        }
        System.out.println();
    }
     
    public static void sortArray(Object[][] arr)
    {
        Arrays.sort(arr, new Comparator<Object[]>() {
            public int compare(Object[] arr1, Object[] arr2) {
                if( ((Comparable)arr1[1]).compareTo(arr2[1]) < 0 )
                    return 1;
                else
                    return -1;
            }
        });
    }
 
    public static void main(String[] args)
    {
        Object arr[][] = {  {"...", 90, "...", "aa", 1},
                            {"...", 65, "...", "bb", 4},
                            {"...", 84, "...", "cc", 2},
                            {"...", 80, "...", "dd", 3},
                            {"...", 30, "...", "ee", 5}
            };
         
        printArray(arr);
         
        sortArray(arr);
 
        printArray(arr);
    }
}