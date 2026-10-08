
void FUN_100382cf0(long *param_1,QPixmap *param_2)

{
  QPixmap::operator=((QPixmap *)(param_1 + 6),param_2);
                    /* WARNING: Could not recover jumptable at 0x000100382d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

