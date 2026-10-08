
QPixmap * FUN_10014c490(QPixmap *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  QPixmap *pQVar3;
  QPixmap local_40 [32];
  
  iVar2 = QVariant::userType();
  if (iVar2 == 0x41) {
    pQVar3 = (QPixmap *)QVariant::constData();
    QPixmap::QPixmap(param_1,pQVar3);
  }
  else {
    QPixmap::QPixmap(local_40);
    cVar1 = QVariant::convert(param_2,(void *)0x41);
    if (cVar1 == '\0') {
      QPixmap::QPixmap(param_1);
    }
    else {
      QPixmap::QPixmap(param_1,local_40);
    }
    QPixmap::~QPixmap(local_40);
  }
  return param_1;
}

