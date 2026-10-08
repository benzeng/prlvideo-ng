
undefined4 FUN_100b67300(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x14f,"IsHaAllowed");
  }
  return *(undefined4 *)(param_1 + 0xdc);
}

