
void FUN_1007d1d80(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  QVariant local_f0;
  QArrayData *local_e0;
  Data_conflict local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  Data_conflict local_b0;
  QString local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  uint local_88;
  QString local_80;
  QString local_78;
  QString local_70 [2];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2/",6);
  FUN_1007d2760(&local_58);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  local_60 = (QArrayData *)QString::fromAscii_helper("HID Host Hook",0xd);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1e2c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007d1e2c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1e5c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007d1e5c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1e8c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007d1e8c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1ebc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007d1ebc:
  FUN_100a04400(&local_78);
  FUN_1007caa20(&local_80);
  QSettings::QSettings((QSettings *)local_70,&local_78,&local_80,(QObject *)0x0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1f11;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007d1f11:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d1f41;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1007d1f41:
  local_a0 = (int *)*param_2;
  if (*local_a0 != -1) {
    if (*local_a0 == 0) {
      QListData::detach((int)&local_a0);
      iVar6 = local_a0[2];
      if (iVar6 != local_a0[3]) {
        puVar4 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar5 = local_a0 + (long)iVar6 * 2 + 4;
        lVar2 = (long)local_a0[3] * 8 + (long)iVar6 * -8;
        do {
          piVar1 = (int *)*puVar4;
          *(int **)piVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          puVar4 = puVar4 + 1;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
    }
    else {
      LOCK();
      *local_a0 = *local_a0 + 1;
      local_31 = *local_a0 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)local_a0[2] * 2 + 4;
  local_90 = local_a0 + (long)local_a0[3] * 2 + 4;
  local_88 = 1;
  if (local_a0[2] != local_a0[3]) {
    iVar6 = 0;
    do {
      local_a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_98;
      if (1 < *(int *)local_a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_88 != 0) {
        if (iVar6 == 0) {
          local_e0 = (QArrayData *)QString::fromAscii_helper("total",5);
          local_d8.field15 = (QObject *)local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          QString::append((QString *)&local_d8);
          QVariant::QVariant(&local_f0,&local_a8);
          QSettings::setValue(local_70,(QVariant *)&local_d8);
          QVariant::~QVariant(&local_f0);
          if (*(int *)local_d8.field15 != -1) {
            if (*(int *)local_d8.field15 != 0) {
              LOCK();
              *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
              local_31 = *(int *)local_d8.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d2247;
            }
            QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
          }
LAB_1007d2247:
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d2280;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
        }
        else {
          local_c0 = (QArrayData *)QString::fromAscii_helper("last%1",6);
          QString::arg(&local_b8,&local_c0,(long)(iVar6 + -1),0,10,0x20);
          local_b0.field15 = (QObject *)local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          QString::append((QString *)&local_b0);
          QVariant::QVariant(&local_d0,&local_a8);
          QSettings::setValue(local_70,(QVariant *)&local_b0);
          QVariant::~QVariant(&local_d0);
          if (*(int *)local_b0.field15 != -1) {
            if (*(int *)local_b0.field15 != 0) {
              LOCK();
              *(int *)local_b0.field15 = *(int *)local_b0.field15 + -1;
              local_31 = *(int *)local_b0.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d211e;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field15,2,8);
          }
LAB_1007d211e:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d2154;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_1007d2154:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d2280;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
        }
LAB_1007d2280:
        iVar6 = iVar6 + 1;
        local_88 = 0;
      }
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d22c0;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1007d22c0:
      local_98 = local_98 + 2;
      uVar3 = local_88 ^ 1;
      bVar7 = local_88 != 1;
      local_88 = uVar3;
    } while ((bVar7) && (local_98 != local_90));
  }
  FUN_100039a80(&local_a0);
  QSettings::~QSettings((QSettings *)local_70);
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

