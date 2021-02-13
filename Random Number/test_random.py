from random import Random
import main
import unittest

random = Random()

def gen_age():
    
    return random.randint(15, 99)


class AgeTest(unittest.TestCase):

    def setUp(self):
        global random
        random = Random(666)

    def test_gen_age(self):
        self.assertEqual(gen_age(), 73)

if __name__ == '__main__':
    unittest.main()
