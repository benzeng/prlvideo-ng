
uint FUN_100b7ca70(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  if (iVar2 == -1) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x5e,"next");
    iVar2 = *param_1;
  }
  uVar1 = iVar2 + 1;
  if ((uVar1 < 0x11) && ((0x10803U >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (3 < iVar2 - 10U) {
      uVar3 = uVar1;
    }
    if (0xf < uVar1) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

