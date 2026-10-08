
void FUN_1004c9fd0(long param_1)

{
  QObject *pQVar1;
  long *plVar2;
  char cVar3;
  int extraout_var;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  int *local_80;
  int *local_78;
  QObject *local_70;
  int *local_68;
  QObject *local_60;
  int *local_58;
  QObject *local_50;
  int *local_48;
  QObject *local_40;
  int *local_38;
  undefined1 local_29;
  
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70));
  local_38 = (int *)PTR_shared_null_1021e15e8;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0x58) + 0x78))();
  QWidget::setFixedSize((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),extraout_var);
  CProgressIndicator::setIndicatorSize((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
  CProgressIndicator::showAnimationWidget
            (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x58);
    piVar4 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_48 = piVar4;
    local_40 = pQVar1;
    FUN_10007b8d0(&local_38,&local_48);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
  }
  uVar5 = FUN_10044e660(param_1);
  cVar3 = FUN_1003bee80(uVar5);
  if (cVar3 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x10);
    piVar4 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_58 = piVar4;
    local_50 = pQVar1;
    FUN_10007b8d0(&local_38,&local_58);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
  }
  uVar5 = FUN_10044e460(param_1);
  uVar5 = FUN_10018d490(uVar5);
  cVar3 = FUN_10076d820(uVar5);
  if ((cVar3 == '\0') && (cVar3 = FUN_10076d9e0(), cVar3 == '\0')) {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x68);
    piVar4 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_68 = piVar4;
    local_60 = pQVar1;
    FUN_10007b8d0(&local_38,&local_68);
    local_70 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x70);
    piVar6 = (int *)0x0;
    if (local_70 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_70);
    }
    local_78 = piVar6;
    FUN_10007b8d0(&local_38,&local_78);
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar6);
      }
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
  (**(code **)(*plVar2 + 0x70))(plVar2);
  QWidget::setFixedHeight((int)plVar2);
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x38);
  (**(code **)(*plVar2 + 0x70))(plVar2);
  QWidget::setFixedHeight((int)plVar2);
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x20);
  (**(code **)(*plVar2 + 0x70))(plVar2);
  QWidget::setFixedHeight((int)plVar2);
  FUN_10006b440(&local_80,&local_38);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_80);
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_29 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004ca29d;
    }
    FUN_10006b5d0(&local_80,local_80);
  }
LAB_1004ca29d:
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      if (*local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_10006b5d0(&local_38,local_38);
  }
  return;
}

