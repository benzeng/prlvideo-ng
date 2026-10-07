
ulong FUN_100708e80(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  rlimit local_28;
  
  *param_1 = &PTR_FUN_100bcde10;
  param_1[1] = &PTR_FUN_100bcdf10;
  uVar3 = FUN_10070ad00(param_1 + 2);
  param_1[10] = 0;
  if (DAT_1011ccb28 == 0) {
    uVar2 = _getrlimit(8,&local_28);
    uVar3 = (ulong)uVar2;
    if ((uVar2 == 0) && (uVar3 = 0x7fffffffffffffff, local_28.rlim_cur != 0x7fffffffffffffff)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_28.rlim_cur;
      DAT_1011ccb28 = (uint)(local_28.rlim_cur / 6);
      if (0xf < DAT_1011ccb28) {
        return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      }
      uVar3 = FUN_1008e3970("","AbstractFile",0,"Too low RLIMIT_NOFILE=%u");
    }
    DAT_1011ccb28 = 0x100;
  }
  return uVar3;
}

