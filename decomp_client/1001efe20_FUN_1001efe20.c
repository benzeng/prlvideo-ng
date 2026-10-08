
void FUN_1001efe20(long *param_1)

{
  if (((param_1[9] != 0) && (*(int *)(param_1[9] + 4) != 0)) && (param_1[10] != 0)) {
    QWidget::close();
  }
                    /* WARNING: Could not recover jumptable at 0x0001001efe5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}

