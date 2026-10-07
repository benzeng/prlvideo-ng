
void FUN_1004c07d0(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(2,0x11,uVar1);
  }
  FUN_1002a5590(**(undefined8 **)(param_1 + 8),param_2,param_3);
  if (DAT_1011ccc18 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c0841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011ccc18)(3,0x11,uVar1);
    return;
  }
  return;
}

