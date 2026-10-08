
undefined8 FUN_100caad30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = FUN_100c608e0(FUN_100caad80,FUN_100caadb0);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

