
void FUN_10047f820(long param_1)

{
  QObject *pQVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  long *plVar7;
  bool bVar8;
  int *local_80;
  int *local_78;
  int *local_70;
  uint local_68;
  int *local_60;
  QObject *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  QObject *local_38;
  int *local_30;
  undefined1 local_21;
  
  local_30 = (int *)PTR_shared_null_1021e15e8;
  uVar4 = FUN_10044e660();
  cVar3 = FUN_1003bec60(uVar4);
  if (cVar3 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x60);
    piVar5 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_40 = piVar5;
    local_38 = pQVar1;
    FUN_10007b8d0(&local_30,&local_40);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar5);
      }
    }
  }
  uVar4 = FUN_10044e660(param_1);
  cVar3 = FUN_1003bedc0(uVar4);
  if (cVar3 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x40);
    piVar5 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_50 = piVar5;
    local_48 = pQVar1;
    FUN_10007b8d0(&local_30,&local_50);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar5);
      }
    }
  }
  uVar4 = FUN_10044e660(param_1);
  cVar3 = FUN_1003bed80(uVar4);
  if (cVar3 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x38);
    piVar5 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_60 = piVar5;
    local_58 = pQVar1;
    FUN_10007b8d0(&local_30,&local_60);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar5);
      }
    }
  }
  FUN_10006b440(&local_80,&local_30);
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  local_68 = 1;
  if (local_80[2] != local_80[3]) {
    do {
      piVar5 = (int *)**(undefined8 **)local_78;
      plVar2 = (long *)(*(undefined8 **)local_78)[1];
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_21 = *piVar5 != 0;
        UNLOCK();
      }
      if (local_68 != 0) {
        plVar7 = (long *)0x0;
        if ((piVar5 != (int *)0x0) && (plVar7 = (long *)0x0, piVar5[1] != 0)) {
          plVar7 = plVar2;
        }
        (**(code **)(*plVar7 + 0x68))(plVar7,0);
        QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
        local_68 = 0;
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_21 = *piVar5 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar5);
        }
      }
      local_78 = local_78 + 2;
      uVar6 = local_68 ^ 1;
      bVar8 = local_68 != 1;
      local_68 = uVar6;
    } while ((bVar8) && (local_78 != local_70));
  }
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_21 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047fa77;
    }
    FUN_10006b5d0(&local_80,local_80);
  }
LAB_10047fa77:
  uVar4 = FUN_10044e660(param_1);
  cVar3 = FUN_1003bee10(uVar4);
  if (cVar3 == '\0') {
    QWidget::hide();
    QWidget::hide();
    QWidget::hide();
    QWidget::hide();
    QWidget::hide();
  }
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

