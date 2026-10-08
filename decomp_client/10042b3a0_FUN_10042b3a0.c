
void FUN_10042b3a0(long param_1)

{
  int iVar1;
  
  iVar1 = QDialogButtonBox::buttonRole(*(QAbstractButton **)(param_1 + 0xe0));
  if (iVar1 == 7) {
    FUN_10042dd60(param_1);
    FUN_10042da70(param_1);
    return;
  }
  iVar1 = QDialogButtonBox::buttonRole(*(QAbstractButton **)(param_1 + 0xe0));
  if (iVar1 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010042b3f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1b8))();
    return;
  }
  iVar1 = QDialogButtonBox::buttonRole(*(QAbstractButton **)(param_1 + 0xe0));
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010042b416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))();
    return;
  }
  return;
}

