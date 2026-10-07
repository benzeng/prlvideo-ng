
void FUN_10035cb10(long param_1,undefined8 param_2)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x500;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x38) = 0;
  (*DAT_1011c5e68)(1,param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010035cb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5e68)(1,param_1 + 0x30);
  return;
}

