
void FUN_10023ded0(long *param_1)

{
  char cVar1;
  long lVar2;
  int *local_30;
  undefined1 local_21;
  
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  lVar2 = FUN_100326190(lVar2);
  if (lVar2 != 0) {
    QWidget::setWindowOpacity(DAT_100e11050);
  }
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  lVar2 = FUN_100323e30(lVar2,0);
  if ((lVar2 != 0) && (*(char *)((long)param_1 + 0x34) != '\0')) {
    cVar1 = QWidget::hasFocus();
    if (cVar1 != '\0') {
      QWidget::clearFocus();
    }
    QWidget::setFocus(lVar2,7);
  }
  FUN_10006b440(&local_30,param_1 + 7);
  FUN_10023cee0(&local_30,lVar2);
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_21 = *local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023dfa4;
    }
    FUN_10006b5d0(&local_30,local_30);
  }
LAB_10023dfa4:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

