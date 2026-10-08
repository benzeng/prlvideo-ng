
ulong FUN_100db3fb0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  rlimit local_28;
  
  *param_1 = &PTR_FUN_10225c280;
  param_1[1] = &PTR_FUN_10225c380;
  uVar3 = FUN_100db5e30(param_1 + 2);
  param_1[10] = 0;
  if (DAT_1023119b8 == 0) {
    uVar2 = _getrlimit(8,&local_28);
    uVar3 = (ulong)uVar2;
    if ((uVar2 == 0) && (uVar3 = 0x7fffffffffffffff, local_28.rlim_cur != 0x7fffffffffffffff)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_28.rlim_cur;
      DAT_1023119b8 = (uint)(local_28.rlim_cur / 6);
      if (0xf < DAT_1023119b8) {
        return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      }
      uVar3 = FUN_100df99c0("","AbstractFile",0,"Too low RLIMIT_NOFILE=%u");
    }
    DAT_1023119b8 = 0x100;
  }
  return uVar3;
}

