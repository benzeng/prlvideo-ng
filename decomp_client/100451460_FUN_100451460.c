
void FUN_100451460(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  QVariant local_38;
  
  lVar3 = QListWidget::currentItem();
  if (lVar3 != 0) {
    iVar2 = QListWidget::row(*(QListWidgetItem **)(*(long *)(param_1 + 0x38) + 0x30));
    FUN_1004513e0(param_1,iVar2,iVar2 + -1);
    QListWidget::setCurrentItem(*(QListWidgetItem **)(*(long *)(param_1 + 0x38) + 0x30));
    pcVar1 = *(char **)(*(long *)(param_1 + 0x38) + 0x30);
    QVariant::QVariant(&local_38,iVar2 + -1);
    QObject::setProperty(pcVar1,(QVariant *)"selectedItem");
    QVariant::~QVariant(&local_38);
    FUN_100139380(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30));
  }
  return;
}

