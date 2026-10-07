
void FUN_1002f00d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (DAT_101115c74 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_100272b10(lVar1,0);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}

