
void FUN_1005b47c0(long param_1,QString *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *pQVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  bool bVar13;
  QArrayData *local_f0;
  undefined4 local_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  int local_c0;
  QArrayData *local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  uint local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar7 = FUN_1005b86c0(uVar6);
  if (lVar7 == 0) {
    return;
  }
  FileUtils::tempPath();
  iVar5 = QString::indexOf(param_2,&local_40,0,1);
  if (iVar5 != -1) goto LAB_1005b4edb;
  local_48 = (QArrayData *)QString::fromAscii_helper("/tmp/",5);
  cVar3 = QString::startsWith(param_2,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b4876;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b4876:
  if (cVar3 != '\0') goto LAB_1005b4edb;
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"%s was mounted",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b48ef;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1005b48ef:
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_1005b86c0(uVar6);
  lVar7 = FUN_10015a340(uVar6);
  plVar1 = *(long **)(lVar7 + 0x150);
  local_70 = (Data *)*plVar1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar10 = (long)*(int *)(local_70 + 8);
      lVar7 = *plVar1;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_70 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_70 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar10 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  bVar13 = false;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      lVar7 = *(long *)local_68;
      local_90 = *(Data **)(lVar7 + 0x98);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 == 0) {
          QListData::detach((int)&local_90);
          lVar10 = (long)*(int *)(local_90 + 8);
          lVar7 = *(long *)(lVar7 + 0x98);
          if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_90 + lVar10 * 8) &&
             (lVar11 = *(int *)(local_90 + 0xc) - lVar10,
             lVar11 != 0 && lVar10 <= *(int *)(local_90 + 0xc))) {
            _memcpy(local_90 + lVar10 * 8 + 0x10,
                    (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar11 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
      }
      local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
      local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
      local_78 = 1;
      if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
        do {
          if (local_78 == 0) {
LAB_1005b4bd7:
            local_88 = local_88 + 8;
            local_78 = 1;
          }
          else {
            CHwHddPartition::getSystemName();
            if (*(int *)(local_98 + 4) == 0) {
              cVar3 = '\0';
            }
            else {
              local_a8 = local_98;
              if (1 < *(int *)local_98 + 1U) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + 1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
              }
              bVar4 = (bool)QString::remove((int)&local_a8,0);
              MacUtils::getPartitionMountBySystemName(&local_a0,bVar4);
              cVar3 = operator==(&local_a0,param_2);
              if (*(int *)local_a0.field0_0x0 != -1) {
                if (*(int *)local_a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                  local_31 = *(int *)local_a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005b4b14;
                }
                QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
              }
LAB_1005b4b14:
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005b4b63;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
            }
LAB_1005b4b63:
            bVar4 = true;
            if (cVar3 == '\0') {
              bVar4 = bVar13;
            }
            bVar13 = bVar4;
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005b4ba4;
              }
              QArrayData::deallocate(local_98,2,8);
            }
LAB_1005b4ba4:
            if (cVar3 == '\0') goto LAB_1005b4bd7;
            local_88 = local_88 + 8;
            uVar9 = local_78 ^ 1;
            bVar4 = local_78 == 1;
            local_78 = uVar9;
            if (bVar4) break;
          }
        } while (local_88 != local_80);
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b4c2b;
        }
        QListData::dispose(local_90);
      }
LAB_1005b4c2b:
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b4c75;
    }
    QListData::dispose(local_70);
  }
LAB_1005b4c75:
  if (bVar13) {
    pQVar8 = (QArrayData *)QString::fromAscii_helper("",0);
    if (1 < *(int *)pQVar8 + 1U) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + 1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
    }
    local_b0 = 3;
    local_b8 = pQVar8;
    FUN_1005b3950(param_1,&local_b8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b4cfd;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1005b4cfd:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b4d28;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
LAB_1005b4d28:
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b4030(&local_e0,uVar6);
  local_d8 = local_e0;
  if (*local_e0 != -1) {
    if (*local_e0 == 0) {
      QListData::detach((int)&local_d8);
      iVar5 = local_d8[2];
      if (iVar5 != local_d8[3]) {
        local_e0 = local_e0 + (long)local_e0[2] * 2 + 4;
        piVar12 = local_d8 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_d8[3] * 8 + (long)iVar5 * -8;
        do {
          piVar2 = *(int **)local_e0;
          *(int **)piVar12 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_e0 = local_e0 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_e0 = *local_e0 + 1;
      local_31 = *local_e0 != 0;
      UNLOCK();
    }
  }
  local_d0 = local_d8 + (long)local_d8[2] * 2 + 4;
  local_c8 = local_d8 + (long)local_d8[3] * 2 + 4;
  local_c0 = 1;
  FUN_100039a80(&local_e0);
  if ((local_c0 != 0) && (local_d0 != local_c8)) {
    do {
      local_f0 = *(QArrayData **)local_d0;
      if (1 < *(int *)local_f0 + 1U) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + 1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
      }
      local_e8 = 1;
      FUN_1005b3950(param_1,&local_f0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b4ea6;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1005b4ea6:
      local_d0 = local_d0 + 2;
      local_c0 = 1;
    } while (local_d0 != local_c8);
  }
  FUN_100039a80(&local_d8);
LAB_1005b4edb:
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

