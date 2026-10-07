
undefined8 FUN_1008a0650(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar1 = *param_2;
    lVar2 = FUN_100884e10();
    *(long *)(lVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

