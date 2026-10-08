
void FUN_1005813b0(void)

{
  int iVar1;
  
  if (DAT_102274378 == 0) {
    DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102274378;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

