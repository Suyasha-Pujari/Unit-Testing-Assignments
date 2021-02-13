import unittest
import perfect

class TestPerfect(unittest.TestCase):
	
	def test_perfect(self):
	    self.assertIs(perfect.perfect_number(6),True)
		
	def test_notperfect(self):
	    self.assertIs(perfect.perfect_number(10),False)
		
		
		
if __name__ == '__main__':
	unittest.main()
