
void FUN_100b312d0(long *param_1,QString *param_2,undefined4 param_3,undefined8 param_4)

{
  QString::operator=((QString *)(param_1 + 1),param_2);
  *(undefined4 *)(param_1 + 2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100b31307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4);
  return;
}

