
undefined8 FUN_10080ed70(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_100887ce0(0x14,0x10e,0x114,"ssl_lib.c",0x3d1);
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010080ed8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x38))();
    return uVar1;
  }
  return 0;
}

