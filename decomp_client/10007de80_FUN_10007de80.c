
void FUN_10007de80(QObject *param_1,QEvent *param_2,long param_3)

{
  if (*(short *)(param_3 + 0x10) == 0x13) {
    FUN_10007cdc0(param_1);
  }
  else if (*(short *)(param_3 + 0x10) == 0x4b) {
    FUN_10007d020(param_1);
    FUN_10007d6b0(param_1);
    FUN_10007dbd0(param_1);
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

