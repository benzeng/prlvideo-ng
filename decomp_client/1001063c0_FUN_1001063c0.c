
bool FUN_1001063c0(void)

{
  bool bVar1;
  
  bVar1 = DAT_1023108c0 != (long *)0x0;
  if (bVar1) {
    (**(code **)(*DAT_1023108c0 + 0x20))();
    DAT_1023108c0 = (long *)0x0;
  }
  return bVar1;
}

