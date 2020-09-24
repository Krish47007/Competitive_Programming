import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SubsetSum {

    static int sum(List<Integer> list)
    {
        int sum = 0;

        for(int x : list)
            sum+=x;

        return sum;
    }

    static int countSubsetSum(List<Integer> oList,List<Integer> tList,int sum,int index)
    {
        if(sum == 0)
            return 1;
        if( index == oList.size())
        {
            int s = sum(tList);
            if(s == sum)
            {
                System.out.println(tList);
                return 1;
            }
            return 0;
        }
        int res = 0;

        res += countSubsetSum(oList,tList,sum,index + 1);
        tList.add(oList.get(index));
        res += countSubsetSum(oList,tList,sum,index + 1);
        if( tList.size() > 0)
            tList.remove(tList.size() - 1);


        return res;
    }

    public static void main(String[] args) {
 

        System.out.println(countSubsetSum(Arrays.asList(10,5,2,3,6),new ArrayList<Integer>(),8,0)); //2
        System.out.println(countSubsetSum(Arrays.asList(10,20,15),new ArrayList<Integer>(),37,0)); //0
        System.out.println(countSubsetSum(Arrays.asList(1,2,3),new ArrayList<Integer>(),4,0)); // 1
        System.out.println(countSubsetSum(Arrays.asList(10,20,15),new ArrayList<Integer>(),0,0)); // 1
    }
}
