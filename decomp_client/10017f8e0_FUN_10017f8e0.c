
void FUN_10017f8e0(QRectF *param_1,QString *param_2,char param_3)

{
  QRectF *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  Data *pDVar8;
  Data *pDVar9;
  long lVar10;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  QString local_60;
  QString local_58;
  QString local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  pQVar1 = param_1 + 0x10;
  FUN_1001818c0(&local_48,param_2 + 3);
  if (*(Data **)(param_1 + 0x10) != local_48) {
    FUN_1001818c0(&local_40,&local_48);
    pDVar9 = *(Data **)pQVar1;
    *(Data **)pQVar1 = local_40;
    local_40 = pDVar9;
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10017f9cc;
      }
      iVar4 = *(int *)(pDVar9 + 0xc);
      if (iVar4 != *(int *)(pDVar9 + 8)) {
        lVar10 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar4 * -8;
        pDVar8 = pDVar9 + (long)iVar4 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_10017f9cc:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017fa6c;
    }
    iVar4 = *(int *)(local_48 + 0xc);
    if (iVar4 != *(int *)(local_48 + 8)) {
      lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = local_48 + (long)iVar4 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_10017fa6c:
  if (param_3 == '\0') goto LAB_10017fc12;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Host_Computer_10226e270);
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10017fb4f;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  else {
    uVar5 = FUN_100152280();
    lVar10 = FUN_1001548f0(uVar5,param_2);
    if (lVar10 != 0) {
      FUN_10018d830(&local_60,lVar10);
      QString::operator=(&local_50,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10017fb4f;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
  }
LAB_10017fb4f:
  QVariant::QVariant(&local_70,&local_50);
  QGraphicsItem::setData((int)param_1,(QVariant *)0x1);
  QVariant::~QVariant(&local_70);
  QVariant::QVariant(&local_80,param_2);
  QGraphicsItem::setData((int)param_1,(QVariant *)0x0);
  QVariant::~QVariant(&local_80);
  FUN_1001a2350(&local_88,&local_50);
  QGraphicsItem::setToolTip((QString *)param_1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017fbe2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10017fbe2:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017fc12;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10017fc12:
  local_98 = (double)((*(int *)&param_2[2].field0_0x0 + 1) - *(int *)&param_2[1].field0_0x0);
  local_90 = (double)((*(int *)((long)&param_2[2].field0_0x0 + 4) + 1) -
                     *(int *)((long)&param_2[1].field0_0x0 + 4));
  local_a8 = 0;
  uStack_a0 = 0;
  QGraphicsRectItem::setRect(param_1);
  local_b8 = (double)*(int *)&param_2[1].field0_0x0;
  local_b0 = (double)*(int *)((long)&param_2[1].field0_0x0 + 4);
  QGraphicsItem::setPos((QPointF *)param_1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1001818c0(&local_d8,pQVar1);
  iVar4 = *(int *)(local_d8 + 8);
  lVar10 = (long)iVar4;
  local_d0 = local_d8 + lVar10 * 8 + 0x10;
  iVar6 = *(int *)(local_d8 + 0xc);
  local_c8 = local_d8 + (long)iVar6 * 8 + 0x10;
  if (iVar4 != iVar6) {
    lVar7 = (long)iVar6 * 8 + lVar10 * -8;
    pDVar9 = local_d8 + lVar10 * 8 + 0x18;
    do {
      local_d0 = pDVar9;
      iVar2 = **(int **)(local_d0 + -8);
      iVar3 = (*(int **)(local_d0 + -8))[1];
      if (iVar2 < *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x18) = iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x1c)) {
        *(int *)(param_1 + 0x1c) = iVar3;
      }
      lVar7 = lVar7 + -8;
      pDVar9 = local_d0 + 8;
    } while (lVar7 != 0);
  }
  local_c0 = 1;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return;
      }
      iVar4 = *(int *)(local_d8 + 8);
      iVar6 = *(int *)(local_d8 + 0xc);
      local_31 = 0;
    }
    if (iVar6 != iVar4) {
      lVar10 = (long)iVar4 * 8 + (long)iVar6 * -8;
      pDVar9 = local_d8 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_d8);
  }
  return;
}

