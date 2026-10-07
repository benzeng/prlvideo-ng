
uint FUN_10027bf10(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (**(char **)(param_1 + 0x18) != '\0') {
    uVar1 = FUN_10027bf60(param_1,0);
    if (*(char *)(param_1 + 0x150) != '\0') {
      uVar2 = FUN_10027bf60(param_1,1);
      uVar1 = uVar1 | uVar2;
    }
  }
  return uVar1;
}

