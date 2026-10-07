
undefined4
FUN_0040dc60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_48 [24];
  
  if ((param_1 == 0) || ((param_5 == 0 && (param_6 != 0)))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xfffffffb;
    iVar1 = FUN_0040e780(local_48);
    if (iVar1 == 0) {
      uVar2 = FUN_0040de30(param_4);
      uVar2 = FUN_0040e0c0(local_48,param_1,param_2,param_3,param_4,uVar2,param_5,param_6);
      FUN_0040e6c0(local_48);
    }
  }
  return uVar2;
}

