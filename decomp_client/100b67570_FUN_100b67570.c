
undefined8 * FUN_100b67570(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x16d,"GetOwner");
  }
  piVar1 = *(int **)(param_2 + 0x40);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

