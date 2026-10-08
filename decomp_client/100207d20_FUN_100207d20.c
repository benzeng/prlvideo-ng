
void FUN_100207d20(long *param_1,int param_2,undefined8 param_3,bool *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80021023;
  if (param_2 != 0x3afe) {
    if (param_2 == 0x3aff) {
      uVar1 = 0x80000297;
    }
    else {
      uVar1 = 0x80000007;
      if ((*(uint *)(param_4 + 8) & 0x3fffffff) != 0) {
        uVar1 = QVariant::toUInt(param_4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100207d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

