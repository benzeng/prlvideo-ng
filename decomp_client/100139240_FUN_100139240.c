
void FUN_100139240(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  char cVar2;
  
  cVar2 = FUN_100138c60();
  if (cVar2 != '\0') {
    lVar1 = QListWidget::item((int)param_1);
    if (lVar1 != 0) {
      FUN_100138e10(param_1,param_2,param_3);
      return;
    }
  }
  return;
}

