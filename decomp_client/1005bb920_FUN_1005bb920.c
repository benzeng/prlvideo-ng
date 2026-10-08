
void FUN_1005bb920(long param_1)

{
  long lVar1;
  CAppliance *pCVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  CAppliance *this;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))();
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    local_58 = *(Data **)(lVar1 + 0x98);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar7 = (long)*(int *)(local_58 + 8);
        lVar1 = *(long *)(lVar1 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_58 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar8 * 8);
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
    local_40 = 1;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        if ((local_40 == 0) || (pCVar2 = *(CAppliance **)local_50, pCVar2 == (CAppliance *)0x0)) {
LAB_1005bbc67:
          local_50 = local_50 + 8;
          local_40 = 1;
        }
        else {
          CAppliance::getApplianceName();
          local_68 = *(QArrayData **)(param_1 + 0x98);
          if (1 < *(int *)local_68 + 1U) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + 1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
          }
          iVar5 = QString::indexOf(&local_60,&local_68,0,1);
          cVar4 = '\x01';
          if (iVar5 == -1) {
            CAppliance::getType();
            local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x98);
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            cVar3 = operator==(&local_70,&local_78);
            cVar4 = '\x01';
            if (cVar3 == '\0') {
              CAppliance::getApplianceId();
              local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x98);
              if (1 < *(int *)local_88.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
                local_31 = *(int *)local_88.field0_0x0 != 0;
                UNLOCK();
              }
              cVar4 = operator==(&local_80,&local_88);
              if (*(int *)local_88.field0_0x0 != -1) {
                if (*(int *)local_88.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005bbb02;
                }
                QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
              }
LAB_1005bbb02:
              if (*(int *)local_80.field0_0x0 != -1) {
                if (*(int *)local_80.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                  local_31 = *(int *)local_80.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005bbb32;
                }
                QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
              }
            }
LAB_1005bbb32:
            if (*(int *)local_78.field0_0x0 != -1) {
              if (*(int *)local_78.field0_0x0 != 0) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bbb62;
              }
              QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
            }
LAB_1005bbb62:
            if (*(int *)local_70.field0_0x0 != -1) {
              if (*(int *)local_70.field0_0x0 != 0) {
                LOCK();
                *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                local_31 = *(int *)local_70.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bbba0;
              }
              QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
            }
          }
LAB_1005bbba0:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bbbd0;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1005bbbd0:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bbc00;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1005bbc00:
          if (cVar4 == '\0') goto LAB_1005bbc67;
          this = operator_new(0x148);
          CAppliance::CAppliance(this,pCVar2);
          if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))();
          }
          *(CAppliance **)(param_1 + 0xb0) = this;
          local_50 = local_50 + 8;
          uVar6 = local_40 ^ 1;
          bVar9 = local_40 == 1;
          local_40 = uVar6;
          if (bVar9) break;
        }
      } while (local_50 != local_48);
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
  }
  return;
}

