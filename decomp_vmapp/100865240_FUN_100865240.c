
undefined8 FUN_100865240(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_100887ce0(0x10,0xa3,0x43,"ec2_smpl.c",0x18c);
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_10084b950(param_2 + 8,param_3);
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = 0;
      FUN_10084c230(param_2 + 8,0);
      lVar1 = FUN_10084b950(param_2 + 0x20,param_4);
      if (lVar1 != 0) {
        uVar3 = 0;
        FUN_10084c230(param_2 + 0x20,0);
        uVar2 = FUN_10084b310();
        lVar1 = FUN_10084b950(param_2 + 0x38,uVar2);
        if (lVar1 != 0) {
          FUN_10084c230(param_2 + 0x38,0);
          *(undefined4 *)(param_2 + 0x50) = 1;
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

