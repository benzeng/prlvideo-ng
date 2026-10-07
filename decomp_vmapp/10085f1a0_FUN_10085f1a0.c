
int FUN_10085f1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100857f90();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10084b4b0();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  iVar1 = 0;
  lVar5 = 0;
  if ((param_5 == 0) && (param_5 = FUN_10084c820(), lVar5 = param_5, param_5 == 0)) {
    return 0;
  }
  lVar2 = FUN_100857ed0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_100857fe0(lVar2,param_2,param_5);
    if (iVar1 == 0) {
      FUN_100887ce0(0x10,0xbd,3,"ecp_mont.c",0xde);
      iVar1 = 0;
    }
    else {
      lVar3 = FUN_10084b520();
      if (lVar3 != 0) {
        uVar4 = FUN_10084b310();
        iVar1 = FUN_1008578b0(lVar3,uVar4,lVar2 + 8,lVar2,param_5);
        if (iVar1 != 0) {
          *(long *)(param_1 + 0xd0) = lVar2;
          *(long *)(param_1 + 0xd8) = lVar3;
          iVar1 = FUN_10085c9c0(param_1,param_2,param_3,param_4,param_5);
          lVar2 = 0;
          if (iVar1 != 0) goto LAB_10085f30d;
          FUN_100857f90(*(undefined8 *)(param_1 + 0xd0));
          *(undefined8 *)(param_1 + 0xd0) = 0;
          FUN_10084b4b0(*(undefined8 *)(param_1 + 0xd8));
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      iVar1 = 0;
    }
  }
LAB_10085f30d:
  if (lVar5 != 0) {
    FUN_10084c8b0(lVar5);
  }
  if (lVar2 != 0) {
    FUN_100857f90(lVar2);
  }
  return iVar1;
}

