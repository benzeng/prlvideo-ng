
undefined1 FUN_100b602f0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPd4Lic || m_pVzLic",
                    "PrlLicense.cpp",0xb0,"IsTimeLimited");
      if (*(long *)(param_1 + 8) != 0) goto LAB_100b60359;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = FUN_100b67c40();
    uVar1 = iVar2 == 0;
  }
  else {
LAB_100b60359:
    uVar1 = FUN_100b89900();
  }
  return uVar1;
}

