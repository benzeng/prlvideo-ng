
void FUN_1002d9b20(QObject *param_1)

{
  QWidget *pQVar1;
  QObject *pQVar2;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(QSize **)(param_1 + 0x20) != (QSize *)0x0)) {
    QWidget::resize(*(QSize **)(param_1 + 0x20));
    QWidget::show();
    QWidget::activateWindow();
    QWidget::raise();
    pQVar1 = (QWidget *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar1 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar1 = *(QWidget **)(param_1 + 0x20);
    }
    WidgetUtils::centralizeWindow(pQVar1);
    pQVar2 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar2 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar2 = *(QObject **)(param_1 + 0x20);
    }
    QObject::disconnect(pQVar2,"2loadFinished(bool)",param_1,(char *)0x0);
  }
  return;
}

