
ulong FUN_1006aefc0(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = FUN_10018ecf0(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10018ed10(*(undefined8 *)(param_1 + 0x20));
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

