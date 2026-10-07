
undefined1 FUN_10055de80(QString *param_1,uint param_2,long *param_3)

{
  QArrayData *pQVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_ac;
  undefined1 local_a8 [64];
  long local_68 [2];
  long local_58 [2];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = param_1->field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xa42e7f);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055df07;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10055df07:
  QFile::QFile((QFile *)local_58,param_1);
  QFile::QFile((QFile *)local_68,&local_48);
  cVar2 = QFile::open(local_58,1);
  pvVar12 = (void *)0x0;
  if (cVar2 == '\0') goto LAB_10055e3cc;
  cVar3 = QFile::open(local_68,0xb);
  pvVar12 = (void *)0x0;
  if (cVar3 != '\0') {
    pvVar7 = operator_new__(0x100000,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar12 = (void *)0x0;
    if (pvVar7 == (void *)0x0) {
LAB_10055e3a9:
      (**(code **)(local_68[0] + 0x70))(local_68);
    }
    else {
      uVar5 = FUN_1000d6180(local_58);
      cVar4 = FUN_1000d6220(local_58,local_a8);
      pvVar12 = pvVar7;
      if ((cVar4 == '\0') || (cVar4 = FUN_1000d6380(local_68,local_a8), cVar4 == '\0'))
      goto LAB_10055e3a9;
      uVar11 = 0;
      bVar9 = false;
      uVar13 = 0x100000;
      do {
        local_ac = uVar13;
        uVar6 = FUN_1000d63c0(local_58,uVar11,pvVar7,&local_ac);
        if (uVar11 == uVar6) {
LAB_10055e07d:
          pvVar12 = pvVar7;
          if (param_2 == uVar11) {
            bVar9 = true;
            if (*(int *)(*param_3 + 4) == 0) goto LAB_10055e1bd;
            QString::toUtf8();
            if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f);
            }
            pQVar1 = local_b8;
            lVar8 = *(long *)(local_b8 + 0x10);
            QString::toUtf8();
            cVar4 = FUN_1000d6450(local_68,param_2,pQVar1 + lVar8,*(int *)(local_c0 + 4) + 1);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10055e150;
              }
              QArrayData::deallocate(local_c0,1,8);
            }
LAB_10055e150:
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto joined_r0x00010055e1b7;
              }
              QArrayData::deallocate(local_b8,1,8);
            }
          }
          else {
            cVar4 = FUN_1000d6450(local_68,uVar11,pvVar7,local_ac);
          }
joined_r0x00010055e1b7:
          if (cVar4 == '\0') goto LAB_10055e397;
        }
        else {
          pvVar12 = pvVar7;
          if (uVar13 < local_ac) {
            if (pvVar7 != (void *)0x0) {
              operator_delete__(pvVar7);
            }
            pvVar7 = operator_new__((ulong)local_ac,(nothrow_t *)PTR_nothrow_100ba21c8);
            pvVar12 = (void *)0x0;
            if ((pvVar7 != (void *)0x0) &&
               (uVar6 = FUN_1000d63c0(local_58,uVar11,pvVar7,&local_ac), pvVar12 = pvVar7,
               uVar13 = local_ac, uVar11 == uVar6)) goto LAB_10055e07d;
            goto LAB_10055e397;
          }
        }
LAB_10055e1bd:
        uVar11 = uVar11 + 1;
        pvVar7 = pvVar12;
      } while (uVar11 < 0x14);
      if ((bVar9) || (*(int *)(*param_3 + 4) == 0)) {
LAB_10055e2f8:
        cVar4 = (**(code **)(local_58[0] + 0x88))(local_58,uVar5);
        if (cVar4 != '\0') {
          uVar5 = FUN_1000d6180(local_68);
          cVar4 = (**(code **)(local_68[0] + 0x88))(local_68,uVar5);
          if (cVar4 != '\0') {
            do {
              cVar4 = (**(code **)(local_58[0] + 0x90))(local_58);
              if (cVar4 != '\0') {
                (**(code **)(local_68[0] + 0x70))(local_68);
                (**(code **)(local_58[0] + 0x70))(local_58);
                QFile::remove(param_1);
                uVar10 = 1;
                QFile::rename(&local_48,param_1);
                goto LAB_10055e3d7;
              }
              QIODevice::read((char *)local_58,(longlong)pvVar12);
              lVar8 = QIODevice::write((char *)local_68,(longlong)pvVar12);
            } while (lVar8 != -1);
          }
        }
      }
      else {
        QString::toUtf8();
        if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
        }
        pQVar1 = local_c8;
        lVar8 = *(long *)(local_c8 + 0x10);
        QString::toUtf8();
        cVar4 = FUN_1000d6450(local_68,param_2,pQVar1 + lVar8,*(int *)(local_d0 + 4) + 1);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10055e2ab;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
LAB_10055e2ab:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10055e2ef;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
LAB_10055e2ef:
        if (cVar4 != '\0') goto LAB_10055e2f8;
      }
LAB_10055e397:
      if (cVar3 != '\0') goto LAB_10055e3a9;
    }
    if (cVar2 == '\0') goto LAB_10055e3cc;
  }
  (**(code **)(local_58[0] + 0x70))(local_58);
LAB_10055e3cc:
  QFile::remove(&local_48);
  uVar10 = 0;
LAB_10055e3d7:
  if (pvVar12 != (void *)0x0) {
    operator_delete__(pvVar12);
  }
  QFile::~QFile((QFile *)local_68);
  QFile::~QFile((QFile *)local_58);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar10;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar10;
}

