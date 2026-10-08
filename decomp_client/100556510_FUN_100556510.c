
void FUN_100556510(long param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  Data *pDVar8;
  long lVar9;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Connection local_b8 [8];
  QArrayData *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78;
  undefined8 local_70;
  QVariant local_58 [2];
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  cVar2 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    return;
  }
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_29 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10055658a;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_10055658a:
  uVar6 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) == uVar6) goto LAB_1005568b1;
  if (1 < *(uint *)local_38) {
    FUN_100534020(&local_38,*(uint *)(local_38 + 4));
    uVar6 = *(uint *)(local_38 + 8);
  }
  pvVar3 = (void *)FUN_100552190(param_1 + 0x20,
                                 *(undefined8 *)(local_38 + (long)(int)uVar6 * 8 + 0x10));
  if ((pvVar3 == (void *)0x0) || (uVar4 = FUN_100714bb0(pvVar3), (uVar4 & 8) != 0))
  goto LAB_1005568b1;
  local_80 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(&local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10055665a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10055665a:
  FUN_100714ea0(&local_b0,param_1 + 0x68,param_1 + 0x58);
  FUN_100714f80(local_a8,param_1 + 0x60,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005566be;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005566be:
  plVar5 = operator_new(0x68);
  FUN_100586e30(plVar5,pvVar3,local_a0);
  QWidget::setAttribute(plVar5,0x37,1);
  cVar2 = FUN_10019cd90(&local_78);
  if (cVar2 != '\0') {
    uVar7 = 0;
    if ((local_78 != (int *)0x0) && (uVar7 = 0, local_78[1] != 0)) {
      uVar7 = local_70;
    }
    FUN_100a1c770(&local_c8,&local_78);
    QString::toLatin1();
    if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f)
      ;
    }
    QObject::connect(local_b8,plVar5,"2finished(int)",uVar7,local_c0 + *(long *)(local_c0 + 0x10),0)
    ;
    QMetaObject::Connection::~Connection(local_b8);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005567d5;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
LAB_1005567d5:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10055680b;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
  }
LAB_10055680b:
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
  if (DAT_102274244 == 0) {
    DAT_102274244 = FUN_100559f60("CRemapInfo",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_d8,DAT_102274244,pvVar3,0);
  QObject::setProperty((char *)plVar5,(QVariant *)"RelatedItem");
  QVariant::~QVariant(&local_d8);
  FUN_1000fec30(local_a8);
  QVariant::~QVariant(local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_29 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
LAB_1005568b1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar9 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

