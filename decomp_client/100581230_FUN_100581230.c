
ulong FUN_100581230(QByteArray *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_102274378 == 0) {
      DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
    }
    if (DAT_102274378 != -1) {
      uVar2 = QMetaType::registerNormalizedTypedef(param_1,DAT_102274378);
      return uVar2;
    }
  }
  uVar3 = 0x107;
  if (param_3 == 0) {
    uVar3 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(param_1,FUN_1005812c0,FUN_1005812d0,8,uVar3,0);
  if (0 < (int)uVar1) {
    FUN_100581300(uVar1);
  }
  return (ulong)uVar1;
}

