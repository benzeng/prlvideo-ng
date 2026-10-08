
void FUN_100430fc0(QWidget *param_1,int param_2,int param_3)

{
  if (param_2 == 0 && param_3 == 0) {
    QObject::sender();
    QAbstractItemDelegate::commitData(param_1);
    return;
  }
  return;
}

