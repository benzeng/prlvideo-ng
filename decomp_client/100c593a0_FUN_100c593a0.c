
void FUN_100c593a0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1;
  do {
    if ((*(byte *)(lVar2 + 0x20) & 8) == 0) break;
    plVar1 = (long *)(lVar2 + 0x38);
    param_1 = lVar2;
    lVar2 = *plVar1;
  } while (*plVar1 != 0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}

