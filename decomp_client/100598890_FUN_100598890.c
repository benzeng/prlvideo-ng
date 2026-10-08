
void FUN_100598890(void)

{
  int iVar1;
  
  if (DAT_1022743dc == 0) {
    DAT_1022743dc = FUN_100598590("Shortcuts::ShortcutsMap",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743dc;
  if (DAT_102273e30 == 0) {
    DAT_102273e30 =
         FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
  }
  QMetaType::unregisterConverterFunction(iVar1,DAT_102273e30);
  return;
}

