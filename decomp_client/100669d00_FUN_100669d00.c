
ulong FUN_100669d00(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x48) < 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x48) <
           *(int *)(*(long *)(param_1 + 0x40) + 0xc) - *(int *)(*(long *)(param_1 + 0x40) + 8)) {
    uVar1 = CDownloadedKeyInfo::isActiveHere();
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

