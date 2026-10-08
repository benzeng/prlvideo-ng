
ulong FUN_100086fc0(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_10226c7b8 == 0) {
      DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
    }
    if (DAT_10226c7b8 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_10226c7b8);
      return uVar2;
    }
  }
  uVar3 = 0x187;
  if (param_3 == 0) {
    uVar3 = 0x87;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_100087050,FUN_100087090,0x10,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_1000870d0(uVar1);
  }
  return (ulong)uVar1;
}

