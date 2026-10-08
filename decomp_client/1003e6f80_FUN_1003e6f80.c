
void FUN_1003e6f80(void)

{
  int iVar1;
  
  if (DAT_102273f08 == 0) {
    DAT_102273f08 = FUN_1003e6cb0("QList<int >",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f08;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

