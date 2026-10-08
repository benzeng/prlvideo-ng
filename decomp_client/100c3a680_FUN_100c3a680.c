
bool FUN_100c3a680(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_100c26b50(param_2,*(long *)(param_1 + 0xd8));
    return lVar1 != 0;
  }
  FUN_100c62ee0(0x10,0xd1,0x6f,"ecp_mont.c",0x12d);
  return false;
}

