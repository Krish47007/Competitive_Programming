import java.util.*;

public class Frequency_In_Sorted_Array {

    static Map<Integer,Integer> freqElements(int[] arr)
    {
        Map<Integer,Integer> map = new LinkedHashMap<>();

        for(int i = 0;i<arr.length;i++)
        {
            if(map.get(arr[i]) == null)
                map.put(arr[i],1);
            else
                map.put(arr[i],map.get(arr[i]) + 1);
        }

        return map;
    }
    public static void main(String[] args) {

        Map<Integer,Integer> map = freqElements(new int[]{10,10,10,25,30,30});
        Set<Integer> set = map.keySet();

       for(int key : set)
           System.out.println(key + " "+map.get(key));

    }
}
