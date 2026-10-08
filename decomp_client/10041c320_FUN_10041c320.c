
void FUN_10041c320(void)

{
  int iVar1;
  
  if (DAT_102273fb0 == 0) {
    DAT_102273fb0 = FUN_10041c0b0("CVmEdWidgetIniterPrivate::IdValueMap",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273fb0;
  if (DAT_102273e30 == 0) {
    DAT_102273e30 =
         FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273e30);
  return;
}

