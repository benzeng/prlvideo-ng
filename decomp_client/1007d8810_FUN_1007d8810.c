
QString * FUN_1007d8810(QString *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  uint local_88;
  int *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100a04400(&local_58);
  FUN_1007caa20(&local_60);
  QSettings::QSettings((QSettings *)&local_50,&local_58,&local_60,(QObject *)0x0);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d888d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007d888d:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d88bd;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007d88bd:
  FUN_1007d2760(&local_78);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d8931;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007d8931:
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QSettings::beginGroup((QString *)&local_50);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d8993;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007d8993:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d89c3;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1007d89c3:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d89f3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007d89f3:
  QSettings::allKeys();
  local_a0 = local_80;
  if (*local_80 != -1) {
    if (*local_80 == 0) {
      QListData::detach((int)&local_a0);
      iVar1 = local_a0[2];
      if (iVar1 != local_a0[3]) {
        local_80 = local_80 + (long)local_80[2] * 2 + 4;
        piVar5 = local_a0 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_a0[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_80;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_80 = local_80 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)local_a0[2] * 2 + 4;
  local_90 = local_a0 + (long)local_a0[3] * 2 + 4;
  local_88 = 1;
  if (local_a0[2] != local_a0[3]) {
    do {
      local_a8 = *(QArrayData **)local_98;
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      if (local_88 != 0) {
        local_c8 = 0x80000000;
        local_d0.field7 = 0;
        QSettings::value((QString *)&local_c0,&local_50);
        QVariant::toString();
        QVariant::~QVariant(&local_c0);
        QVariant::~QVariant((QVariant *)&local_d0);
        local_e8 = (QArrayData *)QString::fromAscii_helper("%1 : %2\n",8);
        QString::arg(&local_e0,&local_e8,&local_a8,0,0x20);
        QString::arg(&local_d8,&local_e0,&local_b0,0,0x20);
        QString::append(param_1);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d8bed;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1007d8bed:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d8c23;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1007d8c23:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d8c59;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1007d8c59:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d8c8f;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1007d8c8f:
        local_88 = 0;
      }
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d8ccc;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1007d8ccc:
      local_98 = local_98 + 2;
      uVar4 = local_88 ^ 1;
      bVar6 = local_88 != 1;
      local_88 = uVar4;
    } while ((bVar6) && (local_98 != local_90));
  }
  FUN_100039a80(&local_a0);
  FUN_100039a80(&local_80);
  QSettings::~QSettings((QSettings *)&local_50);
  return param_1;
}

