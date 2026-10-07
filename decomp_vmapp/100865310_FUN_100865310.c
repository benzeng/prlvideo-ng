
undefined8 FUN_100865310(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_10085c5d0();
  if (iVar1 == 0) {
    uVar3 = FUN_10084b310();
    iVar1 = FUN_10084bf60(param_2 + 0x38,uVar3);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        lVar2 = FUN_10084b950(param_3,param_2 + 8);
        if (lVar2 == 0) {
          return 0;
        }
        FUN_10084c230(param_3,0);
      }
      if (param_4 == 0) {
        return 1;
      }
      lVar2 = FUN_10084b950(param_4,param_2 + 0x20);
      if (lVar2 == 0) {
        return 0;
      }
      FUN_10084c230(param_4,0);
      return 1;
    }
    uVar3 = 0x42;
    uVar4 = 0x1b3;
  }
  else {
    uVar3 = 0x6a;
    uVar4 = 0x1ad;
  }
  FUN_100887ce0(0x10,0xa2,uVar3,"ec2_smpl.c",uVar4);
  return 0;
}

