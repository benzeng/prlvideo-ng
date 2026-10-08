
undefined8 *
FUN_1003c8860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  QVariant *pQVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  QVariant local_e8;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  _func_void_Node_ptr *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_40 = 0x80000000;
  local_48.field7 = 0;
  iVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar12 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar12 = (int)sVar7;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
  FUN_1003ae3b0(&local_78,param_4,&local_80);
  FUN_1000626e0(&local_70,&local_78);
  local_68 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach((int)&local_68);
      iVar12 = local_68[2];
      if (iVar12 != local_68[3]) {
        local_70 = local_70 + (long)local_70[2] * 2 + 4;
        piVar11 = local_68 + (long)iVar12 * 2 + 4;
        lVar8 = (long)local_68[3] * 8 + (long)iVar12 * -8;
        do {
          piVar2 = *(int **)local_70;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_70 = local_70 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  FUN_100036370(&local_70);
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c89c8;
    }
    QHashData::free_helper(local_78);
  }
LAB_1003c89c8:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c89f8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003c89f8:
  if (local_50 != 0) {
    do {
      if (local_60 == local_58) break;
      local_88 = *(QArrayData **)local_60;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      if (local_50 != 0) {
        local_90 = (QArrayData *)QString::fromAscii_helper("Enabled",7);
        cVar4 = QString::endsWith(&local_88,&local_90,1);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c8ab2;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1003c8ab2:
        if (cVar4 == '\0') {
          local_c0 = (QArrayData *)QString::fromAscii_helper("Schema",6);
          cVar4 = QString::endsWith(&local_88,&local_c0,1);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c8c05;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1003c8c05:
          if (cVar4 != '\0') {
            QComboBox::currentIndex();
            QComboBox::itemData((int)&local_d0,iVar5);
            iVar12 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar7 = _strlen(puVar3);
              iVar12 = (int)sVar7;
            }
            local_d8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
            uVar9 = FUN_1003ae480(param_1,&local_d8);
            pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_88);
            lVar8 = QVariant::toLongLong((bool *)&local_d0);
            if (lVar8 < 1) {
              QVariant::QVariant(&local_e8,1);
            }
            else {
              QVariant::QVariant(&local_e8,&local_d0);
            }
            QVariant::operator=(pQVar10,&local_e8);
            QVariant::~QVariant(&local_e8);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c8ceb;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_1003c8ceb:
            QVariant::~QVariant(&local_d0);
          }
        }
        else {
          iVar12 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar7 = _strlen(puVar3);
            iVar12 = (int)sVar7;
          }
          local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
          uVar9 = FUN_1003ae480(param_1,&local_98);
          pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_88);
          QComboBox::currentIndex();
          QComboBox::itemData((int)&local_b8,iVar5);
          lVar8 = QVariant::toLongLong((bool *)&local_b8);
          QVariant::QVariant(&local_a8,lVar8 != 0);
          QVariant::operator=(pQVar10,&local_a8);
          QVariant::~QVariant(&local_a8);
          QVariant::~QVariant(&local_b8);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c8cf7;
            }
            QArrayData::deallocate(local_98,2,8);
          }
        }
LAB_1003c8cf7:
        local_50 = 0;
      }
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c8d2e;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003c8d2e:
      local_60 = local_60 + 2;
      uVar6 = local_50 ^ 1;
      bVar13 = local_50 != 1;
      local_50 = uVar6;
    } while (bVar13);
  }
  FUN_100036370(&local_68);
  QVariant::~QVariant((QVariant *)&local_48);
  return param_1;
}

