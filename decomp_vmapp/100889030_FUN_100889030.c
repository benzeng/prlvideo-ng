
void FUN_100889030(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100887e00();
  lVar2 = 0xf;
  if ((long)*(int *)(lVar1 + 0x250) != 0) {
    lVar2 = (long)*(int *)(lVar1 + 0x250);
  }
  if ((*(long *)(lVar1 + 0xd0 + lVar2 * 8) != 0) &&
     ((*(byte *)(lVar1 + 0x150 + lVar2 * 4) & 1) != 0)) {
    FUN_10081e1a0();
    *(undefined8 *)(lVar1 + 0xd0 + lVar2 * 8) = 0;
  }
  *(undefined8 *)(lVar1 + 0xd0 + lVar2 * 8) = param_1;
  *(undefined4 *)(lVar1 + 0x150 + lVar2 * 4) = param_2;
  return;
}

