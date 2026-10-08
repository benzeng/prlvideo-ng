
ulong FUN_10019aa60(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_10226dd98 == 0) {
      DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
    }
    if (DAT_10226dd98 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_10226dd98);
      return uVar2;
    }
  }
  uVar3 = 0x187;
  if (param_3 == 0) {
    uVar3 = 0x87;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_10019aaf0,FUN_10019ab30,0x10,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_10019ab70(uVar1);
  }
  return (ulong)uVar1;
}

