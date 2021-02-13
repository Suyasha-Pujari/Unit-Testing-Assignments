import unittest
import Alpha

class TestCharAlpha(unittest.TestCase):

    def test_number(self):
        self.assertGreater(Alpha.number(3), 0)
        self.assertRaises(ValueError,Alpha.number, 0)
        self.assertRaises(ValueError,Alpha.number, -24)        
        self.assertRaises(TypeError,Alpha.number,9.45)
        self.assertRaises(TypeError,Alpha.number, True)
        self.assertRaises(TypeError,Alpha.number, "abc")

        
if __name__=='__main__':
    unittest.main()
