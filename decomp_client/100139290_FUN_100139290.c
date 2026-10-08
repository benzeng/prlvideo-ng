
byte FUN_100139290(int param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  QVariant local_28;
  
  cVar1 = FUN_100138c60();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    plVar3 = (long *)QListWidget::item(param_1);
    if (plVar3 == (long *)0x0) {
      bVar2 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x20))(&local_28,plVar3,0x102);
      bVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_28);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}

