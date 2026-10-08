
void FUN_100377ea0(QObject *param_1,QEvent *param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  QEvent *pQVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pQVar3 = (QEvent *)QWidget::window();
  if (pQVar3 == param_2) {
    uVar1 = *(ushort *)(param_3 + 0x10);
    uVar2 = FUN_10037bd10();
    if (uVar1 == uVar2) {
      *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) | 4;
      uVar4 = FUN_1006915d0();
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar5 = FUN_100323dd0(uVar5);
      lVar6 = FUN_100691620(uVar4,0x25,uVar5);
      if (lVar6 != 0) {
        QAction::activate(lVar6,0);
      }
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

