
void FUN_100143580(long param_1)

{
  QAction *pQVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    QObject::blockSignals(SUB81(param_1,0));
    pQVar1 = (QAction *)0x0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (pQVar1 = (QAction *)0x0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      pQVar1 = *(QAction **)(param_1 + 0x18);
    }
    QMenu::setActiveAction(pQVar1);
    QObject::blockSignals(SUB81(param_1,0));
    return;
  }
  FUN_100df99c0("","prl_client_app",0,
                "(?)Warning: NULL menu pointer - CColorAction can not be highlighted...");
  return;
}

