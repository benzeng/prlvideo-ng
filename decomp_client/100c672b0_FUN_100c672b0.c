
undefined4
FUN_100c672b0(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  puVar3 = &DAT_102318360;
  if (DAT_102318360 == '\0') {
    puVar3 = param_4;
  }
  if (param_4 != (undefined1 *)0x0) {
    puVar3 = param_4;
  }
  lVar2 = FUN_100cb4c20();
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    iVar4 = 0x3ff;
    if (param_3 < 0x400) {
      iVar4 = param_3;
    }
    FUN_100cb4e30(lVar2,puVar3,0,param_1,param_2,iVar4);
    if (param_5 != 0) {
      FUN_100cb5130(lVar2,puVar3,0,local_438,param_2,iVar4,param_1);
    }
    uVar1 = FUN_100cb5f00(lVar2);
    FUN_100cb4d90(lVar2);
    _OPENSSL_cleanse(local_438,0x400);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

