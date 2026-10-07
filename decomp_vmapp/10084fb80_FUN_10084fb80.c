
undefined8 FUN_10084fb80(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  
  pcVar4 = FUN_10084f890;
  if (param_1 != 0) {
    pcVar4 = FUN_10084fb20;
  }
  if ((*(int *)(param_3 + 0x10) == 0) && (*(int *)(param_3 + 8) != 0)) {
    iVar1 = FUN_10084b410(param_3);
    if (iVar1 == 1) {
      FUN_10084bbb0(param_2,0);
      uVar3 = 1;
    }
    else {
      iVar2 = FUN_10084c160(param_3,iVar1 + -2);
      iVar5 = -100;
      if ((iVar2 == 0) && (iVar2 = FUN_10084c160(param_3,iVar1 + -3), iVar2 == 0)) {
        iVar2 = -100;
        do {
          iVar5 = (*pcVar4)(param_2,iVar1 + 1,0xffffffff,0);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_10084bf60(param_2,param_3);
          if (-1 < iVar5) {
            iVar5 = FUN_100847e90(param_2,param_2,param_3);
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_10084bf60(param_2,param_3);
            if ((-1 < iVar5) && (iVar5 = FUN_100847e90(param_2,param_2,param_3), iVar5 == 0)) {
              return 0;
            }
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == 0) {
            FUN_100887ce0(3,0x7a,0x71,"bn_rand.c",0x107);
            return 0;
          }
          iVar5 = FUN_10084bf60(param_2,param_3);
          uVar3 = 1;
        } while (-1 < iVar5);
      }
      else {
        do {
          iVar2 = (*pcVar4)(param_2,iVar1,0xffffffff,0);
          if (iVar2 == 0) {
            return 0;
          }
          iVar5 = iVar5 + 1;
          if (iVar5 == 0) {
            FUN_100887ce0(3,0x7a,0x71,"bn_rand.c",0x114);
            return 0;
          }
          iVar2 = FUN_10084bf60(param_2,param_3);
          uVar3 = 1;
        } while (-1 < iVar2);
      }
    }
  }
  else {
    FUN_100887ce0(3,0x7a,0x73,"bn_rand.c",0xe6);
    uVar3 = 0;
  }
  return uVar3;
}

