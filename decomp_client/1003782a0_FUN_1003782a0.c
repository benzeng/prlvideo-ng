
undefined8 FUN_1003782a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x20) != 0)) {
    uVar2 = FUN_100323e20();
    return uVar2;
  }
  return 0xffffffff;
}

