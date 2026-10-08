
void FUN_10064bc80(QObject *param_1,QEvent *param_2,long param_3)

{
  int iVar1;
  QEvent *pQVar2;
  long lVar3;
  ulong uVar4;
  
  pQVar2 = (QEvent *)CDeclarativeWizardProxyPage::sourcePage();
  if ((pQVar2 == param_2) && (*(short *)(param_3 + 0x10) == 6)) {
    lVar3 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1750,0);
    if (lVar3 != 0) {
      iVar1 = QKeyEvent::modifiers();
      if ((iVar1 != 0) || (*(int *)(lVar3 + 0x28) != 0x1000005)) {
        iVar1 = QKeyEvent::modifiers();
        if ((iVar1 != 0) || (*(int *)(lVar3 + 0x28) != 0x1000004)) {
          uVar4 = QKeyEvent::modifiers();
          if (((uVar4 & 0x20000000) == 0) || (*(int *)(lVar3 + 0x28) != 0x1000005))
          goto LAB_10064bd2b;
        }
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x28) + 8) & 1) == 0) {
        QAbstractButton::click();
      }
    }
  }
LAB_10064bd2b:
  QObject::eventFilter(param_1,param_2);
  return;
}

