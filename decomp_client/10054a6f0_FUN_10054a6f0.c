
void FUN_10054a6f0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (iVar3 = FUN_1005711f0(), iVar3 == param_2)) {
    return;
  }
  pvVar4 = operator_new(0x60);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar5 = 0;
  if ((lVar2 != 0) && (uVar5 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
  }
  FUN_100570dc0(pvVar4,uVar5,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),param_2);
  QStackedWidget::addWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x40));
  QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x40));
  if (*(long *)(param_1 + 0x20) != 0) {
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x50));
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(void **)(param_1 + 0x20) = pvVar4;
  return;
}

