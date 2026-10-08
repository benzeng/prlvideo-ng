
undefined8 FUN_100be4530(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = 0x114;
    uVar2 = 0x3de;
  }
  else {
    if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100be454a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x40))();
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar1 = 0xcf;
    uVar2 = 0x3e4;
  }
  FUN_100c62ee0(0x14,0xd0,uVar1,"ssl_lib.c",uVar2);
  return 0xffffffff;
}

