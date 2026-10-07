
ulong FUN_10089ee90(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    uVar2 = FUN_10089e920(FUN_10089ef10,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_10087ecf0(param_1,0);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_1008a3ff0(lVar3,param_2,param_3);
    uVar2 = (ulong)uVar1;
    FUN_10087d4e0(lVar3);
  }
  return uVar2;
}

