
void FUN_100b5c250(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_100b5b710(&DAT_1023118b0);
  if (param_1 == -0x1ffffd00) {
    FUN_100b5ce40(lVar1);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    FUN_100b5ce20(lVar1);
    return;
  }
  if (param_1 == -0x1ffffd80) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_100b5ce00(lVar1);
    return;
  }
  return;
}

