
undefined8 FUN_10038e350(int param_1)

{
  if (param_1 < 7) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if (param_1 < 0x67) {
    if (param_1 == 7) {
      return 1;
    }
    if (param_1 == 0x65) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x67) {
      return 1;
    }
    if (param_1 == 0x69) {
      return 1;
    }
  }
  return 0;
}

