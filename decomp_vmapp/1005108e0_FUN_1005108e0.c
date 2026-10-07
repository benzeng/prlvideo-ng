
undefined8 FUN_1005108e0(int param_1)

{
  undefined8 uVar1;
  QMetaType local_68 [64];
  byte local_28;
  
  QMetaType::QMetaType(local_68,param_1);
  uVar1 = QMetaType::createExtended(local_68);
  if ((local_28 & 0x80) != 0) {
    QMetaType::dtor();
  }
  return uVar1;
}

