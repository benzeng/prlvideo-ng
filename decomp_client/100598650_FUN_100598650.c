
ulong FUN_100598650(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_1022743dc == 0) {
      DAT_1022743dc = FUN_100598590("Shortcuts::ShortcutsMap",0xffffffffffffffff,1);
    }
    if (DAT_1022743dc != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_1022743dc);
      return uVar2;
    }
  }
  uVar3 = 0x103;
  if (param_3 == 0) {
    uVar3 = 3;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_1005986e0,FUN_100598720,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_100598750(uVar1);
  }
  return (ulong)uVar1;
}

