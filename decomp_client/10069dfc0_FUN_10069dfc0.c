
QIcon * FUN_10069dfc0(QIcon *param_1,long *param_2)

{
  char cVar1;
  QIcon local_30 [8];
  QIcon local_28 [8];
  
  cVar1 = (**(code **)(*param_2 + 0x80))(param_2);
  if (cVar1 == '\0') {
    QIcon::QIcon(param_1);
  }
  else {
    QIcon::QIcon(local_28);
    FUN_10069fa10(local_30,param_2,"get%1Icon",local_28,0);
    QIcon::~QIcon(local_28);
    cVar1 = QIcon::isNull();
    if (cVar1 == '\0') {
      QIcon::QIcon(param_1,local_30);
    }
    else {
      QAction::icon();
    }
    QIcon::~QIcon(local_30);
  }
  return param_1;
}

