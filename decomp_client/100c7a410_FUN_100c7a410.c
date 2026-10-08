
ulong FUN_100c7a410(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    uVar2 = FUN_100c79ea0(FUN_100c7a490,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_100c59ef0(param_1,0);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_100c7f570(lVar3,param_2,param_3);
    uVar2 = (ulong)uVar1;
    FUN_100c586e0(lVar3);
  }
  return uVar2;
}

