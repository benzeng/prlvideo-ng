
bool FUN_100b8eff0(long param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x7a9,"IsMasterKey");
  }
  if (*(int *)(param_1 + 0x18) == 8) {
    if (*(int *)(param_1 + 0x20) == 3) {
      if (*(int *)(param_1 + 0x1c) == 7) {
        if (*(char *)(param_1 + 8) == '\0') {
          FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                        "Pd4License.cpp",0x5fe,"IsTimeLimited");
        }
        if (*(int *)(param_1 + 0x40) == 0) {
          if (*(char *)(param_1 + 8) == '\0') {
            FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                          "Pd4License.cpp",0x208,"GetVolume");
          }
          bVar1 = *(int *)(param_1 + 0x7c) != 0;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

