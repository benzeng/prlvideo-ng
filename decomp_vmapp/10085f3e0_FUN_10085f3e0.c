
undefined8 FUN_10085f3e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    uVar2 = FUN_1008578b0(param_2,param_3,lVar1 + 8,lVar1,param_4);
    return uVar2;
  }
  FUN_100887ce0(0x10,0x86,0x6f,"ecp_mont.c",0x117);
  return 0;
}

