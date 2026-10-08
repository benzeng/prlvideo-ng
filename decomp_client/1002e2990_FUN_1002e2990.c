
void FUN_1002e2990(QObject *param_1,char param_2)

{
  long lVar1;
  char *pcVar2;
  QObject *pQVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x80) = 0;
  *(char *)(lVar1 + 0x81) = param_2;
  if (param_2 == '\0') {
    pcVar2 = "Page load finished with errors.";
  }
  else {
    pcVar2 = "Page load finished.";
  }
  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,pcVar2);
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 8) != 0x65) {
    if (param_2 != '\0') {
      if (((*(long *)(lVar1 + 0x50) == 0) || (*(int *)(*(long *)(lVar1 + 0x50) + 4) == 0)) ||
         (*(long *)(lVar1 + 0x58) == 0)) {
        FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "0 != m_pData->m_pDialog","Tasks/CTaskProductUpdatePromo.cpp",0x3ff,
                      "onPromoPageLoaded");
      }
      QWidget::show();
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
      pQVar3 = (QObject *)0x0;
      if ((lVar1 != 0) && (pQVar3 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
        pQVar3 = *(QObject **)(*(long *)(param_1 + 0x18) + 0x58);
      }
      QObject::installEventFilter(pQVar3);
      return;
    }
    return;
  }
  QTimer::singleShot(0,param_1,"1onCheckPromoLoaded()");
  return;
}

