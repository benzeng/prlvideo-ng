
ulong FUN_10024fce0(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_1022743a0 == 0) {
      DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
    }
    if (DAT_1022743a0 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_1022743a0);
      return uVar2;
    }
  }
  uVar3 = 0x107;
  if (param_3 == 0) {
    uVar3 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_10024fd70,FUN_10024fdb0,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_10024fde0(uVar1);
  }
  return (ulong)uVar1;
}

