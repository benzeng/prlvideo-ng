
undefined8 FUN_1002e7a80(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  size_t sVar3;
  
  if ((((*(char *)(param_1 + 0x130) == '\0') && (*(char *)(param_1 + 0x131) == '\0')) &&
      (*(char *)(param_1 + 0x132) == '\0')) && (*(char *)(param_1 + 0x134) == '\0')) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x133);
    *(ulong *)(param_1 + 0x168) = uVar2;
    uVar1 = 7;
    if ((uVar2 <= *(uint *)(param_1 + 0x128)) && (*(char *)(param_1 + 300) < '\0')) {
      sVar3 = 0x12;
      if (*(byte *)(param_1 + 0x133) < 0x12) {
        sVar3 = uVar2;
      }
      *(size_t *)(param_1 + 0x168) = sVar3;
      _memcpy(*(void **)(param_1 + 0x50),(void *)(param_1 + 0x150),sVar3);
      uVar1 = 2;
    }
    return uVar1;
  }
  FUN_1004103f0(0x52400,param_1 + 0x150,0x12,0);
  return 5;
}

