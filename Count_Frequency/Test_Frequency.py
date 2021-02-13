import unittest
import frequency
class Test_Frequency(unittest.TestCase):
	
	def test_frequency(self):
		self.assertEqual(frequency.frequencyDigits(1112254,1),3)
		self.assertEqual(frequency.frequencyDigits(89888,8),4)
		self.assertEqual(frequency.frequencyDigits(795493,9),2)
		self.assertEqual(frequency.frequencyDigits(2314,9),0)
		
	def test_notperfect(self):
	    self.assertEqual(frequency.frequencyDigits(-231012,1),0)
		
		
if __name__ == '__main__':
	unittest.main()
