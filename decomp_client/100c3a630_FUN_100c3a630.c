
undefined8 FUN_100c3a630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar1 = FUN_100c33050(param_2,param_3,*(long *)(param_1 + 0xd0));
    return uVar1;
  }
  FUN_100c62ee0(0x10,0x85,0x6f,"ecp_mont.c",0x122);
  return 0;
}

