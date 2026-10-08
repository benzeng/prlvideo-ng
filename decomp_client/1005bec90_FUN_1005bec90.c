
bool FUN_1005bec90(long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  QArrayData *pQVar4;
  int *piVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  QHash *pQVar11;
  long lVar12;
  bool bVar13;
  QString local_88;
  undefined4 local_80;
  QString local_78;
  undefined4 local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  _func_void_Node_ptr *local_48;
  int *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x148) != '\0') {
    return false;
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x150);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  pQVar11 = (QHash *)CTaskManager::instance();
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_40,pQVar11);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bed28;
    }
    QHashData::free_helper(local_48);
  }
LAB_1005bed28:
  FUN_100033e80(&local_68,&local_40);
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (local_68[2] != local_68[3]) {
    do {
      piVar5 = (int *)**(undefined8 **)local_60;
      lVar12 = (*(undefined8 **)local_60)[1];
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_31 = *piVar5 != 0;
        UNLOCK();
      }
      iVar9 = 5;
      if (local_50 != 0) {
        if ((((piVar5 != (int *)0x0) && (lVar12 != 0)) && (piVar5[1] != 0)) &&
           ((lVar12 = ___dynamic_cast(lVar12,PTR_typeinfo_1021e1678,&PTR_vtable_102206350,0),
            lVar12 != 0 && (cVar8 = CAbstractTask::isFinished(), cVar8 == '\0')))) {
          pQVar6 = *(QArrayData **)(lVar12 + 0x80);
          iVar9 = *(int *)pQVar6;
          if (1 < iVar9 + 1U) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + 1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            iVar9 = *(int *)pQVar6;
          }
          iVar2 = *(int *)(lVar12 + 0x88);
          iVar3 = *(int *)(param_1 + 0x158);
          if (iVar9 != -1) {
            if (iVar9 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bee39;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_1005bee39:
          if (iVar2 == iVar3) {
            pQVar6 = *(QArrayData **)(lVar12 + 0x80);
            if (1 < *(int *)pQVar6 + 1U) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + 1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
            }
            cVar8 = '\x01';
            if (*(int *)(lVar12 + 0x88) == 2) {
              pQVar7 = *(QArrayData **)(lVar12 + 0x80);
              if (*(int *)pQVar7 + 1U < 2) {
LAB_1005bee9e:
                local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar12 + 0x80);
                local_70 = 2;
                if (1 < *(int *)local_78.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                  local_31 = *(int *)local_78.field0_0x0 != 0;
                  UNLOCK();
                  local_70 = *(undefined4 *)(lVar12 + 0x88);
                }
                local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x150);
                if (1 < *(int *)local_88.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                }
                local_80 = *(undefined4 *)(param_1 + 0x158);
                cVar8 = operator==(&local_78,&local_88);
                if (*(int *)local_88.field0_0x0 != -1) {
                  if (*(int *)local_88.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                    local_31 = *(int *)local_88.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005bef30;
                  }
                  QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
                }
LAB_1005bef30:
                if (*(int *)local_78.field0_0x0 != -1) {
                  if (*(int *)local_78.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                    local_31 = *(int *)local_78.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005bef64;
                  }
                  QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
                }
              }
              else {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + 1;
                local_31 = *(int *)pQVar7 != 0;
                UNLOCK();
                if (*(int *)(lVar12 + 0x88) == 2) goto LAB_1005bee9e;
                cVar8 = '\0';
              }
LAB_1005bef64:
              if (*(int *)pQVar7 != -1) {
                if (*(int *)pQVar7 != 0) {
                  LOCK();
                  *(int *)pQVar7 = *(int *)pQVar7 + -1;
                  local_31 = *(int *)pQVar7 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005bef9e;
                }
                QArrayData::deallocate(pQVar7,2,8);
              }
            }
LAB_1005bef9e:
            if (*(int *)pQVar6 != -1) {
              if (*(int *)pQVar6 != 0) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                local_31 = *(int *)pQVar6 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005befcd;
              }
              QArrayData::deallocate(pQVar6,2,8);
            }
LAB_1005befcd:
            iVar9 = 1;
            if (cVar8 != '\0') goto LAB_1005befec;
          }
        }
        local_50 = 0;
        iVar9 = 5;
      }
LAB_1005befec:
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar5);
        }
      }
      if (iVar9 != 5) goto LAB_1005bf039;
      local_60 = local_60 + 2;
      uVar10 = local_50 ^ 1;
      bVar13 = local_50 != 1;
      local_50 = uVar10;
    } while ((bVar13) && (local_60 != local_58));
  }
  iVar9 = 2;
LAB_1005bf039:
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bf063;
    }
    FUN_100034010(&local_68,local_68);
  }
LAB_1005bf063:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_31 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bf093;
    }
    FUN_100034010(&local_40,local_40);
  }
LAB_1005bf093:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar9 != 2;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return iVar9 != 2;
}

