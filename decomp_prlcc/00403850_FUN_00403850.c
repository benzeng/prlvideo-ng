
void FUN_00403850(void)

{
  memset(&prl_xfunctions,0,0x1d0);
  if (DAT_0061d310 != 0) {
    dlclose();
    DAT_0061d310 = 0;
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"X functions were unloaded");
      return;
    }
  }
  return;
}

