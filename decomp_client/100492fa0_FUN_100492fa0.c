
void FUN_100492fa0(long param_1)

{
  QFont *pQVar1;
  QObject *pQVar2;
  QString *pQVar3;
  long *plVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  QArrayData *local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  int *local_d0;
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
  QFont local_50 [16];
  QFont local_40 [23];
  undefined1 local_29;
  
  pQVar1 = *(QFont **)(*(long *)(param_1 + 0x38) + 0x60);
  FontUtils::getSmallFont(SUB81(local_40,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_40);
  pQVar1 = *(QFont **)(*(long *)(param_1 + 0x38) + 0x78);
  FontUtils::getSmallFont(SUB81(local_50,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_50);
  local_58 = (int *)PTR_shared_null_1021e15e8;
  uVar8 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bf470(uVar8);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x40);
    piVar9 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_68 = piVar9;
    local_60 = pQVar2;
    FUN_10007b8d0(&local_58,&local_68);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar9);
      }
    }
  }
  uVar8 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bf4b0(uVar8);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x48);
    piVar9 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_78 = piVar9;
    local_70 = pQVar2;
    FUN_10007b8d0(&local_58,&local_78);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar9);
      }
    }
  }
  uVar8 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bf4f0(uVar8);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x18);
    piVar9 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_88 = piVar9;
    local_80 = pQVar2;
    FUN_10007b8d0(&local_58,&local_88);
    local_90 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x20);
    piVar10 = (int *)0x0;
    if (local_90 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_90);
    }
    local_98 = piVar10;
    FUN_10007b8d0(&local_58,&local_98);
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_29 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar9);
      }
    }
  }
  uVar8 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bf500(uVar8);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x28);
    piVar9 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_a8 = piVar9;
    local_a0 = pQVar2;
    FUN_10007b8d0(&local_58,&local_a8);
    local_b0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x30);
    piVar10 = (int *)0x0;
    if (local_b0 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_b0);
    }
    local_b8 = piVar10;
    FUN_10007b8d0(&local_58,&local_b8);
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_29 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar9);
      }
    }
  }
  uVar8 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bf530(uVar8);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x50);
    piVar9 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_c8 = piVar9;
    local_c0 = pQVar2;
    FUN_10007b8d0(&local_58,&local_c8);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar9);
      }
    }
  }
  FUN_10006b440(&local_d0,&local_58);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_d0);
  if (*local_d0 != -1) {
    if (*local_d0 != 0) {
      LOCK();
      *local_d0 = *local_d0 + -1;
      local_29 = *local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049330c;
    }
    FUN_10006b5d0(&local_d0,local_d0);
  }
LAB_10049330c:
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x38) + 0x60);
  FUN_1001c7700(&local_d8,PTR_s_To_enable__you_must_enable_Locat_10226ee60);
  QLabel::setText(pQVar3);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049336f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10049336f:
  uVar8 = FUN_10044e560(param_1);
  local_f0 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.IsolatedVm",0x19);
  FUN_1003e1800(&local_e8,uVar8,&local_f0,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004933fa;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004933fa:
  cVar5 = MacUtils::isLocationServiceEnabled();
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
  uVar8 = FUN_10044e560(param_1);
  local_108 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.IsolatedVm",0x19);
  FUN_1003e1800(&local_100,uVar8,&local_108,0);
  cVar6 = QVariant::toBool();
  if (cVar5 == '\0' && cVar6 == '\0') {
    uVar8 = FUN_10044e660(param_1);
    uVar7 = FUN_1003bf530(uVar8);
  }
  else {
    uVar7 = 0;
  }
  QVariant::~QVariant(&local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004934cb;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004934cb:
  plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0x60);
  (**(code **)(*plVar4 + 0x68))(plVar4,uVar7);
  plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0x78);
  (**(code **)(*plVar4 + 0x68))(plVar4,uVar7);
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_10006b5d0(&local_58,local_58);
  }
  return;
}

