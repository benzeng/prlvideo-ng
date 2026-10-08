
void FUN_100ac4170(long param_1)

{
  byte bVar1;
  int iVar2;
  
  FUN_100ac3c20();
  QTimer::start();
  bVar1 = FUN_100ac3960(param_1);
  *(byte *)(param_1 + 0xb88) = bVar1 ^ 1;
  if (bVar1 != 0) {
    FUN_100ade620(*(undefined8 *)(param_1 + 0xa58),1);
  }
  iVar2 = FUN_100ad6030(param_1);
  if (iVar2 != 0x80c) {
    iVar2 = FUN_100ad6030(param_1);
    if (iVar2 != 0x80e) {
      return;
    }
  }
  FUN_100ad5960(param_1,8,0,0);
  return;
}

