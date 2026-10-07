
undefined8 FUN_100734dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    uVar2 = FUN_100735240(param_2,param_3,lVar1 + 8,lVar1,param_4);
    return uVar2;
  }
  return 0;
}

