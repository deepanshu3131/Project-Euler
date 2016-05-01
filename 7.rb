#!/usr/bin/ruby
# @Author: deepanshu
# @Date:   2015-12-06 05:13:25
# @Last Modified by:   deepanshu
# @Last Modified time: 2016-05-02 03:44:52
a=[]
a.push(0)
a.push(0)
for i in 2..104749 do
    a.push(1)
end
b=[]
for i in 2..104749 do
    if a[i]==1
        b.push(i)
        j=2
        while j*i<=104749
            a[i*j]=0
            j+=1
        end
    end
end
t=gets.to_i
while t>0
    n=gets.to_i
    puts b[n-1]
    t-=1
end