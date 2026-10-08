
void FUN_10041ae00(void)

{
  int iVar1;
  
  if (DAT_102273f30 == 0) {
    DAT_102273f30 = FUN_10041ab90("CVmEdWidgetIniterPrivate::PathValuesList",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f30;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

