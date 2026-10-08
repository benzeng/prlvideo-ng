
void FUN_100138e10(undefined8 param_1,int param_2,byte param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  QVariant local_40;
  
  plVar4 = (long *)QListWidget::item((int)param_1);
  if (plVar4 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar4 + 0x28);
    QVariant::QVariant(&local_40,(bool)(param_3 ^ 1));
    (*pcVar1)(plVar4,0x102,&local_40);
    QVariant::~QVariant(&local_40);
  }
  iVar6 = param_2 + 1;
  iVar3 = QListWidget::count();
  if (iVar6 < iVar3) {
    do {
      cVar2 = FUN_100138c60(param_1,iVar6);
      if (cVar2 != '\0') break;
      lVar5 = QListWidget::item((int)param_1);
      if ((lVar5 != 0) && (*(QListWidgetItem **)(lVar5 + 0x18) != (QListWidgetItem *)0x0)) {
        QListWidget::setItemHidden(*(QListWidgetItem **)(lVar5 + 0x18),SUB81(lVar5,0));
      }
      iVar6 = iVar6 + 1;
      iVar3 = QListWidget::count();
    } while (iVar6 < iVar3);
  }
  FUN_1007fb020(param_1,param_3,param_2);
  return;
}

