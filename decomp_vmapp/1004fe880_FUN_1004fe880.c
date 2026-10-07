
undefined8 *
FUN_1004fe880(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  QFileInfo *pQVar7;
  long lVar8;
  Data *pDVar9;
  undefined8 local_c8;
  Data *local_c0;
  undefined8 local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  Data *local_88;
  QArrayData *local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QDirIterator local_40 [15];
  undefined1 local_31;
  
  iVar6 = QString::compare(param_3,param_2 + 0x10,1);
  if (iVar6 != 0) {
    FUN_1004d9f80(&local_b8,param_2,param_3,param_4,param_5);
    *param_1 = local_b8;
    return param_1;
  }
  local_c0 = (Data *)PTR_shared_null_100ba2188;
  cVar3 = FUN_1004dd4c0(param_4);
  QDirIterator::QDirIterator(local_40,param_3,0x6400,0);
  bVar5 = false;
  do {
    cVar4 = QDirIterator::hasNext();
    if (cVar4 == '\0') {
      QDirIterator::~QDirIterator(local_40);
      goto LAB_1004ff080;
    }
    QDirIterator::next();
    QDirIterator::fileName();
    if (cVar3 == '\0') {
      FUN_1004dc7d0(&local_88,&local_48,param_4,param_5);
      pDVar9 = local_c0;
      local_c0 = local_88;
      local_88 = pDVar9;
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          local_31 = *(int *)pDVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fec01;
        }
        iVar6 = *(int *)(pDVar9 + 0xc);
        if (iVar6 != *(int *)(pDVar9 + 8)) {
          lVar8 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar6 * -8;
          pQVar7 = (QFileInfo *)(pDVar9 + (long)iVar6 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar9);
      }
LAB_1004fec01:
      bVar1 = false;
      if (*(int *)(local_c0 + 0xc) != *(int *)(local_c0 + 8)) {
        QMutex::lock();
        FUN_10005a020(&local_a8,&local_c0);
        local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
        local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
        if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
          do {
            local_90 = 1;
            QFileInfo::fileName();
            FUN_1005022f0(param_2 + 0x20,&local_b0,&local_50);
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004feccc;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_1004feccc:
            local_a0 = local_a0 + 8;
          } while (local_a0 != local_98);
        }
        pDVar9 = local_a8;
        local_90 = 1;
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fed71;
          }
          iVar6 = *(int *)(local_a8 + 0xc);
          if (iVar6 != *(int *)(local_a8 + 8)) {
            lVar8 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar6 * -8;
            pQVar7 = (QFileInfo *)(local_a8 + (long)iVar6 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(pQVar7);
              pQVar7 = pQVar7 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar9);
        }
LAB_1004fed71:
        QMutex::unlock();
        bVar5 = true;
        bVar1 = true;
      }
    }
    else {
      FUN_1004dc5b0(&local_58,&local_48,param_4,param_5);
      QMutex::lock();
      FUN_10005a020(&local_78,&local_58);
      pDVar9 = (Data *)CONCAT71(uStack_77,local_78);
      local_70 = pDVar9 + (long)*(int *)(pDVar9 + 8) * 8 + 0x10;
      local_68 = pDVar9 + (long)*(int *)(pDVar9 + 0xc) * 8 + 0x10;
      if (*(int *)(pDVar9 + 8) != *(int *)(pDVar9 + 0xc)) {
        do {
          local_60 = 1;
          QFileInfo::fileName();
          FUN_1005022f0(param_2 + 0x20,&local_80,&local_50);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fea66;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_1004fea66:
          local_70 = local_70 + 8;
        } while (local_70 != local_68);
        pDVar9 = (Data *)CONCAT71(uStack_77,local_78);
      }
      local_60 = 1;
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          local_31 = *(int *)pDVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004feaf1;
          pDVar9 = (Data *)CONCAT71(uStack_77,local_78);
        }
        iVar6 = *(int *)(pDVar9 + 0xc);
        if (iVar6 != *(int *)(pDVar9 + 8)) {
          lVar8 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar6 * -8;
          pQVar7 = (QFileInfo *)(pDVar9 + (long)iVar6 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar9);
      }
LAB_1004feaf1:
      QMutex::unlock();
      FUN_100502930(&local_c0,&local_58);
      pDVar9 = local_58;
      bVar1 = false;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          bVar1 = false;
          if ((bool)local_31) goto LAB_1004fedf0;
        }
        iVar6 = *(int *)(local_58 + 0xc);
        if (iVar6 != *(int *)(local_58 + 8)) {
          lVar8 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar6 * -8;
          pQVar7 = (QFileInfo *)(local_58 + (long)iVar6 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar9);
        bVar1 = false;
      }
    }
LAB_1004fedf0:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fee20;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1004fee20:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fee50;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004fee50:
  } while (!bVar1);
  QDirIterator::~QDirIterator(local_40);
  pDVar9 = local_c0;
  if ((!bVar5) && (*(int *)local_c0 != -1)) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ff080;
    }
    iVar6 = *(int *)(local_c0 + 0xc);
    if (iVar6 != *(int *)(local_c0 + 8)) {
      lVar8 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar6 * -8;
      pQVar7 = (QFileInfo *)(local_c0 + (long)iVar6 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_1004ff080:
  FUN_1004dd510(&local_c8,&local_c0);
  pDVar9 = local_c0;
  uVar2 = local_c8;
  local_c8 = 0;
  *param_1 = uVar2;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      if (*(int *)local_c0 != 0) {
        return param_1;
      }
      local_78 = 0;
    }
    iVar6 = *(int *)(local_c0 + 0xc);
    if (iVar6 != *(int *)(local_c0 + 8)) {
      lVar8 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar6 * -8;
      pQVar7 = (QFileInfo *)(local_c0 + (long)iVar6 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar9);
  }
  return param_1;
}

