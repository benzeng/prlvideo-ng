
undefined8 FUN_100bd6ce0(long param_1,int param_2,undefined1 *param_3,int param_4)

{
  time_t tVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_4 < 4) {
    return 0;
  }
  uVar3 = 0x40;
  if (param_2 == 0) {
    uVar3 = 0x20;
  }
  if ((*(ulong *)(param_1 + 0x1b0) & uVar3) != 0) {
    tVar1 = _time((time_t *)0x0);
    *param_3 = (char)((ulong)tVar1 >> 0x18);
    param_3[1] = (char)((ulong)tVar1 >> 0x10);
    param_3[2] = (char)((ulong)tVar1 >> 8);
    param_3[3] = (char)tVar1;
    param_3 = param_3 + 4;
    param_4 = param_4 + -4;
  }
  uVar2 = FUN_100c62190(param_3,param_4);
  return uVar2;
}

