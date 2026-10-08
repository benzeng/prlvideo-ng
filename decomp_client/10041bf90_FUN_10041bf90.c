
void FUN_10041bf90(void)

{
  int iVar1;
  
  if (DAT_102273f90 == 0) {
    DAT_102273f90 = FUN_10041bb70("CVmEdWidgetIniterPrivate::IdValuePair",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f90;
  if (DAT_102273520 == 0) {
    DAT_102273520 =
         FUN_100250480("QtMetaTypePrivate::QPairVariantInterfaceImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273520);
  return;
}

