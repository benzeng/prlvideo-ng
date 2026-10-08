
void FUN_1007b56f0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001323b0(param_1,param_4);
  *param_1 = &PTR_FUN_10222d8a0;
  *(int *)((long)param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    QAction::setSeparator(SUB81(param_1,0));
  }
  return;
}

