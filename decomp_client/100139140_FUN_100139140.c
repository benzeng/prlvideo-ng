
void FUN_100139140(QKeyEvent *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = QListWidget::currentRow();
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0x1000013:
    cVar1 = FUN_100138c60(param_1,iVar2 + -1);
    if (cVar1 == '\0') goto switchD_100139178_caseD_1000014;
    if (iVar2 + -1 == 0) {
      return;
    }
    goto LAB_100139215;
  default:
    goto switchD_100139178_caseD_1000014;
  case 0x1000015:
    cVar1 = FUN_100138c60(param_1,iVar2 + 1);
    if (cVar1 != '\0') {
      iVar3 = QListWidget::count();
      if (iVar2 + 1 == iVar3 + -1) {
        return;
      }
      goto LAB_100139215;
    }
    goto switchD_100139178_caseD_1000014;
  case 0x1000016:
    cVar1 = FUN_100138c60(param_1,0);
    break;
  case 0x1000017:
    iVar2 = QListWidget::count();
    cVar1 = FUN_100138c60(param_1,iVar2 + -1);
  }
  if (cVar1 != '\0') {
LAB_100139215:
    QListWidget::setCurrentRow((int)param_1);
    return;
  }
switchD_100139178_caseD_1000014:
  QAbstractItemView::keyPressEvent(param_1);
  return;
}

