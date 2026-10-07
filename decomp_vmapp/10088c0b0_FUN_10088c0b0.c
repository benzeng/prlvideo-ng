
undefined4
FUN_10088c0b0(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar3 = &DAT_1011c2920;
  if (DAT_1011c2920 == '\0') {
    puVar3 = param_4;
  }
  if (param_4 != (undefined1 *)0x0) {
    puVar3 = param_4;
  }
  lVar2 = FUN_1008d83e0();
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    iVar4 = 0x3ff;
    if (param_3 < 0x400) {
      iVar4 = param_3;
    }
    FUN_1008d85f0(lVar2,puVar3,0,param_1,param_2,iVar4);
    if (param_5 != 0) {
      FUN_1008d88f0(lVar2,puVar3,0,local_438,param_2,iVar4,param_1);
    }
    uVar1 = FUN_1008d96c0(lVar2);
    FUN_1008d8550(lVar2);
    _OPENSSL_cleanse(local_438,0x400);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

