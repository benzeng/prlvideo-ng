
long FUN_100cb3280(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int param_5,long *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_e4;
  undefined1 local_e0 [168];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100c66060(local_e0);
  iVar1 = FUN_100c700a0(*param_1,param_2,param_3,param_1[1],local_e0,param_8);
  if (iVar1 == 0) {
    FUN_100c62ee0(0x23,0x77,0x73,"p12_decr.c",0x57);
    lVar3 = 0;
    goto LAB_100cb3434;
  }
  iVar1 = FUN_100c6fb80(local_e0);
  lVar3 = FUN_100bf3540(iVar1 + param_5,"p12_decr.c",0x5b);
  if (lVar3 == 0) {
    uVar4 = 0x41;
    uVar5 = 0x5c;
LAB_100cb3421:
    FUN_100c62ee0(0x23,0x77,uVar4,"p12_decr.c",uVar5);
    lVar3 = 0;
  }
  else {
    iVar2 = FUN_100c66620(local_e0,lVar3,&local_e4,param_4,param_5);
    iVar1 = local_e4;
    if (iVar2 == 0) {
      FUN_100bf3910(lVar3);
      uVar4 = 6;
      uVar5 = 99;
      goto LAB_100cb3421;
    }
    iVar2 = FUN_100c669c0(local_e0,lVar3 + local_e4,&local_e4);
    if (iVar2 == 0) {
      FUN_100bf3910(lVar3);
      uVar4 = 0x74;
      uVar5 = 0x6c;
      goto LAB_100cb3421;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = iVar1 + local_e4;
    }
    if (param_6 != (long *)0x0) {
      *param_6 = lVar3;
    }
  }
  FUN_100c66520(local_e0);
LAB_100cb3434:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

