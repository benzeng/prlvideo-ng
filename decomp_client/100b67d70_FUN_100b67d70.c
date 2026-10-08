
undefined8 * FUN_100b67d70(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1d3,"GetKeyNumber");
  }
  piVar1 = *(int **)(param_2 + 0xc0);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

