
void FUN_1004513e0(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != param_3) && (-1 < (int)(param_3 | param_2))) {
    iVar1 = QListWidget::count();
    if ((int)param_2 < iVar1) {
      iVar1 = QListWidget::count();
      if ((int)param_3 < iVar1) {
        lVar2 = QListWidget::takeItem((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30));
        if (lVar2 != 0) {
          QListWidget::insertItem
                    ((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),
                     (QListWidgetItem *)(ulong)param_3);
          return;
        }
      }
    }
  }
  return;
}

