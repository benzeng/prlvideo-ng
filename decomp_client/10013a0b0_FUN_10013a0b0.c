
void FUN_10013a0b0(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_100139f20();
  if (cVar1 != '\0') {
    lVar2 = QObject::sender();
    if (lVar2 != 0) {
      lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e16c8,0);
      if (lVar2 != 0) {
        QWidget::setFocus(lVar2,7);
        return;
      }
    }
  }
  return;
}

