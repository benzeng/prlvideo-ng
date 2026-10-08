
undefined4
FUN_100c90ed0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
             undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = FUN_100c6fe70(param_2);
  if (lVar2 == 0) {
    FUN_100c62ee0(9,0x7e,0x73,"pem_pk8.c",0x78);
    uVar1 = 0;
    goto LAB_100c91108;
  }
  if ((param_4 == -1) && (param_5 == 0)) {
    if (param_3 == 0) {
      uVar1 = FUN_100c8f060(FUN_100c8d170,"PRIVATE KEY",param_1,lVar2,0,0,0,0,0);
    }
    else {
      uVar1 = FUN_100c9acb0(param_1,lVar2);
    }
    FUN_100c8d1b0(lVar2);
    goto LAB_100c91108;
  }
  if (param_6 == (undefined1 *)0x0) {
    if (param_8 == (code *)0x0) {
      param_7 = FUN_100c8dbd0(local_438,0x400,1,param_9);
    }
    else {
      param_7 = (*param_8)();
    }
    if (param_7 < 1) {
      FUN_100c62ee0(9,0x7e,0x6f,"pem_pk8.c",0x82);
      FUN_100c8d1b0(lVar2);
      uVar1 = 0;
      goto LAB_100c91108;
    }
    lVar3 = FUN_100cb40d0(param_4,param_5,local_438,param_7,0,0,0,lVar2);
LAB_100c91059:
    _OPENSSL_cleanse(local_438,(long)param_7);
  }
  else {
    lVar3 = FUN_100cb40d0(param_4,param_5,param_6,param_7,0,0,0,lVar2);
    if (local_438 == param_6) goto LAB_100c91059;
  }
  FUN_100c8d1b0(lVar2);
  uVar1 = 0;
  if (lVar3 != 0) {
    if (param_3 == 0) {
      uVar1 = FUN_100c8f060(FUN_100c7ba50,"ENCRYPTED PRIVATE KEY",param_1,lVar3,0,0,0,0,0);
    }
    else {
      uVar1 = FUN_100c9ab20(param_1,lVar3);
    }
    FUN_100c7ba90(lVar3);
  }
LAB_100c91108:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

