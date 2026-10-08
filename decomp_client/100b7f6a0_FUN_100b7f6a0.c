
bool FUN_100b7f6a0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 8) == '\0') &&
     (FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp"
                    ,0x7da,"CanBeUsedForCurrentVersion"), *(char *)(param_1 + 8) == '\0')) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x1ae,"GetVersion");
  }
  iVar1 = *(int *)(param_1 + 0x18);
  cVar2 = FUN_100b8f110(param_1,1);
  bVar3 = true;
  if (((cVar2 == '\0') && (iVar1 != 0)) && (iVar1 != 10)) {
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp"
                    ,0x214,"GetProtected");
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      bVar3 = false;
    }
    else {
      if (iVar1 < 10) {
        if (iVar1 == -1) {
          FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ver != s_nInvalidVer"
                        ,"Pd4License.cpp",0x5e,"next");
          return false;
        }
        if (iVar1 == 0) {
          return false;
        }
      }
      else {
        if (iVar1 == 10) {
          return false;
        }
        if (iVar1 == 0xf) {
          return false;
        }
      }
      bVar3 = iVar1 == 9 && 3 < iVar1 - 10U;
    }
  }
  return bVar3;
}

