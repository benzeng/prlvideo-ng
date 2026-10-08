
void FUN_100446990(void)

{
  int iVar1;
  
  if (DAT_102273ff8 == 0) {
    DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273ff8;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

