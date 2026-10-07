
void FUN_1004f1b20(char *param_1)

{
  uint uVar1;
  time_t tVar2;
  
  if (DAT_1011bc1f0 == '\0') {
    DAT_1011bc1f0 = '\x01';
    tVar2 = _time((time_t *)0x0);
    _srand((uint)tVar2);
  }
  uVar1 = _rand();
  uVar1 = uVar1 % 0x39aa400;
  param_1[4] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar1 % 0x24];
  param_1[3] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar1 / 0x24 + (uVar1 / 0x510) * -0x24];
  param_1[2] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar1 / 0x510 + (uVar1 / 0xb640) * -0x24];
  param_1[1] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar1 / 0xb640 + (uVar1 / 0x19a100) * -0x24];
  *param_1 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar1 / 0x19a100 + (uVar1 / 0x39aa400) * -0x24];
  return;
}

