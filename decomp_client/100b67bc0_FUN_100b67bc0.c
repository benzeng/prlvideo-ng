
undefined4 FUN_100b67bc0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1a4,"GetPlatform");
  }
  uVar1 = *(int *)(param_1 + 0xa4) - 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined4 *)(&DAT_101cdc1d0 + (long)(int)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

