
void FUN_1004db730(long *param_1)

{
  code *pcVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  QMapNodeBase *pQVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  QMapNodeBase *pQVar11;
  int iVar12;
  undefined4 local_a4;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  int local_84;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  QMapNodeBase *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  FUN_1004dac60(&local_78,param_1);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar6 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar6 * 8) &&
         (lVar9 = *(int *)(local_70 + 0xc) - lVar6, lVar9 != 0 && lVar6 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar6 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 == -1) {
LAB_1004db81c:
    if (local_68 != local_60) {
      do {
        lVar6 = *(long *)local_68;
        if (((lVar6 != 0) &&
            (cVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined4 *)(lVar6 + 0x3c)),
            cVar3 != '\0')) && (cVar3 = FUN_1003b1f00(*(undefined4 *)(lVar6 + 0x3c)), cVar3 != '\0')
           ) {
          FUN_1003b4c00(&local_80,*(undefined4 *)(lVar6 + 0x3c));
          iVar12 = *(int *)(lVar6 + 0x3c);
          if (1 < *(uint *)local_50) {
            FUN_1004dd730(&local_50);
          }
          pQVar2 = *(QMapNodeBase **)(local_50 + 0x10);
          pQVar7 = (QMapNodeBase *)0x0;
          if (*(QMapNodeBase **)(local_50 + 0x10) == (QMapNodeBase *)0x0) {
LAB_1004db8de:
            pQVar11 = local_50 + 8;
          }
          else {
            do {
              while (pQVar11 = pQVar2, uVar8 = *(uint *)(pQVar11 + 0x18), (int)uVar8 < iVar12) {
                pQVar2 = *(QMapNodeBase **)(pQVar11 + 0x10);
                if (*(QMapNodeBase **)(pQVar11 + 0x10) == (QMapNodeBase *)0x0) {
                  if (pQVar7 == (QMapNodeBase *)0x0) goto LAB_1004db8de;
                  uVar8 = *(uint *)(pQVar7 + 0x18);
                  pQVar11 = pQVar7;
                  goto LAB_1004db8d9;
                }
              }
              pQVar2 = *(QMapNodeBase **)(pQVar11 + 8);
              pQVar7 = pQVar11;
            } while (*(QMapNodeBase **)(pQVar11 + 8) != (QMapNodeBase *)0x0);
LAB_1004db8d9:
            if (iVar12 < (int)uVar8) goto LAB_1004db8de;
          }
          if (1 < *(uint *)local_50) {
            FUN_1004dd730(&local_50);
          }
          iVar12 = 1;
          if (pQVar11 != local_50 + 8) {
            local_84 = 0;
            lVar9 = *(long *)(local_50 + 0x10);
            lVar10 = 0;
            if (*(long *)(local_50 + 0x10) == 0) {
LAB_1004db96d:
              lVar4 = 0;
            }
            else {
              do {
                while (lVar4 = lVar9, iVar12 = *(int *)(lVar4 + 0x18),
                      iVar12 < *(int *)(lVar6 + 0x3c)) {
                  lVar9 = *(long *)(lVar4 + 0x10);
                  if (*(long *)(lVar4 + 0x10) == 0) {
                    if (lVar10 == 0) goto LAB_1004db96d;
                    iVar12 = *(int *)(lVar10 + 0x18);
                    lVar4 = lVar10;
                    goto LAB_1004db969;
                  }
                }
                lVar9 = *(long *)(lVar4 + 8);
                lVar10 = lVar4;
              } while (*(long *)(lVar4 + 8) != 0);
LAB_1004db969:
              if (*(int *)(lVar6 + 0x3c) < iVar12) goto LAB_1004db96d;
            }
            piVar5 = (int *)(lVar4 + 0x1c);
            if (lVar4 == 0) {
              piVar5 = &local_84;
            }
            iVar12 = *piVar5 + 1;
          }
          local_a0 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
          QString::arg(&local_98,&local_a0,&local_80,0,0x20);
          QString::arg(&local_90,&local_98,iVar12,0,10,0x20);
          pcVar1 = *(code **)(*(long *)(lVar6 + 0x10) + 0x28);
          QVariant::QVariant(&local_48,&local_90);
          (*pcVar1)((long *)(lVar6 + 0x10),0,&local_48);
          QVariant::~QVariant(&local_48);
          if (*(int *)local_90.field0_0x0 != -1) {
            if (*(int *)local_90.field0_0x0 != 0) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004dba41;
            }
            QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
          }
LAB_1004dba41:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004dba77;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1004dba77:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004dbaad;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1004dbaad:
          local_a4 = *(undefined4 *)(lVar6 + 0x3c);
          piVar5 = (int *)FUN_1004dd440(&local_50,&local_a4);
          *piVar5 = iVar12;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004dbb10;
            }
            QArrayData::deallocate(local_80,2,8);
          }
        }
LAB_1004dbb10:
        local_68 = local_68 + 8;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  else {
    if (*(int *)local_78 == 0) {
LAB_1004db80d:
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1004db80d;
    }
    if (local_58 != 0) goto LAB_1004db81c;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004dbb53;
    }
    QListData::dispose(local_70);
  }
LAB_1004dbb53:
  pQVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      QMapDataBase::freeTree(local_50,(int)*(long *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

