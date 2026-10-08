
ulong FUN_100232320(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = FUN_100325f80(param_2);
  if (cVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
    uVar2 = FUN_100325aa0(param_2);
    return uVar2;
  }
  return (ulong)*(uint *)(param_1 + 0x28);
}

