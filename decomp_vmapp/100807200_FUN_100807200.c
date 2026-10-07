
undefined8 FUN_100807200(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_68 [56];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  uVar2 = FUN_1007f9770();
  FUN_100805940(uVar2,"master secret",0xd,*(long *)(param_1 + 0x80) + 0xc4,0x20,0,0,
                *(long *)(param_1 + 0x80) + 0xa4,0x20,param_3,param_4,
                *(long *)(param_1 + 0x130) + 0x14,local_68,0x30);
  _OPENSSL_cleanse(local_68,0x30);
  if (lVar1 == local_30) {
    return 0x30;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

