
void FUN_1007366b0(long *param_1,QRectF *param_2)

{
  long lVar1;
  char cVar2;
  QPixmap local_48 [32];
  
  cVar2 = QPixmap::isNull();
  if (cVar2 == '\0') {
    QPainter::setRenderHint(param_2,4,1);
    (**(code **)(*param_1 + 0x60))(local_48,param_1);
    lVar1 = param_1[6];
    QPixmap::rect();
    QPainter::drawPixmap(param_2,local_48,(QRectF *)(lVar1 + 0x38));
  }
  return;
}

