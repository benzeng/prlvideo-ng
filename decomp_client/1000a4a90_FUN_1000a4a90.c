
bool FUN_1000a4a90(void)

{
  bool bVar1;
  
  bVar1 = DAT_102310890 != (long *)0x0;
  if (bVar1) {
    (**(code **)(*DAT_102310890 + 0x20))();
    DAT_102310890 = (long *)0x0;
  }
  return bVar1;
}

