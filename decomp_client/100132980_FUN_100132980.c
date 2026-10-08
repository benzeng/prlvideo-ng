
void FUN_100132980(long param_1,long param_2)

{
  int iVar1;
  QVariant local_30;
  
  if ((((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(QAction **)(param_1 + 0x40) != (QAction *)0x0)) {
    QMenu::setActiveAction(*(QAction **)(param_1 + 0x40));
    QAction::data();
    iVar1 = QVariant::toInt((bool *)&local_30);
    QVariant::~QVariant(&local_30);
    if (iVar1 != -1) {
      QComboBox::setCurrentIndex((int)param_1);
      QComboBox::activated((int)param_1);
    }
  }
  return;
}

