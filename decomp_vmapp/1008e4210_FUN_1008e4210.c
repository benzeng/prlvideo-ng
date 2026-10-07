
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1008e4210(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (DAT_1011c3520 != '\x01') {
    iVar1 = FUN_1008e4890(&DAT_1011c3521);
    if ((iVar1 == 0) && (DAT_1011c3521 != '\0')) {
      DAT_1011c3521 = '\x01';
    }
    DAT_1011c3520 = '\x01';
  }
  if (DAT_1011c3521 == '\0') {
    if (DAT_1011c3120 == '\0') {
      _DAT_1011c3120 = 0x7972617262694c2f;
      _DAT_1011c312c = 0x73;
      _DAT_1011c3128 = 0x676f4c2f;
    }
    return &DAT_1011c3120;
  }
  puVar2 = (undefined1 *)FUN_1008e3750();
  return puVar2;
}

