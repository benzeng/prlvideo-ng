
void FUN_1004c0560(long param_1)

{
  QObject *pQVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  int *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  QObject *local_38;
  int *local_30;
  undefined1 local_21;
  
  local_30 = (int *)PTR_shared_null_1021e15e8;
  uVar3 = FUN_10044e660();
  cVar2 = FUN_1003bf6c0(uVar3);
  if (cVar2 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x30);
    piVar4 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_40 = piVar4;
    local_38 = pQVar1;
    FUN_10007b8d0(&local_30);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar4);
      }
    }
  }
  uVar3 = FUN_10044e660(param_1);
  cVar2 = FUN_1003bf6d0(uVar3);
  if (cVar2 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x38);
    piVar4 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_50 = piVar4;
    local_48 = pQVar1;
    FUN_10007b8d0(&local_30);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar4);
      }
    }
  }
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x20),false);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x58),false);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x70),false);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x88),false);
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70));
  FUN_10006b440(&local_58,&local_30);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_58);
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c06f0;
    }
    FUN_10006b5d0(&local_58,local_58);
  }
LAB_1004c06f0:
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_10006b5d0(&local_30,local_30);
  }
  return;
}

