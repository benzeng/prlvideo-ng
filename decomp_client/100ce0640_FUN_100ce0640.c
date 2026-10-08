
undefined4 FUN_100ce0640(QString *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  undefined4 uVar6;
  Data *pDVar7;
  int iVar8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_1);
  cVar2 = QFileInfo::exists();
  uVar6 = 0;
  if (cVar2 == '\0') goto LAB_100ce0abf;
  QFileInfo::suffix();
  FUN_100cdf8d0(&local_50);
  cVar2 = QFileInfo::isFile();
  if (cVar2 == '\0') {
    cVar2 = QFileInfo::isDir();
    if (cVar2 == '\0') {
      QFileInfo::isSymLink();
    }
    else {
      FUN_100ce1820(&local_98,&local_50);
      local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
      local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
      if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
        do {
          local_80 = 1;
          uVar6 = **(undefined4 **)local_90;
          FUN_100ce11e0(&local_a0,uVar6);
          cVar2 = QtPrivate::QStringList_contains(&local_a0,&local_48,0);
          pDVar4 = local_a0;
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce096c;
            }
            iVar8 = *(int *)(local_a0 + 0xc);
            if (iVar8 != *(int *)(local_a0 + 8)) {
              lVar3 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar8 * -8;
              pDVar7 = local_a0 + (long)iVar8 * 8 + 8;
              do {
                pQVar5 = *(QArrayData **)pDVar7;
                if (*(int *)pQVar5 == 0) {
LAB_100ce0940:
                  QArrayData::deallocate(pQVar5,2,8);
                }
                else if (*(int *)pQVar5 != -1) {
                  LOCK();
                  *(int *)pQVar5 = *(int *)pQVar5 + -1;
                  local_31 = *(int *)pQVar5 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar5 = *(QArrayData **)pDVar7;
                    goto LAB_100ce0940;
                  }
                }
                pDVar7 = pDVar7 + -8;
                lVar3 = lVar3 + 8;
              } while (lVar3 != 0);
            }
            QListData::dispose(pDVar4);
          }
LAB_100ce096c:
          iVar8 = 1;
          if (cVar2 != '\0') goto LAB_100ce09a0;
          local_90 = local_90 + 8;
        } while (local_90 != local_88);
      }
      local_80 = 1;
      iVar8 = 8;
LAB_100ce09a0:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce0a0f;
        }
        iVar1 = *(int *)(local_98 + 0xc);
        if (iVar1 != *(int *)(local_98 + 8)) {
          lVar3 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar1 * -8;
          pDVar4 = local_98 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar4 != (void *)0x0) {
              operator_delete(*(void **)pDVar4);
            }
            pDVar4 = pDVar4 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
        QListData::dispose(local_98);
      }
LAB_100ce0a0f:
      if (iVar8 != 8) goto LAB_100ce0a23;
    }
LAB_100ce0a20:
    uVar6 = 0;
  }
  else {
    FUN_100ce1820(&local_70,&local_50);
    local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
      do {
        local_58 = 1;
        uVar6 = **(undefined4 **)local_68;
        FUN_100ce0de0(&local_78,uVar6);
        cVar2 = QtPrivate::QStringList_contains(&local_78,&local_48,0);
        pDVar4 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce07a9;
          }
          iVar8 = *(int *)(local_78 + 0xc);
          if (iVar8 != *(int *)(local_78 + 8)) {
            lVar3 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar8 * -8;
            pDVar7 = local_78 + (long)iVar8 * 8 + 8;
            do {
              pQVar5 = *(QArrayData **)pDVar7;
              if (*(int *)pQVar5 == 0) {
LAB_100ce0780:
                QArrayData::deallocate(pQVar5,2,8);
              }
              else if (*(int *)pQVar5 != -1) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                local_31 = *(int *)pQVar5 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar5 = *(QArrayData **)pDVar7;
                  goto LAB_100ce0780;
                }
              }
              pDVar7 = pDVar7 + -8;
              lVar3 = lVar3 + 8;
            } while (lVar3 != 0);
          }
          QListData::dispose(pDVar4);
        }
LAB_100ce07a9:
        iVar8 = 1;
        if (cVar2 != '\0') goto LAB_100ce07d7;
        local_68 = local_68 + 8;
      } while (local_68 != local_60);
    }
    local_58 = 1;
    iVar8 = 2;
LAB_100ce07d7:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce083f;
      }
      iVar1 = *(int *)(local_70 + 0xc);
      if (iVar1 != *(int *)(local_70 + 8)) {
        lVar3 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
        pDVar4 = local_70 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar4 != (void *)0x0) {
            operator_delete(*(void **)pDVar4);
          }
          pDVar4 = pDVar4 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_70);
    }
LAB_100ce083f:
    if (iVar8 == 2) goto LAB_100ce0a20;
  }
LAB_100ce0a23:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce0a8f;
    }
    iVar8 = *(int *)(local_50 + 0xc);
    if (iVar8 != *(int *)(local_50 + 8)) {
      lVar3 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar8 * -8;
      pDVar4 = local_50 + (long)iVar8 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100ce0a8f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce0abf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ce0abf:
  QFileInfo::~QFileInfo(local_40);
  return uVar6;
}

