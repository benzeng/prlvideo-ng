
void FUN_100250410(void)

{
  int iVar1;
  
  if (DAT_1022743b0 == 0) {
    DAT_1022743b0 = FUN_100250100("GUI::StringPair",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743b0;
  if (DAT_102273520 == 0) {
    DAT_102273520 =
         FUN_100250480("QtMetaTypePrivate::QPairVariantInterfaceImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273520);
  return;
}

