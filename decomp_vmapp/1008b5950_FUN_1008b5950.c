
undefined4
FUN_1008b5950(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
             undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = FUN_1008948f0(param_2);
  if (lVar2 == 0) {
    FUN_100887ce0(9,0x7e,0x73,"pem_pk8.c",0x78);
    uVar1 = 0;
    goto LAB_1008b5b88;
  }
  if ((param_4 == -1) && (param_5 == 0)) {
    if (param_3 == 0) {
      uVar1 = FUN_1008b3ae0(FUN_1008b1bf0,"PRIVATE KEY",param_1,lVar2,0,0,0,0,0);
    }
    else {
      uVar1 = FUN_1008bf730(param_1,lVar2);
    }
    FUN_1008b1c30(lVar2);
    goto LAB_1008b5b88;
  }
  if (param_6 == (undefined1 *)0x0) {
    if (param_8 == (code *)0x0) {
      param_7 = FUN_1008b2650(local_438,0x400,1,param_9);
    }
    else {
      param_7 = (*param_8)();
    }
    if (param_7 < 1) {
      FUN_100887ce0(9,0x7e,0x6f,"pem_pk8.c",0x82);
      FUN_1008b1c30(lVar2);
      uVar1 = 0;
      goto LAB_1008b5b88;
    }
    lVar3 = FUN_1008d7890(param_4,param_5,local_438,param_7,0,0,0,lVar2);
LAB_1008b5ad9:
    _OPENSSL_cleanse(local_438,(long)param_7);
  }
  else {
    lVar3 = FUN_1008d7890(param_4,param_5,param_6,param_7,0,0,0,lVar2);
    if (local_438 == param_6) goto LAB_1008b5ad9;
  }
  FUN_1008b1c30(lVar2);
  uVar1 = 0;
  if (lVar3 != 0) {
    if (param_3 == 0) {
      uVar1 = FUN_1008b3ae0(FUN_1008a04d0,"ENCRYPTED PRIVATE KEY",param_1,lVar3,0,0,0,0,0);
    }
    else {
      uVar1 = FUN_1008bf5a0(param_1,lVar3);
    }
    FUN_1008a0510(lVar3);
  }
LAB_1008b5b88:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

