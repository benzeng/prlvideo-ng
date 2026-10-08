
void FUN_100130510(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  bool bVar13;
  QString local_100;
  QArrayData *local_f8;
  int *local_f0;
  long *local_e8;
  long *local_e0;
  uint local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  undefined *local_78;
  QString local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1001317d0();
  plVar1 = *(long **)(param_2 + 0x168);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar10 = (long)*(int *)(local_58 + 8);
      lVar8 = *plVar1;
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_58 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_58 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar10 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar3 = PTR_shared_null_1021e1288;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      iVar5 = *(int *)puVar3;
      if (1 < iVar5 + 1U) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + 1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        iVar5 = *(int *)puVar3;
      }
      local_78 = puVar3;
      if (1 < iVar5 + 1U) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + 1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        iVar5 = *(int *)puVar3;
      }
      local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      if (1 < iVar5 + 1U) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + 1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        iVar5 = *(int *)puVar3;
      }
      local_68 = 4;
      local_64 = 0xffff;
      local_60 = 0;
      if (iVar5 != -1) {
        if (iVar5 == 0) {
LAB_100130656:
          QArrayData::deallocate((QArrayData *)puVar3,2,8);
        }
        else {
          LOCK();
          *(int *)puVar3 = *(int *)puVar3 + -1;
          local_31 = *(int *)puVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_100130656;
        }
        if (*(int *)puVar3 != -1) {
          if (*(int *)puVar3 == 0) {
LAB_100130681:
            QArrayData::deallocate((QArrayData *)puVar3,2,8);
          }
          else {
            LOCK();
            *(int *)puVar3 = *(int *)puVar3 + -1;
            local_31 = *(int *)puVar3 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_100130681;
          }
          if (*(int *)puVar3 != -1) {
            if (*(int *)puVar3 != 0) {
              LOCK();
              *(int *)puVar3 = *(int *)puVar3 + -1;
              local_31 = *(int *)puVar3 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001306c0;
            }
            QArrayData::deallocate((QArrayData *)puVar3,2,8);
          }
        }
      }
LAB_1001306c0:
      local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      iVar5 = CHwNetAdapter::getNetAdapterType();
      if ((iVar5 == 1) || (uVar7 = CHwNetAdapter::getSysIndex(), (uVar7 & 0x10000000) != 0)) {
        local_68 = 3;
        (**(code **)(*plVar1 + 0xa8))(&local_90,plVar1);
        QString::operator=(&local_88,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001309d4;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
      }
      else {
        local_68 = 0;
        (**(code **)(*plVar1 + 0xb8))(&local_98,plVar1);
        QString::operator=(&local_88,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10013074c;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_10013074c:
        (**(code **)(*plVar1 + 0xa8))(&local_a0,plVar1);
        cVar4 = operator==(&local_88,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001307ac;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1001307ac:
        if (cVar4 == '\0') {
          local_b8 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
          (**(code **)(*plVar1 + 0xa8))(&local_c0,plVar1);
          QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
          (**(code **)(*plVar1 + 0xb8))(&local_c8,plVar1);
          QString::arg(&local_a8,&local_b0,&local_c8,0,0x20);
          QString::operator=(&local_88,&local_a8);
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100130885;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_100130885:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001308bb;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_1001308bb:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001308f1;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1001308f1:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100130927;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_100130927:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001309d4;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
      }
LAB_1001309d4:
      QString::operator=(&local_80,&local_88);
      CHwNetAdapter::getMacAddress();
      QString::operator=(&local_70,&local_d0);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100130a35;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_100130a35:
      local_64 = CHwNetAdapter::getVLANTag();
      local_60 = CHwNetAdapter::getSysIndex();
      FUN_1001315d0(param_1,&local_80);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100130a87;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_100130a87:
      FUN_100131910(&local_80);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100130ad2;
    }
    QListData::dispose(local_58);
  }
LAB_100130ad2:
  FUN_100131a30(&local_f0,param_3);
  local_e8 = (long *)(local_f0 + (long)local_f0[2] * 2 + 4);
  local_e0 = (long *)(local_f0 + (long)local_f0[3] * 2 + 4);
  local_d8 = 1;
  if (local_f0[2] != local_f0[3]) {
    do {
      pQVar2 = *(QArrayData **)(*local_e8 + 8);
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      if (local_d8 != 0) {
        lVar8 = CVirtualNetwork::getHostOnlyNetwork();
        if ((lVar8 != 0) && (lVar8 = CHostOnlyNetwork::getParallelsAdapter(), lVar8 != 0)) {
          CParallelsAdapter::getName();
          iVar5 = *(int *)(local_f8 + 4);
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100130bd1;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_100130bd1:
          if (iVar5 != 0) {
            uVar6 = CParallelsAdapter::getPrlAdapterIndex();
            puVar9 = (uint *)*param_1;
            if (1 < *puVar9) {
              FUN_1001321d0(param_1,puVar9[1]);
              puVar9 = (uint *)*param_1;
            }
            puVar12 = puVar9 + (long)(int)puVar9[2] * 2 + 4;
            do {
              if (1 < *puVar9) {
                FUN_1001321d0(param_1,puVar9[1]);
                puVar9 = (uint *)*param_1;
              }
              if (puVar12 == puVar9 + (long)(int)puVar9[3] * 2 + 4) goto LAB_100130cb0;
              lVar8 = *(long *)puVar12;
              puVar12 = puVar12 + 2;
            } while (*(uint *)(lVar8 + 0x20) != (uVar6 | 0x10000000));
            CParallelsAdapter::getName();
            QString::operator=((QString *)(lVar8 + 8),&local_100);
            if (*(int *)local_100.field0_0x0 != -1) {
              if (*(int *)local_100.field0_0x0 != 0) {
                LOCK();
                *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                local_31 = *(int *)local_100.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100130cb0;
              }
              QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
            }
          }
        }
LAB_100130cb0:
        local_d8 = 0;
      }
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100130ce9;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_100130ce9:
      local_e8 = local_e8 + 1;
      uVar6 = local_d8 ^ 1;
      bVar13 = local_d8 != 1;
      local_d8 = uVar6;
    } while ((bVar13) && (local_e8 != local_e0));
  }
  if (*local_f0 != -1) {
    if (*local_f0 != 0) {
      LOCK();
      *local_f0 = *local_f0 + -1;
      UNLOCK();
      if (*local_f0 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100131840(&local_f0,local_f0);
  }
  return;
}

