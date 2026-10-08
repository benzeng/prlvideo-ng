
ulong FUN_100598e40(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_1022743e0 == 0) {
      DAT_1022743e0 = FUN_100598d80("QList<CSendKeyToVmInfo>",0xffffffffffffffff,1);
    }
    if (DAT_1022743e0 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_1022743e0);
      return uVar2;
    }
  }
  uVar3 = 0x107;
  if (param_3 == 0) {
    uVar3 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_100598ed0,FUN_100598ee0,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_100598f10(uVar1);
  }
  return (ulong)uVar1;
}

