TODO: add other input lengths/poseidon constants

to print shapes of poseidon constants
```python
/*
  print([constants["C"][i].shape for i in range(16)])
  # result = [(72,), (81,), (88,), (100,), (108,), (119,), (128,), (135,), (140,), (154,), (156,), (169,), (182,), (180,), (192,), (204,)]

  print([constants["S"][i].shape for i in range(16)])
  # result = [(168,), (285,), (392,), (540,), (660,), (819,), (960,), (1071,), (1140,), (1386,), (1380,), (1625,), (1890,), (1740,), (1984,), (2244,)]

  print([constants["M"][i].shape for i in range(16)])
  # result = [(2, 2), (3, 3), (4, 4), (5, 5), (6, 6), (7, 7), (8, 8), (9, 9), (10, 10), (11, 11), (12, 12), (13, 13), (14, 14), (15, 15), (16, 16), (17, 17)]

  print([constants["P"][i].shape for i in range(16)])
  # result = [(2, 2), (3, 3), (4, 4), (5, 5), (6, 6), (7, 7), (8, 8), (9, 9), (10, 10), (11, 11), (12, 12), (13, 13), (14, 14), (15, 15), (16, 16), (17, 17)]
*/
```