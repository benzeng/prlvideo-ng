
void FUN_100635ed0(QObject *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  QStandardItemModel *this;
  long lVar4;
  QStandardItem *this_00;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  int local_f4;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QFont local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100637050(*(undefined8 *)(param_1 + 0x60),param_1);
  QWidget::setAttribute(param_1,0x37,1);
  this = operator_new(0x10);
  QStandardItemModel::QStandardItemModel(this,param_1);
  local_60 = *(Data **)(param_1 + 0x70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = *(int *)(local_60 + 8);
      if (iVar1 != *(int *)(local_60 + 0xc)) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 0x70) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x70) + 8) * 8);
        pDVar8 = local_60 + (long)iVar1 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar7;
          *(int **)pDVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar8 = pDVar8 + 8;
          puVar7 = puVar7 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  pDVar8 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_58 = pDVar8;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    local_f4 = 0;
    do {
      local_48 = 1;
      local_58 = pDVar8;
      this_00 = operator_new(0x10);
      QString::left((int)&local_70);
      local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
      if (*(int *)(local_70 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
        QString::append(&local_68);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100636088;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_100636088:
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      if (*(int *)(local_68.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
        QString::append(&local_68);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063612b;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_10063612b:
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      if (*(int *)(local_68.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
        QString::append(&local_68);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006361ce;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_1006361ce:
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QString::append(&local_68,0x25cf);
      QStandardItem::QStandardItem(this_00,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10063625b;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10063625b:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100636292;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100636292:
      QStandardItem::setEditable(SUB81(this_00,0));
      pcVar3 = *(code **)(*(long *)this_00 + 0x18);
      QVariant::QVariant(&local_80,(QString *)pDVar8);
      (*pcVar3)(this_00,&local_80,0x102);
      QVariant::~QVariant(&local_80);
      QStandardItemModel::setItem((int)this,local_f4,(QStandardItem *)0x0);
      local_f4 = local_f4 + 1;
      pDVar8 = local_58 + 8;
      local_58 = pDVar8;
    } while (pDVar8 != local_50);
  }
  pDVar8 = local_60;
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006363a1;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar4 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_100636380:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_100636380;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1006363a1:
  (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x18) + 0x1c0))
            (*(long **)(*(long *)(param_1 + 0x60) + 0x18),this);
  QAbstractItemView::setSelectionMode(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18),1);
  if (*(int *)(*(long *)(param_1 + 0x70) + 0xc) - *(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    plVar5 = (long *)QAbstractItemView::selectionModel();
    pcVar3 = *(code **)(*plVar5 + 0x68);
    plVar6 = (long *)QAbstractItemView::model();
    local_b0 = 0xffffffff;
    local_ac = 0xffffffff;
    local_a0 = 0;
    local_a8 = 0;
    (**(code **)(*plVar6 + 0x60))(local_98,plVar6,0,0,&local_b0);
    (*pcVar3)(plVar5,local_98,0x12);
    FUN_100636c60(param_1);
  }
  QFont::QFont(local_c0,(QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x18) + 0x28) +
                                 0x38));
  QFont::setPointSizeF(DAT_100e1efd8);
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x60) + 0x18));
  QMetaObject::tr((char *)&local_d0,(char *)&PTR_staticMetaObject_1022223e0,0x1e095b7);
  local_d8 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/about/legal/eula/",0x2a);
  QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636540;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100636540:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636576;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100636576:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x20));
  QWidget::setFixedWidth((int)param_1);
  QWidget::setFixedHeight((int)param_1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006365db;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1006365db:
  QFont::~QFont(local_c0);
  return;
}

