class Caesar
    def encrypt(string, key)
        string_to_ascii_array = string.chars.map {|char| char.ord}
        shifted = string_to_ascii_array.map {|char| char+key}
        shifted.map { |char| char.chr }.join
        end

    def decrypt(string, key)
        string_to_ascii_array = string.chars.map {|char| char.ord}
        shifted = string_to_ascii_array.map {|char| char-key}
        shifted.map { |char| char.chr }.join
        end

end
 
encrypt = Caesar.new.encrypt("Hello World", 5)
puts(encrypt)
puts(Caesar.new.decrypt(encrypt, 5))