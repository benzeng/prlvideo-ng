
void FUN_10056b6b0(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  QVariant local_170;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  int *local_148 [4];
  QVariant local_128 [2];
  QArrayData *local_110;
  QArrayData *local_108;
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  int *local_e8;
  undefined8 local_e0;
  QVariant local_c8 [2];
  Connection local_b0 [8];
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  undefined1 local_58 [8];
  QKeySequence local_50 [8];
  int *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar3 = FUN_1005a5f40(uVar7);
  if (cVar3 != '\0') {
    return;
  }
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056b73d;
    }
    FUN_100533ef0(&local_48,local_48);
  }
LAB_10056b73d:
  uVar4 = *(uint *)(local_40 + 8);
  if (*(uint *)(local_40 + 0xc) == uVar4) goto LAB_10056bb8d;
  if (1 < *(uint *)local_40) {
    FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    uVar4 = *(uint *)(local_40 + 8);
  }
  iVar1 = **(int **)(local_40 + (long)(int)uVar4 * 8 + 0x10);
  puVar2 = *(undefined1 **)
            (*(long *)(param_1 + 0x30) + 0x10 +
            ((long)*(int *)(*(long *)(param_1 + 0x30) + 8) + (long)iVar1) * 8);
  local_58[0] = *puVar2;
  QKeySequence::QKeySequence(local_50,(QKeySequence *)(puVar2 + 8));
  local_58[0] = *puVar2;
  plVar5 = operator_new(0x68);
  FUN_100586fa0(plVar5,local_58,*(undefined8 *)(param_1 + 0x10));
  QWidget::setAttribute(plVar5,0x37,1);
  local_98 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  cVar3 = FUN_10019cd90(local_90);
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_31 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056b89b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10056b89b:
  if (cVar3 != '\0') {
    local_f0 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
    local_f8 = 0x80000000;
    local_100.field7 = 0;
    FUN_100a1c600(&local_e8,param_1,&local_f0,&local_100);
    uVar7 = 0;
    if ((local_e8 != (int *)0x0) && (uVar7 = 0, local_e8[1] != 0)) {
      uVar7 = local_e0;
    }
    local_150 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
    local_158 = 0x80000000;
    local_160.field7 = 0;
    FUN_100a1c600(local_148,param_1,&local_150,&local_160);
    FUN_100a1c770(&local_110,local_148);
    QString::toLatin1();
    if ((1 < *(uint *)local_108) || (*(long *)(local_108 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_108,*(uint *)(local_108 + 4) + 1,*(uint *)(local_108 + 8) >> 0x1f);
    }
    QObject::connect(local_b0,plVar5,"2finished(int)",uVar7,local_108 + *(long *)(local_108 + 0x10),
                     0);
    QMetaObject::Connection::~Connection(local_b0);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056ba15;
      }
      QArrayData::deallocate(local_108,1,8);
    }
LAB_10056ba15:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056ba4b;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10056ba4b:
    QVariant::~QVariant(local_128);
    if (local_148[0] != (int *)0x0) {
      LOCK();
      *local_148[0] = *local_148[0] + -1;
      local_31 = *local_148[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_148[0] != (int *)0x0)) {
        operator_delete(local_148[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_160);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056bac4;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_10056bac4:
    QVariant::~QVariant(local_c8);
    if (local_e8 != (int *)0x0) {
      LOCK();
      *local_e8 = *local_e8 + -1;
      local_31 = *local_e8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
        operator_delete(local_e8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_100);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056bb40;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_10056bb40:
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
  QVariant::QVariant(&local_170,iVar1);
  QObject::setProperty((char *)plVar5,(QVariant *)"KeyIndex");
  QVariant::~QVariant(&local_170);
  QKeySequence::~QKeySequence(local_50);
LAB_10056bb8d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

