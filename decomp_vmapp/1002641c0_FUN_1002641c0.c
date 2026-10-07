
undefined8 FUN_1002641c0(long param_1)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = 0x2000200000000;
  iVar1 = FUN_1000ed430(2);
  if (iVar1 != 0) {
    iVar1 = FUN_1000ed5c0((long)&local_18 + 4,4);
    if ((iVar1 != 0) && (iVar1 = FUN_1000ed5c0(&local_18,4), iVar1 == 0)) {
      FUN_1000ed7d0();
      return 0;
    }
    FUN_1000ed7d0();
  }
  FUN_1008e3970("","LocalDevices",0,"LPT[%u] suspend failed",*(undefined4 *)(param_1 + 0x8c));
  return 1;
}

