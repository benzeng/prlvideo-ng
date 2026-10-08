
QIcon * FUN_10014c530(QIcon *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  QIcon *pQVar3;
  QIcon local_28 [8];
  
  iVar2 = QVariant::userType();
  if (iVar2 == 0x45) {
    pQVar3 = (QIcon *)QVariant::constData();
    QIcon::QIcon(param_1,pQVar3);
  }
  else {
    QIcon::QIcon(local_28);
    cVar1 = QVariant::convert(param_2,(void *)0x45);
    if (cVar1 == '\0') {
      QIcon::QIcon(param_1);
    }
    else {
      QIcon::QIcon(param_1,local_28);
    }
    QIcon::~QIcon(local_28);
  }
  return param_1;
}

