
undefined8 FUN_100c2ad80(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  
  pcVar4 = FUN_100c2aa90;
  if (param_1 != 0) {
    pcVar4 = FUN_100c2ad20;
  }
  if ((*(int *)(param_3 + 0x10) == 0) && (*(int *)(param_3 + 8) != 0)) {
    iVar1 = FUN_100c26610(param_3);
    if (iVar1 == 1) {
      FUN_100c26db0(param_2,0);
      uVar3 = 1;
    }
    else {
      iVar2 = FUN_100c27360(param_3,iVar1 + -2);
      iVar5 = -100;
      if ((iVar2 == 0) && (iVar2 = FUN_100c27360(param_3,iVar1 + -3), iVar2 == 0)) {
        iVar2 = -100;
        do {
          iVar5 = (*pcVar4)(param_2,iVar1 + 1,0xffffffff,0);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_100c27160(param_2,param_3);
          if (-1 < iVar5) {
            iVar5 = FUN_100c23090(param_2,param_2,param_3);
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_100c27160(param_2,param_3);
            if ((-1 < iVar5) && (iVar5 = FUN_100c23090(param_2,param_2,param_3), iVar5 == 0)) {
              return 0;
            }
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == 0) {
            FUN_100c62ee0(3,0x7a,0x71,"bn_rand.c",0x107);
            return 0;
          }
          iVar5 = FUN_100c27160(param_2,param_3);
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
            FUN_100c62ee0(3,0x7a,0x71,"bn_rand.c",0x114);
            return 0;
          }
          iVar2 = FUN_100c27160(param_2,param_3);
          uVar3 = 1;
        } while (-1 < iVar2);
      }
    }
  }
  else {
    FUN_100c62ee0(3,0x7a,0x73,"bn_rand.c",0xe6);
    uVar3 = 0;
  }
  return uVar3;
}

