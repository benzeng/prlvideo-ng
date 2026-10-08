
uint FUN_100b7c9d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x4c,"prev");
    uVar1 = *param_1;
  }
  if ((uVar1 + 1 < 0x11) && ((0x10007U >> (uVar1 + 1 & 0x1f) & 1) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if ((uVar1 & 0xfffffffc) != 0xc) {
      uVar2 = uVar1 - 1;
    }
    if (0xf < uVar1 - 1) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

