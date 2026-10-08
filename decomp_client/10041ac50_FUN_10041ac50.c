
ulong FUN_10041ac50(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_102273f30 == 0) {
      DAT_102273f30 = FUN_10041ab90("CVmEdWidgetIniterPrivate::PathValuesList",0xffffffffffffffff,1)
      ;
    }
    if (DAT_102273f30 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_102273f30);
      return uVar2;
    }
  }
  uVar3 = 0x107;
  if (param_3 == 0) {
    uVar3 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_10041ace0,FUN_10041ad20,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_10041ad50(uVar1);
  }
  return (ulong)uVar1;
}

