
void FUN_1001d5910(QObject *param_1,QObject *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  int *local_110;
  QObject *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
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
  
  if (*(ushort *)(param_3 + 0x10) == 0xf) {
    if ((param_2 != (QObject *)0x0) && ((*(byte *)(*(long *)(param_2 + 8) + 0x20) & 1) != 0)) {
      if (DAT_102310a08 == (void *)0x0) {
        pvVar8 = operator_new(0x220);
        FUN_1007cc3f0(pvVar8);
        DAT_102273890 = 1;
        DAT_102310a08 = pvVar8;
      }
      pvVar8 = DAT_102310a08;
      local_110 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
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
      local_40 = &local_110;
      local_38 = "QPointer<QWidget>";
      local_108 = param_2;
      QMetaObject::invokeMethod(pvVar8,"widgetCreated",2,0,0);
      if (local_110 != (int *)0x0) {
        LOCK();
        *local_110 = *local_110 + -1;
        local_d9 = *local_110 != 0;
        UNLOCK();
        if ((!(bool)local_d9) && (local_110 != (int *)0x0)) {
          operator_delete(local_110);
        }
      }
    }
    goto LAB_1001d5e06;
  }
  if (1 < *(ushort *)(param_3 + 0x10) - 0x18) goto LAB_1001d5e06;
  lVar4 = QApplication::activeWindow();
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(lVar1 + 0x20);
  lVar9 = 0;
  if ((lVar2 != 0) && (lVar9 = 0, *(int *)(lVar2 + 4) != 0)) {
    lVar9 = *(long *)(lVar1 + 0x28);
  }
  if (lVar9 == lVar4) goto LAB_1001d5e06;
  lVar9 = 0;
  if ((lVar2 != 0) && (lVar9 = 0, *(int *)(lVar2 + 4) != 0)) {
    lVar9 = *(long *)(lVar1 + 0x28);
  }
  pQVar5 = (QObject *)QApplication::activeWindow();
  piVar6 = (int *)0x0;
  if (pQVar5 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  }
  piVar7 = *(int **)(lVar1 + 0x20);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_d9 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(lVar1 + 0x20);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_d9 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_d9) && (*(void **)(lVar1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x20));
      }
    }
    *(int **)(lVar1 + 0x20) = piVar6;
    *(QObject **)(lVar1 + 0x28) = pQVar5;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_d9 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_d9) {
      operator_delete(piVar6);
    }
  }
  if (3 < DAT_10230ffd0) {
    if (lVar9 == 0) {
      pcVar12 = "null";
    }
    else {
      QWidget::windowTitle();
      QString::toLocal8Bit();
      pcVar12 = (char *)(local_e8 + *(long *)(local_e8 + 0x10));
    }
    pcVar11 = "null";
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) {
      bVar3 = false;
    }
    else if (*(long *)(*(long *)(param_1 + 0x28) + 0x28) == 0) {
      bVar3 = false;
    }
    else {
      QWidget::windowTitle();
      QString::toLocal8Bit();
      pcVar11 = (char *)(local_f8 + *(long *)(local_f8 + 0x10));
      bVar3 = true;
    }
    FUN_100df99c0("","prl_client_app",4,"Active window changed from %s to %s",pcVar12,pcVar11);
    if (bVar3) {
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_d9 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1001d5d19;
        }
        QArrayData::deallocate(local_f8,1,8);
      }
LAB_1001d5d19:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_d9 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1001d5d55;
        }
        QArrayData::deallocate(local_100,2,8);
      }
    }
LAB_1001d5d55:
    if (lVar9 != 0) {
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_d9 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1001d5d96;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
LAB_1001d5d96:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_d9 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1001d5dd2;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
    }
  }
LAB_1001d5dd2:
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  uVar10 = 0;
  if ((lVar1 != 0) && (uVar10 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  }
  FUN_10080a2f0(param_1,uVar10,lVar9);
LAB_1001d5e06:
  QObject::eventFilter(param_1,(QEvent *)param_2);
  return;
}

