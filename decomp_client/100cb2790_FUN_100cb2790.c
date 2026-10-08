
undefined8 FUN_100cb2790(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100c83900();
  if (lVar2 != 0) {
    iVar1 = FUN_100c8b0b0(lVar2,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_100cb10f0(param_1,0x33,4,lVar2), iVar1 != 0)) {
      return 1;
    }
    FUN_100c83920(lVar2);
  }
  return 0;
}

