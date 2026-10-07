
undefined8 FUN_1000aeb40(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x5c0);
  if (uVar1 == 0x8ff) {
    return 0;
  }
  if (uVar1 < 0x80e) {
    return 0;
  }
  if ((uVar1 & 0xffffff00) != 0x800) {
    return 0;
  }
  if (param_2 != 9) {
    if (param_2 == 0x73) {
      return 1;
    }
    if (param_2 != 0x74) {
      return 0;
    }
  }
  lVar2 = FUN_1000a1c30();
  if (lVar2 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pToolsHostAgent","VirtualPC.cpp",
                  0xa84,"GetShutdownTypeFromCmd");
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
    if (*(char *)(lVar2 + 0x28) == '\0') {
      uVar3 = 2;
    }
  }
  return uVar3;
}

