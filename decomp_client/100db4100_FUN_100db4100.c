
ulong FUN_100db4100(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  rlimit local_18;
  
  uVar2 = _getrlimit(8,&local_18);
  uVar3 = (ulong)uVar2;
  if ((uVar2 == 0) && (uVar3 = 0x7fffffffffffffff, local_18.rlim_cur != 0x7fffffffffffffff)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_18.rlim_cur;
    DAT_1023119b8 = (uint)(local_18.rlim_cur / 6);
    if (0xf < DAT_1023119b8) {
      return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    }
    uVar3 = FUN_100df99c0("","AbstractFile",0,"Too low RLIMIT_NOFILE=%u");
  }
  DAT_1023119b8 = 0x100;
  return uVar3;
}

