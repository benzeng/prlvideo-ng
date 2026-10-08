
int FUN_100c725f0(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
      ((*(long *)(lVar1 + 0xb8) == 0 &&
       ((*(long *)(lVar1 + 0x98) == 0 && (*(long *)(lVar1 + 0xa8) == 0)))))) ||
     (*(code **)(lVar1 + 0xc0) == (code *)0x0)) {
    FUN_100c62ee0(6,0x9b,0x96,"pmeth_fn.c",0x114);
    return -2;
  }
  iVar2 = (int)param_1[4];
  if (((iVar2 == 0x100) || (iVar2 == 0x200)) || (iVar2 == 0x400)) {
    iVar2 = (**(code **)(lVar1 + 0xc0))(param_1,2,0,param_2);
    if (iVar2 < 1) {
      return iVar2;
    }
    if (iVar2 == 2) {
      return 1;
    }
    if ((int *)param_1[2] == (int *)0x0) {
      uVar3 = 0x9a;
      uVar4 = 0x128;
    }
    else if (*(int *)param_1[2] == *param_2) {
      iVar2 = FUN_100c6d260(param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_100c6d280(param_1[2],param_2), iVar2 != 0)) {
        if (param_1[3] != 0) {
          FUN_100c6d8c0();
        }
        param_1[3] = (long)param_2;
        iVar2 = (**(code **)(*param_1 + 0xc0))(param_1,2,1,param_2);
        if (0 < iVar2) {
          FUN_100bf2cf0(param_2 + 2,1,10,"pmeth_fn.c",0x149);
          return 1;
        }
        param_1[3] = 0;
        return iVar2;
      }
      uVar3 = 0x99;
      uVar4 = 0x13a;
    }
    else {
      uVar3 = 0x65;
      uVar4 = 0x12d;
    }
  }
  else {
    uVar3 = 0x97;
    uVar4 = 0x11b;
  }
  FUN_100c62ee0(6,0x9b,uVar3,"pmeth_fn.c",uVar4);
  return -1;
}

