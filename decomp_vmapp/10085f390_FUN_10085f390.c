
undefined8 FUN_10085f390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar1 = FUN_1008578b0(param_2,param_3,param_3,*(long *)(param_1 + 0xd0),param_4);
    return uVar1;
  }
  FUN_100887ce0(0x10,0x84,0x6f,"ecp_mont.c",0x10c);
  return 0;
}

