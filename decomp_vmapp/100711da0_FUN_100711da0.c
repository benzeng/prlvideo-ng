
void FUN_100711da0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_1007127b0(&DAT_1011ccb30);
  if (param_1 == -0x1ffffd00) {
    FUN_100712a30(lVar1);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    FUN_100712a10(lVar1);
    return;
  }
  if (param_1 == -0x1ffffd80) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_1007129f0(lVar1);
    return;
  }
  return;
}

