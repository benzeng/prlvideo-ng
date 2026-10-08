
void FUN_10041b390(void)

{
  int iVar1;
  
  if (DAT_102273f54 == 0) {
    DAT_102273f54 = FUN_10041b070("Mappings::ValuePair",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f54;
  if (DAT_102273520 == 0) {
    DAT_102273520 =
         FUN_100250480("QtMetaTypePrivate::QPairVariantInterfaceImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273520);
  return;
}

