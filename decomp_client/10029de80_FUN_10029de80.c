
void FUN_10029de80(long *param_1)

{
  QWidget::close();
                    /* WARNING: Could not recover jumptable at 0x00010029dec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,(int)param_1[7]);
  return;
}

