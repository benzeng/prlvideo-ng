
bool FUN_100504e80(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar1 = FUN_100504ec0(param_1);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar2 = *(char *)(param_1 + 0x10);
  }
  else {
    cVar2 = FUN_100504c10(param_1);
    *(char *)(param_1 + 0x10) = cVar2;
  }
  return cVar2 != '\0';
}

