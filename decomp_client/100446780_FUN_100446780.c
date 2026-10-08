
ulong FUN_100446780(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_102273ff8 == 0) {
      DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
    }
    if (DAT_102273ff8 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_102273ff8);
      return uVar2;
    }
  }
  uVar3 = 0x107;
  if (param_3 == 0) {
    uVar3 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_100446810,FUN_100446850,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_1004468e0(uVar1);
  }
  return (ulong)uVar1;
}

