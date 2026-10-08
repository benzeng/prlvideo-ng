
undefined8 *
FUN_1003cb5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  iVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar12 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar12 = (int)sVar7;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
  FUN_1003ae3b0(&local_68,param_4,&local_70);
  FUN_1000626e0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar12 = local_58[2];
      if (iVar12 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar11 = local_58 + (long)iVar12 * 2 + 4;
        lVar8 = (long)local_58[3] * 8 + (long)iVar12 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_60 = local_60 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100036370(&local_60);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cb758;
    }
    QHashData::free_helper(local_68);
  }
LAB_1003cb758:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cb788;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003cb788:
  if (local_40 != 0) {
    do {
      if (local_50 == local_48) break;
      local_78 = *(QArrayData **)local_50;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        local_80 = (QArrayData *)QString::fromAscii_helper("HostSharing.Enabled",0x13);
        cVar4 = QString::endsWith(&local_78,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003cb866;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003cb866:
        if (cVar4 == '\0') {
          local_a0 = (QArrayData *)QString::fromAscii_helper("HostSharing.ShareUserHomeDir",0x1c);
          cVar4 = QString::endsWith(&local_78,&local_a0,1);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cb995;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1003cb995:
          if (cVar4 == '\0') {
            local_c0 = (QArrayData *)QString::fromAscii_helper("HostSharing.ShareAllMacDisks",0x1c);
            cVar4 = QString::endsWith(&local_78,&local_c0,1);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003cbac1;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_1003cbac1:
            if (cVar4 != '\0') {
              iVar12 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar7 = _strlen(puVar3);
                iVar12 = (int)sVar7;
              }
              local_c8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
              uVar9 = FUN_1003ae480(param_1,&local_c8);
              pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_78);
              QComboBox::currentIndex();
              QComboBox::itemData((int)&local_d8,iVar5);
              QVariant::operator=(pQVar10,&local_d8);
              QVariant::~QVariant(&local_d8);
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003cbb80;
                }
                QArrayData::deallocate(local_c8,2,8);
              }
            }
          }
          else {
            iVar12 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar7 = _strlen(puVar3);
              iVar12 = (int)sVar7;
            }
            local_a8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
            uVar9 = FUN_1003ae480(param_1,&local_a8);
            pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_78);
            QComboBox::currentIndex();
            QComboBox::itemData((int)&local_b8,iVar5);
            QVariant::operator=(pQVar10,&local_b8);
            QVariant::~QVariant(&local_b8);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003cbb80;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
          }
        }
        else {
          iVar12 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar7 = _strlen(puVar3);
            iVar12 = (int)sVar7;
          }
          local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar12);
          uVar9 = FUN_1003ae480(param_1,&local_88);
          pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_78);
          QComboBox::currentIndex();
          QComboBox::itemData((int)&local_98,iVar5);
          QVariant::operator=(pQVar10,&local_98);
          QVariant::~QVariant(&local_98);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cbb80;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
LAB_1003cbb80:
        local_40 = 0;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003cbbb7;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003cbbb7:
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar13 = local_40 != 1;
      local_40 = uVar6;
    } while (bVar13);
  }
  FUN_100036370(&local_58);
  return param_1;
}

