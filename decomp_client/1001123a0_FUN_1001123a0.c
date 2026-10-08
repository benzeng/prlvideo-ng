
bool FUN_1001123a0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  QString local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QString local_68;
  QString local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (param_1 != 0) {
    lVar5 = CVmConfiguration::getVmHardwareList();
    plVar1 = *(long **)(lVar5 + 0xd8);
    if (plVar1 != (long *)0x0) {
      local_58 = (Data *)*plVar1;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 == 0) {
          QListData::detach((int)&local_58);
          lVar6 = (long)*(int *)(local_58 + 8);
          lVar5 = *plVar1;
          if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar6 * 8) &&
             (lVar7 = *(int *)(local_58 + 0xc) - lVar6,
             lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))) {
            _memcpy(local_58 + lVar6 * 8 + 0x10,
                    (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar7 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
      }
      puVar2 = PTR_typeinfo_1021e1740;
      local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
      local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
      if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
        do {
          local_40 = 1;
          if (((*(long *)local_50 != 0) &&
              (lVar5 = ___dynamic_cast(*(long *)local_50,puVar2,PTR_typeinfo_1021e1648,0),
              lVar5 != 0)) &&
             ((iVar4 = CVmDevice::getEmulatedType(), iVar4 == 3 ||
              (iVar4 = CVmDevice::getEmulatedType(), iVar4 == 0)))) {
            CVmDevice::getSystemName();
            CHwHddPartition::getSystemName();
            cVar3 = operator==(&local_60,&local_68);
            if (*(int *)local_68.field0_0x0 != -1) {
              if (*(int *)local_68.field0_0x0 != 0) {
                LOCK();
                *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                local_31 = *(int *)local_68.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100112513;
              }
              QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
            }
LAB_100112513:
            if (*(int *)local_60.field0_0x0 != -1) {
              if (*(int *)local_60.field0_0x0 != 0) {
                LOCK();
                *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                local_31 = *(int *)local_60.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100112546;
              }
              QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
            }
LAB_100112546:
            iVar4 = 1;
            if (cVar3 != '\0') goto LAB_100112716;
            local_88 = *(Data **)(lVar5 + 0xf0);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 == 0) {
                QListData::detach((int)&local_88);
                lVar6 = (long)*(int *)(local_88 + 8);
                lVar5 = *(long *)(lVar5 + 0xf0);
                if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_88 + lVar6 * 8) &&
                   (lVar7 = *(int *)(local_88 + 0xc) - lVar6,
                   lVar7 != 0 && lVar6 <= *(int *)(local_88 + 0xc))) {
                  _memcpy(local_88 + lVar6 * 8 + 0x10,
                          (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar7 * 8);
                }
              }
              else {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + 1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
              }
            }
            local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
            local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
            if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
              do {
                local_70 = 1;
                CVmHddPartition::getSystemName();
                CHwHddPartition::getSystemName();
                cVar3 = operator==(&local_90,&local_98);
                if (*(int *)local_98.field0_0x0 != -1) {
                  if (*(int *)local_98.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                    local_31 = *(int *)local_98.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100112661;
                  }
                  QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
                }
LAB_100112661:
                if (*(int *)local_90.field0_0x0 != -1) {
                  if (*(int *)local_90.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                    local_31 = *(int *)local_90.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100112697;
                  }
                  QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
                }
LAB_100112697:
                iVar4 = 1;
                if (cVar3 != '\0') goto LAB_1001126c4;
                local_80 = local_80 + 8;
              } while (local_80 != local_78);
            }
            local_70 = 1;
            iVar4 = 0xc;
LAB_1001126c4:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001126ed;
              }
              QListData::dispose(local_88);
            }
LAB_1001126ed:
            if (iVar4 != 0xc) goto LAB_100112716;
          }
          local_50 = local_50 + 8;
        } while (local_50 != local_48);
      }
      local_40 = 1;
      iVar4 = 6;
LAB_100112716:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_10011273c;
          local_31 = 0;
        }
        QListData::dispose(local_58);
      }
LAB_10011273c:
      return iVar4 == 6;
    }
  }
  return false;
}

