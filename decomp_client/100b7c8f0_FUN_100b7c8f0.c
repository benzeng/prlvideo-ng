
ulong FUN_100b7c8f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  ulong uVar4;
  
  if (*param_1 == -1) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x3e,"operator<");
  }
  iVar1 = *param_2;
  if (iVar1 == -1) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","v.m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x3f,"operator<");
    iVar1 = *param_2;
  }
  iVar2 = *param_1;
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 == 0xf) || (iVar2 != 0xf)) {
    uVar4 = (ulong)CONCAT31(uVar3,iVar2 < iVar1 && (iVar2 == 0xf || iVar1 != 0xf));
  }
  else {
    uVar4 = CONCAT71((uint7)uVar3,1);
  }
  return uVar4;
}

