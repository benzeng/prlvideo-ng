
void FUN_100598fc0(void)

{
  int iVar1;
  
  if (DAT_1022743e0 == 0) {
    DAT_1022743e0 = FUN_100598d80("QList<CSendKeyToVmInfo>",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743e0;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

