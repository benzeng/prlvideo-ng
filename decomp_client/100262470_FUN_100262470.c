
void FUN_100262470(long param_1)

{
  QWidget *pQVar1;
  
  if ((((*(char *)(param_1 + 0x38) != '\0') && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::show();
    pQVar1 = (QWidget *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar1 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar1 = *(QWidget **)(param_1 + 0x48);
    }
    WidgetUtils::cascadeWindow(pQVar1);
    return;
  }
  return;
}

