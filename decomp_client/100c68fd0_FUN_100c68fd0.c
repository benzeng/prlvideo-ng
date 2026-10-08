
bool FUN_100c68fd0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100c19590(param_2,*(int *)(param_1 + 0x68) << 3,*(undefined8 *)(param_1 + 0x78));
  if (-1 >= iVar1) {
    FUN_100c62ee0(6,0x9f,0x9d,"e_camellia.c",0x6a);
  }
  return -1 < iVar1;
}

