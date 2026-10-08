
void FUN_100132a20(QComboBox *param_1)

{
  int iVar1;
  QMenu *pQVar2;
  char *pcVar3;
  QPoint *pQVar4;
  undefined8 local_40;
  QVariant local_38;
  undefined8 local_28;
  
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    local_28 = WidgetUtils::getComboBoxPopupPos(param_1);
    pQVar2 = (QMenu *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar2 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar2 = *(QMenu **)(param_1 + 0x40);
    }
    iVar1 = WidgetUtils::getComboBoxPopupWidth(param_1);
    WidgetUtils::alignMenuWidth(pQVar2,iVar1);
    pcVar3 = (char *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pcVar3 = (char *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pcVar3 = *(char **)(param_1 + 0x40);
    }
    QVariant::QVariant(&local_38,true);
    QObject::setProperty(pcVar3,(QVariant *)"macNoSubpixelAA");
    QVariant::~QVariant(&local_38);
    pQVar4 = (QPoint *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar4 = (QPoint *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar4 = *(QPoint **)(param_1 + 0x40);
    }
    local_40 = QWidget::mapToGlobal((QPoint *)param_1);
    QMenu::activeAction();
    QMenu::popup(pQVar4,(QAction *)&local_40);
    return;
  }
  QComboBox::showPopup();
  return;
}

