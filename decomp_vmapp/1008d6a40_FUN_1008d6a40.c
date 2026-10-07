
long FUN_1008d6a40(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10088ae60(local_e0);
  iVar1 = FUN_100894b20(*param_1,param_2,param_3,param_1[1],local_e0,param_8);
  if (iVar1 == 0) {
    FUN_100887ce0(0x23,0x77,0x73,"p12_decr.c",0x57);
    lVar3 = 0;
    goto LAB_1008d6bf4;
  }
  iVar1 = FUN_100894600(local_e0);
  lVar3 = FUN_10081ddd0(iVar1 + param_5,"p12_decr.c",0x5b);
  if (lVar3 == 0) {
    uVar4 = 0x41;
    uVar5 = 0x5c;
LAB_1008d6be1:
    FUN_100887ce0(0x23,0x77,uVar4,"p12_decr.c",uVar5);
    lVar3 = 0;
  }
  else {
    iVar2 = FUN_10088b420(local_e0,lVar3,&local_e4,param_4,param_5);
    iVar1 = local_e4;
    if (iVar2 == 0) {
      FUN_10081e1a0(lVar3);
      uVar4 = 6;
      uVar5 = 99;
      goto LAB_1008d6be1;
    }
    iVar2 = FUN_10088b7c0(local_e0,lVar3 + local_e4,&local_e4);
    if (iVar2 == 0) {
      FUN_10081e1a0(lVar3);
      uVar4 = 0x74;
      uVar5 = 0x6c;
      goto LAB_1008d6be1;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = iVar1 + local_e4;
    }
    if (param_6 != (long *)0x0) {
      *param_6 = lVar3;
    }
  }
  FUN_10088b320(local_e0);
LAB_1008d6bf4:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

