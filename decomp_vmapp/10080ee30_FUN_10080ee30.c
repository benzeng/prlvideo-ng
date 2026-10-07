
undefined8 FUN_10080ee30(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_100887ce0(0x14,0xe0,0x114,"ssl_lib.c",0x3f4);
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x49) & 0x30) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010080ee75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x48))();
  return uVar1;
}

