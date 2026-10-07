
undefined8 FUN_1004048c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar1 = *plVar2;
    if (lVar1 == param_1 + 0x10) {
      return 0xffffffff;
    }
    plVar2 = (long *)(lVar1 + 8);
  } while (*(int *)(lVar1 + -0x34) != 1);
  FUN_100404740(param_1,lVar1 + -0x48);
  return 0;
}

