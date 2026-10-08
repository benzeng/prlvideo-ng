
void FUN_100497c10(long param_1)

{
  QWidget *pQVar1;
  QObject *pQVar2;
  QString *pQVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  int *local_100;
  long *local_f8;
  long *local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  int *local_d8;
  QObject *local_d0;
  int *local_c8;
  QObject *local_c0;
  int *local_b8;
  QObject *local_b0;
  int *local_a8;
  QObject *local_a0;
  int *local_98;
  QObject *local_90;
  int *local_88;
  QObject *local_80;
  int *local_78;
  QObject *local_70;
  int *local_68;
  QObject *local_60;
  int *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  uVar7 = FUN_10044e660();
  cVar4 = FUN_1003bf1b0(uVar7);
  if (cVar4 == '\0') {
    pQVar1 = *(QWidget **)(*(long *)(param_1 + 0x38) + 8);
    QTabWidget::indexOf(pQVar1);
    QTabWidget::removeTab((int)pQVar1);
  }
  uVar7 = FUN_10044e660(param_1);
  cVar4 = FUN_1003c05b0(uVar7);
  if (cVar4 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x130);
    piVar8 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_50 = piVar8;
    local_48 = pQVar2;
    FUN_10007b8d0(&local_40,&local_50);
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0);
  FUN_10006b440(&local_58,&local_40);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(uVar7,&local_58);
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100497d15;
    }
    FUN_10006b5d0(&local_58,local_58);
  }
LAB_100497d15:
  FUN_10007b5a0(&local_40);
  uVar7 = FUN_10044e660(param_1);
  cVar4 = FUN_1003bef90(uVar7);
  if (cVar4 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x98);
    piVar8 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_68 = piVar8;
    local_60 = pQVar2;
    FUN_10007b8d0(&local_40,&local_68);
    local_70 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x38);
    piVar9 = (int *)0x0;
    if (local_70 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_70);
    }
    local_78 = piVar9;
    FUN_10007b8d0(&local_40,&local_78);
    local_80 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x30);
    piVar10 = (int *)0x0;
    if (local_80 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_80);
    }
    local_88 = piVar10;
    FUN_10007b8d0(&local_40,&local_88);
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
  uVar7 = FUN_10044e660(param_1);
  cVar4 = FUN_1003bf1f0(uVar7);
  if (cVar4 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x70);
    piVar8 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_98 = piVar8;
    local_90 = pQVar2;
    FUN_10007b8d0(&local_40,&local_98);
    local_a0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x90);
    piVar9 = (int *)0x0;
    if (local_a0 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_a0);
    }
    local_a8 = piVar9;
    FUN_10007b8d0(&local_40,&local_a8);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
  lVar11 = FUN_10044e580(param_1);
  if (lVar11 != 0) {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x58);
    iVar5 = FUN_10044b4d0(param_1);
    uVar7 = FUN_10044e580(param_1);
    iVar6 = FUN_10015aae0(uVar7);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar2,iVar5,iVar6);
  }
  uVar7 = FUN_10044e660(param_1);
  cVar4 = FUN_1003befe0(uVar7);
  if (cVar4 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x78);
    piVar8 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_b8 = piVar8;
    local_b0 = pQVar2;
    FUN_10007b8d0(&local_40,&local_b8);
    local_c0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x58);
    piVar9 = (int *)0x0;
    if (local_c0 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_c0);
    }
    local_c8 = piVar9;
    FUN_10007b8d0(&local_40,&local_c8);
    local_d0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x40);
    piVar10 = (int *)0x0;
    if (local_d0 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_d0);
    }
    local_d8 = piVar10;
    FUN_10007b8d0(&local_40,&local_d8);
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
  uVar7 = FUN_10044e580(param_1);
  uVar7 = FUN_10016f500(uVar7);
  cVar4 = FUN_10061c2b0(uVar7,0x10080);
  if (cVar4 != '\0') {
    pQVar3 = *(QString **)(*(long *)(param_1 + 0x38) + 0x90);
    QMetaObject::tr((char *)&local_e0,(char *)&PTR_PTR_102215700,0x1df7be4);
    QAbstractButton::setText(pQVar3);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004980cf;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1004980cf:
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x90);
    iVar5 = FUN_10044b4d0(param_1);
    uVar7 = FUN_10044e580(param_1);
    iVar6 = FUN_10015aae0(uVar7);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar2,iVar5,iVar6);
  }
  FUN_10006b440(&local_100,&local_40);
  local_f8 = (long *)(local_100 + (long)local_100[2] * 2 + 4);
  local_f0 = (long *)(local_100 + (long)local_100[3] * 2 + 4);
  if (local_100[2] != local_100[3]) {
    do {
      local_e8 = 1;
      lVar11 = *(long *)*local_f8;
      plVar12 = (long *)0x0;
      if ((lVar11 != 0) && (plVar12 = (long *)0x0, *(int *)(lVar11 + 4) != 0)) {
        plVar12 = (long *)((long *)*local_f8)[1];
      }
      (**(code **)(*plVar12 + 0x68))(plVar12,0);
      QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x28));
      local_f8 = local_f8 + 1;
    } while (local_f8 != local_f0);
  }
  local_e8 = 1;
  if (*local_100 != -1) {
    if (*local_100 != 0) {
      LOCK();
      *local_100 = *local_100 + -1;
      local_31 = *local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004981e5;
    }
    FUN_10006b5d0(&local_100,local_100);
  }
LAB_1004981e5:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
  return;
}

