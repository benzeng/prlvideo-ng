
undefined8 FUN_1008c9ab0(int param_1,long *param_2)

{
  if (param_1 == 3) {
    if (*(long *)(*param_2 + 0x10) != 0) {
      FUN_1008a11b0();
    }
  }
  else if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  return 1;
}

