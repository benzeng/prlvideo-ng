
void FUN_100288550(long param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1087) & 8) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x1133) = 1;
  }
  cVar1 = FUN_10028dd00(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1002878f0(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_100287ba0();
      return;
    }
    FUN_100287ac0(param_1,param_2);
    return;
  }
  *(undefined8 *)(param_1 + 0x3a0a8) = param_2;
  return;
}

