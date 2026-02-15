class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int index=0;
        int n=chars.size();
    
        while(i<n){
            char current_char=chars[i];
            int count=0;
            while(i<n && chars[i]==current_char){
                count++;
                i++;
            }

            chars[index++] = current_char;

            if(count>1){
                string count_str = to_string(count);
                for(char c : count_str){
                    chars[index++]=c;
                }
            }
        }
        return index;
    }
};