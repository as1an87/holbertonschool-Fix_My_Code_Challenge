###
#  Sort integer arguments (ascending) 
###

result = []
ARGV.each do |arg|
    # skip if not integer
    next unless arg =~ /^-?[0-9]+$/

    # convert to integer and append to result
    result << arg.to_i
end

# sort result in ascending order
result.sort!

# output the sorted result
puts result

