
void FUN_10054e6e0(QObject *param_1,QEvent *param_2,long param_3)

{
  QSize *pQVar1;
  QPoint *pQVar2;
  
  if ((*(QEvent **)(*(long *)(param_1 + 0x18) + 0xb8) == param_2) &&
     (*(ushort *)(param_3 + 0x10) - 0xd < 2)) {
    pQVar1 = *(QSize **)(*(long *)(param_1 + 0x18) + 200);
    (**(code **)((long)*pQVar1 + 0x70))(pQVar1);
    QWidget::setFixedSize(pQVar1);
    pQVar2 = *(QPoint **)(*(long *)(param_1 + 0x18) + 200);
    QWidget::pos();
    QWidget::move(pQVar2);
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

