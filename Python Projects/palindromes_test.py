print '\n\n\n\t\t*****This program tests for Palindromes*****\n'
print 'You can enter as many times as you want.'

decision = 0

while decision != 1:
    print '\n\n'

    wordEntered = raw_input ('Enter the word: ')

    wordListed = list (wordEntered)
    wordReversed = wordListed [::-1]
    wordStringed = ''.join (wordReversed)

    print '\n\n'

    if wordListed == wordReversed:
        print '%s is indeed %s!' % (wordEntered, wordStringed)
        print 'It is a Palindrome!'
    else:
        print "%s = %s? Nah... don't think so.." % (wordEntered, wordStringed)
        print 'Nope, it is not a Palindrome...'

    print '\n\n'

    decision = raw_input ('Do you wish to continue? (y/n)')

    if decision == 'n' or decision == 'N':
        print '\nHave a nice day!'
        break

input ("\n\n\nPress '1' and 'Enter' to quit")
