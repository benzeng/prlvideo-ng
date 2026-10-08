
void FUN_100136c50(QComboBox *param_1)

{
  QMenu *pQVar1;
  int iVar2;
  undefined8 local_28;
  
  if ((param_1[0x38] != (QComboBox)0x0) &&
     (FUN_100135680(*(undefined8 *)(param_1 + 0x30)), param_1[0x38] != (QComboBox)0x0)) {
    WidgetUtils::getComboBoxPopupPos(param_1);
  }
  local_28 = QWidget::mapToGlobal((QPoint *)param_1);
  if (param_1[0x38] != (QComboBox)0x0) {
    pQVar1 = *(QMenu **)(param_1 + 0x30);
    iVar2 = WidgetUtils::getComboBoxPopupWidth(param_1);
    WidgetUtils::alignMenuWidth(pQVar1,iVar2);
  }
  QMenu::popup(*(QPoint **)(param_1 + 0x30),(QAction *)&local_28);
  QWidget::update();
  return;
}

