
undefined8 FUN_100cb7e80(int param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 == 3) {
    lVar1 = *param_2;
    if (*(long *)(lVar1 + 0x40) != 0) {
      FUN_100c6d8c0();
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_100c7cd70();
    }
  }
  return 1;
}

