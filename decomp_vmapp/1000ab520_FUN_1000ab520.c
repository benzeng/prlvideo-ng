
undefined8 FUN_1000ab520(undefined8 param_1,int param_2)

{
  if (param_2 < -0x7ffffcca) {
    if (param_2 < -0x7ffffd8b) {
      if (param_2 + 0x7ffffe6bU < 2) {
        return 1;
      }
      if (param_2 == -0x7ffffe7b) {
        return 1;
      }
      if (param_2 == -0x7ffffda8) {
        return 1;
      }
    }
    else if (param_2 == -0x7ffffd8b) {
      return 1;
    }
  }
  else if (param_2 < -0x7ffffc69) {
    if ((param_2 + 0x7ffffccaU < 0x30) &&
       ((0x800650041801U >> ((ulong)(param_2 + 0x7ffffccaU) & 0x3f) & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (param_2 == -0x7ffffc69) {
      return 1;
    }
    if (param_2 == -0x7ffffa88) {
      return 1;
    }
  }
  return 0;
}

