
undefined4 FUN_100b8f260(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x7d1,"IsNewPermanentKey");
  }
  if (*(int *)(param_1 + 0x20) == 3) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                      "Pd4License.cpp",0x5f8,"IsUnlimited");
      }
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == -1) {
          FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "v.m_ver != s_nInvalidVer","Pd4License.cpp",0x3f,"operator<");
          iVar1 = *(int *)(param_1 + 0x18);
        }
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),10 < iVar1 && iVar1 != 0xf || iVar1 == 10);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

