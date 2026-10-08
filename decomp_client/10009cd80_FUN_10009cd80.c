
bool FUN_10009cd80(void)

{
  bool bVar1;
  
  bVar1 = DAT_102310880 != (long *)0x0;
  if (bVar1) {
    (**(code **)(*DAT_102310880 + 0x20))();
    DAT_102310880 = (long *)0x0;
  }
  return bVar1;
}

