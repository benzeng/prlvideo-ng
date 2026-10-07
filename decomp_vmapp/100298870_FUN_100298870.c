
ushort FUN_100298870(long param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return CONCAT11(*(char *)(param_1 + 0xd),*(undefined1 *)(param_1 + 0xc));
  }
  uVar1 = 0x100;
  if (*(byte *)(param_1 + 0xc) != 0) {
    uVar1 = (ushort)*(byte *)(param_1 + 0xc);
  }
  return uVar1;
}

