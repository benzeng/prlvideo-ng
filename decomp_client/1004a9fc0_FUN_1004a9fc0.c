
void FUN_1004a9fc0(long param_1)

{
  long *plVar1;
  QObject *pQVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *local_60;
  int *local_58;
  QObject *local_50;
  int *local_48;
  QObject *local_40;
  int *local_38;
  undefined1 local_29;
  
  local_38 = (int *)PTR_shared_null_1021e15e8;
  uVar4 = FUN_10044e660();
  cVar3 = FUN_1003bec30(uVar4);
  if (cVar3 == '\0') {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 8);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xa8);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xa0);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
    QLayout::removeItem((QLayoutItem *)**(undefined8 **)(param_1 + 0x38));
    QLayout::removeItem((QLayoutItem *)**(undefined8 **)(param_1 + 0x38));
    QLayout::removeItem((QLayoutItem *)**(undefined8 **)(param_1 + 0x38));
  }
  else {
    uVar4 = FUN_10044e660(param_1);
    cVar3 = FUN_1003bec40(uVar4);
    if (cVar3 == '\0') {
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xa8);
      (**(code **)(*plVar1 + 0x68))(plVar1,0);
      QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xa0);
      (**(code **)(*plVar1 + 0x68))(plVar1,0);
      QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
    }
  }
  uVar4 = FUN_10044e660(param_1);
  cVar3 = FUN_1003be9f0(uVar4);
  if (cVar3 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x78);
    piVar5 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_48 = piVar5;
    local_40 = pQVar2;
    FUN_10007b8d0(&local_38,&local_48);
    local_50 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x80);
    piVar6 = (int *)0x0;
    if (local_50 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_50);
    }
    local_58 = piVar6;
    FUN_10007b8d0(&local_38,&local_58);
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar6);
      }
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar5);
      }
    }
  }
  FUN_10006b440(&local_60,&local_38);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_60);
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_29 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004aa225;
    }
    FUN_10006b5d0(&local_60,local_60);
  }
LAB_1004aa225:
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

