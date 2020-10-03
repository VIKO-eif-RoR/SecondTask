class String
    def is_upper?
      self == self.upcase
    end
  
    def is_lower?
      self == self.downcase
    end
  
    def head
      self[0]
    end
  
    def tail
      self[1..-1]
    end
  
    def swapcase
      if empty?
        ""
      elsif head.is_lower?
        head.upcase + tail.swapcase
      elsif head.is_upper?
        head.downcase + tail.swapcase
      else
        head + tail.swapcase
      end
    end
  end
  
  puts("uppercaseLOWERCASE".swapcase)