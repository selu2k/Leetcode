class Solution:
    def largestWordCount(self, messages: List[str], senders: List[str]) -> str:
        d={}
        for i in range(len(senders)):
            d[senders[i]]=d.get(senders[i],0)+len(messages[i].split())
        print(d)
        mx=0
        ans=""
        for i in d:
            if mx<d[i]:
                ans=i
                mx=d[i]
            elif mx==d[i]:
                ans=max(ans,i)
        return ans
        