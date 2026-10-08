
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100dfa260(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (DAT_102319fb0 != '\x01') {
    iVar1 = FUN_100dfaf30(&DAT_102319fb1);
    if ((iVar1 == 0) && (DAT_102319fb1 != '\0')) {
      DAT_102319fb1 = '\x01';
    }
    DAT_102319fb0 = '\x01';
  }
  if (DAT_102319fb1 == '\0') {
    if (DAT_102319bb0 == '\0') {
      _DAT_102319bb0 = 0x7972617262694c2f;
      _DAT_102319bbc = 0x73;
      _DAT_102319bb8 = 0x676f4c2f;
    }
    return &DAT_102319bb0;
  }
  puVar2 = (undefined1 *)FUN_100df97a0();
  return puVar2;
}

