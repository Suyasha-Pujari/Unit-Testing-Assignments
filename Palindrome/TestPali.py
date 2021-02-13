import unittest
import Palindrome

class testpali(unittest.TestCase):
		
		def test_pali(self):
			self.assertEqual(Palindrome.rev(121),121)
			self.assertEqual(Palindrome.rev(5445),5445)
	    
			
if __name__ == '__main__':
	unittest.main()
