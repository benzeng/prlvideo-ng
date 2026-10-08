
void FUN_10053c260(void)

{
  int iVar1;
  
  if (DAT_102274218 == 0) {
    DAT_102274218 = FUN_10053bf90("QList<QRadioButton*>",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102274218;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

