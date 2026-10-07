
void FUN_1005d5f70(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1005d5f70(param_1,*param_2);
    FUN_1005d5f70(param_1,param_2[1]);
    FUN_1005d5e30(param_2 + 0xc);
    QDateTime::~QDateTime((QDateTime *)(param_2 + 0xb));
    FUN_100013180(param_2 + 8);
    operator_delete(param_2);
    return;
  }
  return;
}

