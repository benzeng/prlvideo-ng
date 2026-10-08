
void FUN_1006a4980(QObject *param_1,QEvent *param_2,long param_3)

{
  short sVar1;
  int *piVar2;
  QObject *pQVar3;
  char cVar4;
  long lVar5;
  QEvent *pQVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  int *piVar9;
  QWindow *pQVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int *local_128;
  QObject *pQStack_120;
  QVariant local_110;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int **local_40;
  char *local_38;
  
  sVar1 = *(short *)(param_3 + 0x10);
  if (sVar1 == 0x67) {
    lVar5 = QApplication::activePopupWidget();
    if (lVar5 != 0) {
      sVar1 = *(short *)(param_3 + 0x10);
      goto LAB_1006a49b6;
    }
  }
  else {
LAB_1006a49b6:
    if (sVar1 != 0x68) goto LAB_1006a4de9;
  }
  pQVar10 = (QWindow *)0x0;
  if ((param_2 != (QEvent *)0x0) &&
     (pQVar10 = (QWindow *)0x0, (*(byte *)(*(long *)(param_2 + 8) + 0x20) & 0x40) != 0)) {
    pQVar10 = (QWindow *)param_2;
  }
  pQVar6 = (QEvent *)QtPrivate::getWidget(pQVar10);
  if ((((pQVar6 == (QEvent *)0x0) &&
       ((param_2 == (QEvent *)0x0 ||
        (pQVar6 = param_2, (*(byte *)(*(long *)(param_2 + 8) + 0x20) & 1) == 0)))) ||
      ((*(byte *)(*(long *)(pQVar6 + 0x28) + 0xc) & 1) == 0)) ||
     ((*(byte *)(*(long *)(pQVar6 + 0x28) + 9) & 0x80) == 0)) goto LAB_1006a4de9;
  QObject::property((char *)&local_f8);
  QVariant::toString();
  QVariant::~QVariant(&local_f8);
  QObject::property((char *)&local_110);
  QVariant::toString();
  QVariant::~QVariant(&local_110);
  local_128 = (int *)0x0;
  pQStack_120 = (QObject *)0x0;
  if (*(int *)(local_e8 + 4) != 0) {
    if (*(int *)(local_100 + 4) == 0) {
      (*(code *)**(undefined8 **)param_2)(param_2);
      uVar7 = QMetaObject::className();
      FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid object properties. Obj=%s",uVar7);
    }
    uVar7 = FUN_100152280();
    pQVar8 = (QObject *)FUN_100154930(uVar7,&local_100,&local_e8);
    piVar9 = (int *)0x0;
    if (pQVar8 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
    }
    piVar2 = local_128;
    pQVar3 = pQStack_120;
    if (local_128 != piVar9) {
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        local_d9 = *piVar9 != 0;
        UNLOCK();
      }
      piVar2 = piVar9;
      pQVar3 = pQVar8;
      if (local_128 != (int *)0x0) {
        LOCK();
        *local_128 = *local_128 + -1;
        local_d9 = *local_128 != 0;
        UNLOCK();
        if ((!(bool)local_d9) && (local_128 != (int *)0x0)) {
          operator_delete(local_128);
        }
      }
    }
    pQStack_120 = pQVar3;
    local_128 = piVar2;
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_d9 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_d9) {
        operator_delete(piVar9);
      }
    }
  }
  if (local_128 != (int *)0x0) {
    if ((local_128[1] != 0) && (pQStack_120 != (QObject *)0x0)) {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_40 = &local_128;
      local_38 = "QPointer<QObject>";
      uVar27 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar24 = 0;
      uVar23 = 0;
      uVar22 = 0;
      uVar21 = 0;
      uVar20 = 0;
      uVar19 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar7 = 0;
      cVar4 = QMetaObject::invokeMethod(param_1,"queuedUpdate",2,0,0);
      if (cVar4 == '\0') {
        FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invokeSucceeded",
                      "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x1a6,"eventFilter",
                      uVar7,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,
                      uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27);
      }
    }
    if (local_128 != (int *)0x0) {
      LOCK();
      *local_128 = *local_128 + -1;
      local_d9 = *local_128 != 0;
      UNLOCK();
      if ((!(bool)local_d9) && (local_128 != (int *)0x0)) {
        operator_delete(local_128);
      }
    }
  }
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_d9 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_1006a4dad;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1006a4dad:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_d9 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_1006a4de9;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1006a4de9:
  QObject::eventFilter(param_1,param_2);
  return;
}

