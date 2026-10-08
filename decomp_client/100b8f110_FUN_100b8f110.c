
bool FUN_100b8f110(long param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x7b2,"IsTemporaryKey");
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp"
                    ,0x1ae,"GetVersion");
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  bVar2 = false;
  if ((uVar1 < 0x10) && ((0x8300U >> (uVar1 & 0x1f) & 1) != 0)) {
    if ((*(int *)(param_1 + 0x20) == 3) && (*(int *)(param_1 + 0x1c) == 7)) {
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                      "Pd4License.cpp",0x5fe,"IsTimeLimited");
      }
      bVar2 = *(int *)(param_1 + 0x40) != 0;
      if ((bVar2) && (param_2 != '\0')) {
        bVar2 = 8 < (int)uVar1 && uVar1 != 0xf || uVar1 == 8;
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

