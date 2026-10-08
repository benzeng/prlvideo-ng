
ulong FUN_10041c170(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_102273fb0 == 0) {
      DAT_102273fb0 = FUN_10041c0b0("CVmEdWidgetIniterPrivate::IdValueMap",0xffffffffffffffff,1);
    }
    if (DAT_102273fb0 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_102273fb0);
      return uVar2;
    }
  }
  uVar3 = 0x103;
  if (param_3 == 0) {
    uVar3 = 3;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_10041c200,FUN_10041c240,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_10041c270(uVar1);
  }
  return (ulong)uVar1;
}

