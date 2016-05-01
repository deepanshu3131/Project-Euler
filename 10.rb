#!/usr/bin/ruby
# @Author: deepanshu
# @Date:   2015-12-06 05:13:05
# @Last Modified by:   deepanshu
# @Last Modified time: 2016-05-02 03:44:53
a=[]
for i in 0..1000000 do
    a.push(0)
end
for i in 2..1000000 do 
    if a[i]==0
        j=2
        while j*i<=1000000
            a[i*j]=1
            j+=1
        end
    end
end
for i in 2..1000000 do
    if a[i]==0
        a[i]=a[i-1]+i
    else
        a[i]=a[i-1]
    end 
end
t=gets.to_i
while t>0
    n=gets.to_i
    puts a[n]
  t-=1
end