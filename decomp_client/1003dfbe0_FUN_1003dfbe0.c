
void FUN_1003dfbe0(void)

{
  int iVar1;
  
  if (DAT_102273e78 == 0) {
    DAT_102273e78 = FUN_1003df970("Mappings::Values",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273e78;
  if (DAT_102273e30 == 0) {
    DAT_102273e30 =
         FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273e30);
  return;
}

