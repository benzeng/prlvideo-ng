
void FUN_10021bbe0(long *param_1)

{
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
    QWidget::close();
  }
                    /* WARNING: Could not recover jumptable at 0x00010021bc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
  return;
}

