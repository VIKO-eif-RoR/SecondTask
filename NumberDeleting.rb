class Functions
    #Finding max value in array
    def Maximum(arr)
        m = arr.max
        return m
    end
    #Finding min value in array
    def Minimum(arr)
        m = arr.min
        return m
    end
    #Deleting max and min values from array
    def Deleting(arr, m1, m2)
        arr.delete(m1)
        arr.delete(m2)
        return arr
    end
end
#New array with random values
array = Array.new(100) { rand(1...10000) }
max1 = Functions.new.Maximum(array)
min1 = Functions.new.Minimum(array)
puts(max1)
puts(min1)
array = Functions.new.Deleting(array, max1, min1)
puts("-----------------------")
for i in 0..100 do
    puts(array[i])
end