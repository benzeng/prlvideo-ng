
bool FUN_1001c4d10(void)

{
  bool bVar1;
  
  bVar1 = DAT_102310908 != (long *)0x0;
  if (bVar1) {
    (**(code **)(*DAT_102310908 + 0x20))();
    DAT_102310908 = (long *)0x0;
  }
  return bVar1;
}

