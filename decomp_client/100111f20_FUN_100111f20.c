
undefined1 FUN_100111f20(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  bool bVar11;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  uint local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar5 = FUN_10015a340();
  plVar1 = *(long **)(lVar5 + 0x150);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar7 = (long)*(int *)(local_58 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_58 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
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
      lVar5 = *(long *)local_50;
      cVar3 = FUN_100111b00(lVar5);
      if (cVar3 != '\0') {
        local_78 = *(Data **)(lVar5 + 0x98);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 == 0) {
            QListData::detach((int)&local_78);
            lVar7 = (long)*(int *)(local_78 + 8);
            lVar5 = *(long *)(lVar5 + 0x98);
            if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_78 + lVar7 * 8) &&
               (lVar8 = *(int *)(local_78 + 0xc) - lVar7,
               lVar8 != 0 && lVar7 <= *(int *)(local_78 + 0xc))) {
              _memcpy(local_78 + lVar7 * 8 + 0x10,
                      (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + 1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
          }
        }
        local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
        local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
        local_60 = 1;
        if (*(int *)(local_78 + 8) == *(int *)(local_78 + 0xc)) {
          bVar2 = false;
        }
        else {
          bVar11 = false;
          do {
            bVar2 = bVar11;
            if (local_60 != 0) {
              lVar5 = *(long *)local_70;
              if (lVar5 != 0) {
                uVar4 = CHwHddPartition::getType();
                cVar3 = FUN_100ccffc0(uVar4);
                if (cVar3 != '\0') {
                  cVar3 = FUN_1001123a0(lVar5,param_2);
                  bVar2 = true;
                  if (cVar3 == '\0') goto LAB_10011225b;
                }
              }
              local_98 = *(Data **)(lVar5 + 0xa8);
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 == 0) {
                  QListData::detach((int)&local_98);
                  lVar8 = (long)*(int *)(local_98 + 8);
                  lVar7 = *(long *)(lVar5 + 0xa8);
                  if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_98 + lVar8 * 8) &&
                     (lVar9 = *(int *)(local_98 + 0xc) - lVar8,
                     lVar9 != 0 && lVar8 <= *(int *)(local_98 + 0xc))) {
                    _memcpy(local_98 + lVar8 * 8 + 0x10,
                            (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar9 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + 1;
                  local_31 = *(int *)local_98 != 0;
                  UNLOCK();
                }
              }
              local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
              local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
              local_80 = 1;
              bVar2 = bVar11;
              if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
                do {
                  if ((local_80 == 0) || (*(long *)local_90 == 0)) {
LAB_1001121c7:
                    local_90 = local_90 + 8;
                    local_80 = 1;
                    bVar2 = bVar11;
                  }
                  else {
                    uVar4 = CHwHddPartition::getType();
                    cVar3 = FUN_100ccffc0(uVar4);
                    if ((cVar3 == '\0') || (cVar3 = FUN_1001123a0(lVar5,param_2), cVar3 != '\0'))
                    goto LAB_1001121c7;
                    local_90 = local_90 + 8;
                    uVar6 = local_80 ^ 1;
                    bVar2 = true;
                    bVar11 = local_80 == 1;
                    local_80 = uVar6;
                    if (bVar11) break;
                  }
                  bVar11 = bVar2;
                } while (local_90 != local_88);
              }
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 != 0) {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + -1;
                  local_31 = *(int *)local_98 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10011224c;
                }
                QListData::dispose(local_98);
              }
LAB_10011224c:
              if (!bVar2) {
                local_60 = 0;
              }
            }
LAB_10011225b:
            local_70 = local_70 + 8;
            uVar6 = local_60 ^ 1;
            bVar11 = local_60 != 1;
            local_60 = uVar6;
          } while ((bVar11) && (bVar11 = bVar2, local_70 != local_68));
        }
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001122aa;
          }
          QListData::dispose(local_78);
        }
LAB_1001122aa:
        uVar10 = 1;
        if (!bVar2) goto LAB_1001122d1;
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  uVar10 = 0;
LAB_1001122d1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar10;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar10;
}

