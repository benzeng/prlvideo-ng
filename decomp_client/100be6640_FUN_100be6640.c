
undefined8 FUN_100be6640(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_100c62ee0(0x14,0xb4,0x90,"ssl_lib.c",0xa06);
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*(long *)(param_1 + 8) + 0x58))();
    uVar1 = 1;
    if ((*(byte *)(param_1 + 0x49) & 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100be666b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x30))();
      return uVar1;
    }
  }
  return uVar1;
}

