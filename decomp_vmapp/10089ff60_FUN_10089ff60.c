
undefined4 FUN_10089ff60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_10089fc10(&local_28,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_1008a52d0(local_28,param_2,&DAT_100be10c8);
      FUN_1008a4c40(local_28,&DAT_100be10c8);
    }
  }
  return uVar2;
}

