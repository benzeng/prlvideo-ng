
undefined8 * FUN_1005341c0(undefined8 *param_1,long param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined *puVar11;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  Data *local_88;
  QVariant local_80;
  QArrayData *local_70;
  undefined *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  if (param_2 == 0) {
    return param_1;
  }
  iVar3 = QTreeWidget::topLevelItemCount();
  local_68 = PTR_shared_null_1021e15e8;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      plVar6 = (long *)QTreeWidget::topLevelItem(param_3);
      (**(code **)(*plVar6 + 0x18))(&local_80,plVar6,0,0x100);
      QVariant::toString();
      FUN_1000341d0(&local_68,&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100534298;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100534298:
      QVariant::~QVariant(&local_80);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
  }
  FUN_10015a330(param_2);
  lVar7 = CDispCommonPreferences::getUsbPreferences();
  local_88 = *(Data **)(lVar7 + 0x98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_88);
      lVar8 = (long)*(int *)(local_88 + 8);
      lVar7 = *(long *)(lVar7 + 0x98);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_88 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_88 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_88 + 0xc))
         ) {
        _memcpy(local_88 + lVar8 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_a8 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_a8);
      lVar7 = (long)*(int *)(local_a8 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_a8 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_a8 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar7 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
    do {
      local_90 = 1;
      CDispUsbIdentity::getSystemName();
      cVar2 = FUN_1001b35f0(&local_b0);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(local_68 + 8);
        if (iVar3 < *(int *)(local_68 + 0xc)) {
          puVar11 = local_68 + (long)iVar3 * 8 + 8;
          lVar7 = (long)*(int *)(local_68 + 0xc) * 8 + (long)iVar3 * -8;
          do {
            if (lVar7 == 0) goto LAB_100534460;
            cVar2 = operator==((QString *)(puVar11 + 8),&local_b0);
            puVar11 = puVar11 + 8;
            lVar7 = lVar7 + -8;
          } while (cVar2 == '\0');
          if ((int)((ulong)((long)puVar11 -
                           (long)(local_68 + (ulong)*(uint *)(local_68 + 8) * 8 + 0x10)) >> 3) != -1
             ) goto LAB_100534720;
        }
LAB_100534460:
        lVar7 = FUN_10015a340(param_2);
        plVar6 = *(long **)(lVar7 + 0x180);
        local_58 = (Data *)*plVar6;
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 == 0) {
            QListData::detach((int)&local_58);
            lVar8 = (long)*(int *)(local_58 + 8);
            lVar7 = *plVar6;
            if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_58 + lVar8 * 8) &&
               (lVar9 = *(int *)(local_58 + 0xc) - lVar8,
               lVar9 != 0 && lVar8 <= *(int *)(local_58 + 0xc))) {
              _memcpy(local_58 + lVar8 * 8 + 0x10,
                      (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar9 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
        }
        local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
        local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
        if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
          do {
            local_40 = 1;
            (**(code **)(**(long **)local_50 + 0xb8))(&local_60);
            cVar2 = FUN_1001aee90(&local_60,&local_b0);
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10053454f;
              }
              QArrayData::deallocate(local_60,2,8);
            }
LAB_10053454f:
            bVar1 = true;
            if (cVar2 != '\0') goto LAB_100534572;
            local_50 = local_50 + 8;
          } while (local_50 != local_48);
        }
        local_40 = 1;
        bVar1 = false;
LAB_100534572:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100534598;
          }
          QListData::dispose(local_58);
        }
LAB_100534598:
        if (bVar1) {
          CDispUsbIdentity::getFriendlyName();
          QString::trimmed();
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005345f9;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1005345f9:
          uVar4 = CDispUsbIdentity::getIndex();
          if (1 < uVar4) {
            local_d0 = (QArrayData *)QString::fromAscii_helper(" #%1",4);
            uVar5 = CDispUsbIdentity::getIndex();
            QString::arg(&local_c8,&local_d0,uVar5,0,10,0x20);
            QString::append(&local_b8);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100534695;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
LAB_100534695:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005346d0;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
          }
LAB_1005346d0:
          FUN_10002bf90(param_1,&local_b8,&local_b0);
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100534720;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
        }
      }
LAB_100534720:
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100534756;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100534756:
      local_a0 = local_a0 + 8;
    } while (local_a0 != local_98);
  }
  local_90 = 1;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005347ab;
    }
    QListData::dispose(local_a8);
  }
LAB_1005347ab:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005347d1;
    }
    QListData::dispose(local_88);
  }
LAB_1005347d1:
  FUN_100039a80(&local_68);
  return param_1;
}

