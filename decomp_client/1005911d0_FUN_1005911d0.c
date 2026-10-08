
void FUN_1005911d0(QObject *param_1,QEvent *param_2,long param_3)

{
  char cVar1;
  
  if ((*(QEvent **)(param_1 + 0x10) == param_2) && (*(short *)(param_3 + 0x10) == 0x13)) {
    cVar1 = CMappingModel::isSubmiting();
    if (cVar1 == '\0') {
      QObject::deleteLater();
    }
    else {
      QWidget::hide();
      *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) & 0xfb;
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

