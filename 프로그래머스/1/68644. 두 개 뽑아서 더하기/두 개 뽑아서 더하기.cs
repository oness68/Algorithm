using System.Linq;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] numbers) {
        int[] answer = new int[] {};
        answer = numbers;
        List<int> list = new List<int>();
        
        for (int i = 0; i < answer.Length; i++){
            for (int j = 0; j < answer.Length; j++){
                if (i == j) continue;
                list.Add(answer[i] + answer[j]);
            }
        }
        
        list = list.Distinct().ToArray().ToList();
        list.Sort();
        answer = list.ToArray();
        
        return answer;
    }
}