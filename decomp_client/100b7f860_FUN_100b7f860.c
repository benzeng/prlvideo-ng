
undefined8 FUN_100b7f860(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == -1) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","v.m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x3f,"operator<");
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if ((iVar1 == 5) || (5 < iVar1 && iVar1 != 0xf)) {
    if (iVar1 == -1) {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_ver != s_nInvalidVer",
                    "Pd4License.cpp",0x3e,"operator<");
      iVar1 = *(int *)(param_1 + 0x18);
    }
    if ((((iVar1 == 0xf) || (iVar1 < 10)) && (*(int *)(param_1 + 0x20) == 3)) &&
       (((iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 1 || (iVar1 == 7)) &&
        ((*(int *)(param_1 + 0x7c) != 0 && (*(int *)(param_1 + 0x68) == 0)))))) {
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

