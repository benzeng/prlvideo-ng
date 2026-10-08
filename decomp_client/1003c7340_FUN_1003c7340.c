
undefined8 * FUN_1003c7340(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  QVariant *pQVar11;
  byte bVar12;
  int *piVar13;
  bool bVar14;
  QVariant local_120;
  QArrayData *local_110;
  undefined8 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  undefined4 local_c4;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  ulong local_a0;
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
  
  uVar7 = QMetaObject::cast((QObject *)&PTR_PTR_1021f9b10);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar8;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  FUN_1003ae3b0(&local_68,param_4,&local_70);
  FUN_1000626e0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar6 = local_58[2];
      if (iVar6 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar13 = local_58 + (long)iVar6 * 2 + 4;
        lVar9 = (long)local_58[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar13 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_60 = local_60 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
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
      if ((bool)local_31) goto LAB_1003c74b8;
    }
    QHashData::free_helper(local_68);
  }
LAB_1003c74b8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c74e8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003c74e8:
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
        local_80 = (QArrayData *)QString::fromAscii_helper("InterfaceType",0xd);
        cVar4 = QString::endsWith(&local_78,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c75a6;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003c75a6:
        if (cVar4 == '\0') {
          local_a8 = (QArrayData *)QString::fromAscii_helper("StackIndex",10);
          cVar4 = QString::endsWith(&local_78,&local_a8,1);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c76d5;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1003c76d5:
          if (cVar4 == '\0') {
            local_d0 = (QArrayData *)QString::fromAscii_helper("SubType",7);
            cVar4 = QString::endsWith(&local_78,&local_d0,1);
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c780d;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_1003c780d:
            if (cVar4 != '\0') {
              iVar6 = FUN_100133570(uVar7);
              if (iVar6 == 1) {
                uVar10 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
                local_e8 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19)
                ;
                FUN_1003e1800(&local_e0,uVar10,&local_e8);
                uVar5 = QVariant::toUInt((bool *)&local_e0);
                uVar5 = (uVar5 >> 8) - 9;
                bVar12 = 0;
                if (uVar5 < 8) {
                  bVar12 = 0xc1U >> ((byte)uVar5 & 0x1f) & 1;
                }
                QVariant::~QVariant(&local_e0);
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_31 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003c78d0;
                  }
                  QArrayData::deallocate(local_e8,2,8);
                }
LAB_1003c78d0:
                if (bVar12 != 0) {
                  iVar6 = -1;
                  if (puVar3 != (undefined *)0x0) {
                    sVar8 = _strlen(puVar3);
                    iVar6 = (int)sVar8;
                  }
                  local_f0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
                  uVar10 = FUN_1003ae480(param_1,&local_f0);
                  pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_78);
                  local_108 = 1;
                  QVariant::QVariant(&local_100,4,&local_108,0);
                  QVariant::operator=(pQVar11,&local_100);
                  QVariant::~QVariant(&local_100);
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1003c7a80;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
                  goto LAB_1003c7a80;
                }
              }
              iVar6 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar8 = _strlen(puVar3);
                iVar6 = (int)sVar8;
              }
              local_110 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
              uVar10 = FUN_1003ae480(param_1,&local_110);
              pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_78);
              uVar10 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
              FUN_1003e1800(&local_120,uVar10,&local_78,0);
              QVariant::operator=(pQVar11,&local_120);
              QVariant::~QVariant(&local_120);
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c7a80;
                }
                QArrayData::deallocate(local_110,2,8);
              }
            }
          }
          else {
            iVar6 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar8 = _strlen(puVar3);
              iVar6 = (int)sVar8;
            }
            local_b0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
            uVar10 = FUN_1003ae480(param_1,&local_b0);
            pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_78);
            local_c4 = FUN_100133500(uVar7);
            QVariant::QVariant(&local_c0,3,&local_c4,0);
            QVariant::operator=(pQVar11,&local_c0);
            QVariant::~QVariant(&local_c0);
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c7a80;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
        }
        else {
          iVar6 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar8 = _strlen(puVar3);
            iVar6 = (int)sVar8;
          }
          local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
          uVar10 = FUN_1003ae480(param_1,&local_88);
          pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_78);
          uVar5 = FUN_100133570(uVar7);
          local_a0 = (ulong)uVar5;
          QVariant::QVariant(&local_98,4,&local_a0,0);
          QVariant::operator=(pQVar11,&local_98);
          QVariant::~QVariant(&local_98);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c7a80;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
LAB_1003c7a80:
        local_40 = 0;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c7ab7;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003c7ab7:
      local_50 = local_50 + 2;
      uVar5 = local_40 ^ 1;
      bVar14 = local_40 != 1;
      local_40 = uVar5;
    } while (bVar14);
  }
  FUN_100036370(&local_58);
  return param_1;
}

