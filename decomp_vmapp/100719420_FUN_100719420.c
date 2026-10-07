
byte FUN_100719420(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = _time((time_t *)0x0);
  iVar1 = _strcmp((char *)(param_1 + 0x100),"unlimited");
  if (iVar1 != 0) {
    if (*(ulong *)(param_1 + 0xf8) < uVar2) {
      return -(uVar2 < (long)*(int *)(param_1 + 0x180) + *(ulong *)(param_1 + 0xf8)) & 1U | 2;
    }
    if (uVar2 < *(ulong *)(param_1 + 0x120)) {
      return 0;
    }
  }
  return 1;
}

