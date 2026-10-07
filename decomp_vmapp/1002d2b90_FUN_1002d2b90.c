
uint FUN_1002d2b90(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(param_1 + 0x2028);
  iVar2 = 1;
  uVar4 = 4;
  do {
    if (*pcVar3 == param_2) {
      uVar1 = uVar4 - 3;
      goto LAB_1002d2c20;
    }
    uVar1 = iVar2 + 1;
    if (*(char *)(param_1 + 0x1b18 + (ulong)(uVar4 - 2) * 0x510) == param_2) goto LAB_1002d2c20;
    uVar1 = iVar2 + 2;
    if ((*(char *)(param_1 + 0x1b18 + (ulong)(uVar4 - 1) * 0x510) == param_2) ||
       (uVar1 = iVar2 + 3, *(char *)(param_1 + 0x1b18 + (ulong)uVar4 * 0x510) == param_2))
    goto LAB_1002d2c20;
    iVar2 = iVar2 + 4;
    pcVar3 = pcVar3 + 0x1440;
    uVar1 = uVar4 + 1;
    uVar4 = uVar4 + 4;
  } while (uVar1 < 0x21);
  uVar1 = 0;
LAB_1002d2c20:
  return uVar1 & 0xff;
}

