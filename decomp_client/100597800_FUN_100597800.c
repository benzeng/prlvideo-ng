
void FUN_100597800(void)

{
  int iVar1;
  
  if (DAT_1022743bc == 0) {
    DAT_1022743bc = FUN_100597550("Remaps::MouseRemapList",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743bc;
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273510);
  return;
}

