
void FUN_100752a40(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = *(Data **)(param_1 + 0x10);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_1 + 0x10);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
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
      lVar1 = *(long *)local_50;
      local_60 = *(QArrayData **)(lVar1 + 0x10);
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
      local_80 = *(Data **)(param_1 + 0x10);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 == 0) {
          QListData::detach((int)&local_80);
          lVar4 = (long)*(int *)(local_80 + 8);
          lVar3 = *(long *)(param_1 + 0x10);
          if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_80 + lVar4 * 8) &&
             (lVar5 = *(int *)(local_80 + 0xc) - lVar4,
             lVar5 != 0 && lVar4 <= *(int *)(local_80 + 0xc))) {
            _memcpy(local_80 + lVar4 * 8 + 0x10,
                    (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
      }
      local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
      local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
      if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
        do {
          local_68 = 1;
          lVar3 = *(long *)local_78;
          if (lVar3 != lVar1) {
            local_88 = *(QArrayData **)(lVar3 + 0x10);
            if (1 < *(int *)local_88 + 1U) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + 1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
            }
            QString::simplified();
            QString::trimmed();
            QString::toLower();
            QString::simplified();
            QString::trimmed();
            QString::toLower();
            cVar2 = operator==(&local_90,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752c9c;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_100752c9c:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752cd2;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_100752cd2:
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752d08;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_100752d08:
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752d3e;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_100752d3e:
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752d74;
              }
              QArrayData::deallocate(local_98,2,8);
            }
LAB_100752d74:
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752daa;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
LAB_100752daa:
            if (cVar2 != '\0') {
              FUN_100753ca0(&local_c0,param_1,&local_88);
              QString::operator=((QString *)(lVar3 + 0x10),&local_c0);
              if (*(int *)local_c0.field0_0x0 != -1) {
                if (*(int *)local_c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                  local_31 = *(int *)local_c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100752e10;
                }
                QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
              }
            }
LAB_100752e10:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100752e40;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
LAB_100752e40:
          local_78 = local_78 + 8;
        } while (local_78 != local_70);
      }
      local_68 = 1;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100752e83;
        }
        QListData::dispose(local_80);
      }
LAB_100752e83:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100752eb3;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100752eb3:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
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
  return;
}

