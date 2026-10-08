
void FUN_1005245c0(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  Data *pDVar11;
  bool bVar12;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  int local_4c;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = param_1 + 0x40;
  FUN_100274820(lVar1);
  QString::trimmed();
  if (*(int *)(local_40 + 4) != 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e31adc);
    QString::append(&local_48);
    local_4c = 0;
    lVar7 = *(long *)(param_1 + 0x38);
    iVar5 = *(int *)(lVar7 + 8);
    if (iVar5 < *(int *)(lVar7 + 0xc)) {
      do {
        iVar3 = local_4c;
        lVar7 = *(long *)(lVar7 + 0x10 + ((long)local_4c + (long)iVar5) * 8);
        cVar4 = QString::startsWith(lVar7,&local_40,0);
        if ((cVar4 == '\0') && (iVar5 = QString::indexOf(lVar7,&local_48,0,0), iVar5 == -1)) {
          local_70 = *(Data **)(lVar7 + 8);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 == 0) {
              QListData::detach((int)&local_70);
              iVar5 = *(int *)(local_70 + 8);
              if (iVar5 != *(int *)(local_70 + 0xc)) {
                puVar8 = (undefined8 *)
                         (*(long *)(lVar7 + 8) + 0x10 + (long)*(int *)(*(long *)(lVar7 + 8) + 8) * 8
                         );
                pDVar9 = local_70 + (long)iVar5 * 8 + 0x10;
                lVar7 = (long)*(int *)(local_70 + 0xc) * 8 + (long)iVar5 * -8;
                do {
                  piVar2 = (int *)*puVar8;
                  *(int **)pDVar9 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  pDVar9 = pDVar9 + 8;
                  puVar8 = puVar8 + 1;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
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
          local_58 = 1;
          if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
            do {
              pDVar9 = local_68;
              if ((local_58 == 0) ||
                 ((cVar4 = QString::startsWith(local_68,&local_40,0), cVar4 == '\0' &&
                  (iVar5 = QString::indexOf(pDVar9,&local_48,0,0), iVar5 == -1)))) {
                local_68 = local_68 + 8;
                local_58 = 1;
              }
              else {
                FUN_100129840(lVar1,&local_4c);
                local_68 = local_68 + 8;
                uVar6 = local_58 ^ 1;
                bVar12 = local_58 == 1;
                local_58 = uVar6;
                if (bVar12) break;
              }
            } while (local_68 != local_60);
          }
          pDVar9 = local_70;
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100524681;
            }
            iVar5 = *(int *)(local_70 + 0xc);
            if (iVar5 != *(int *)(local_70 + 8)) {
              lVar7 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar5 * -8;
              pDVar11 = local_70 + (long)iVar5 * 8 + 8;
              do {
                pQVar10 = *(QArrayData **)pDVar11;
                if (*(int *)pQVar10 == 0) {
LAB_100524850:
                  QArrayData::deallocate(pQVar10,2,8);
                }
                else if (*(int *)pQVar10 != -1) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + -1;
                  local_31 = *(int *)pQVar10 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar10 = *(QArrayData **)pDVar11;
                    goto LAB_100524850;
                  }
                }
                pDVar11 = pDVar11 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose(pDVar9);
          }
        }
        else {
          FUN_100129840(lVar1,&local_4c);
        }
LAB_100524681:
        local_4c = iVar3 + 1;
        lVar7 = *(long *)(param_1 + 0x38);
        iVar5 = *(int *)(lVar7 + 8);
      } while (local_4c < *(int *)(lVar7 + 0xc) - iVar5);
    }
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005248b2;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1005248b2:
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

