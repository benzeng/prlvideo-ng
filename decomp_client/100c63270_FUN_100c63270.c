
void FUN_100c63270(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100c63000();
  lVar2 = -0x10;
  do {
    *(undefined4 *)(lVar1 + 0x50 + lVar2 * 4) = 0;
    *(undefined8 *)(lVar1 + 0xd0 + lVar2 * 8) = 0;
    if ((*(long *)(lVar1 + 0x150 + lVar2 * 8) != 0) &&
       ((*(byte *)(lVar1 + 400 + lVar2 * 4) & 1) != 0)) {
      FUN_100bf3910();
      *(undefined8 *)(lVar1 + 0x150 + lVar2 * 8) = 0;
    }
    *(undefined4 *)(lVar1 + 400 + lVar2 * 4) = 0;
    *(undefined8 *)(lVar1 + 0x210 + lVar2 * 8) = 0;
    *(undefined4 *)(lVar1 + 0x250 + lVar2 * 4) = 0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0);
  *(undefined8 *)(lVar1 + 0x250) = 0;
  return;
}

