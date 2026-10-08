
void FUN_10041b900(void)

{
  int iVar1;
  
  if (DAT_102273f74 == 0) {
    DAT_102273f74 = FUN_10041b690("CVmEdWidgetIniterPrivate::IdValuesList",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f74;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

