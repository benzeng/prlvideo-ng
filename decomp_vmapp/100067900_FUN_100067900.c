
void FUN_100067900(QEvent *param_1,long param_2)

{
  if (*(ushort *)(param_2 + 0x10) == DAT_1011c3658) {
    FUN_1003fb830();
    return;
  }
  QObject::customEvent(param_1);
  return;
}

