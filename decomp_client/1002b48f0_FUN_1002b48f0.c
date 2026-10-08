
undefined8 * FUN_1002b48f0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  QFileInfo *pQVar8;
  bool bVar9;
  QArrayData *local_a0;
  QFileInfo local_98 [8];
  undefined1 local_90 [8];
  QDir local_88 [8];
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_58 = (int *)*param_2;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar7 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      QDir::QDir(local_88,local_50);
      FUN_1002b42d0(local_90);
      QDir::entryInfoList(&local_80,local_88,local_90,10,0xffffffff);
      FUN_100055060(&local_78,&local_80);
      pDVar3 = local_80;
      local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
      local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
      local_60 = 1;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b4aa8;
        }
        iVar1 = *(int *)(local_80 + 0xc);
        if (iVar1 != *(int *)(local_80 + 8)) {
          lVar4 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
          pQVar8 = (QFileInfo *)(local_80 + (long)iVar1 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar8);
            pQVar8 = pQVar8 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(pDVar3);
      }
LAB_1002b4aa8:
      FUN_100039a80(local_90);
      QDir::~QDir(local_88);
      if (local_60 != 0) {
        do {
          if (local_70 == local_68) break;
          QFileInfo::QFileInfo(local_98,(QFileInfo *)local_70);
          if (local_60 != 0) {
            QFileInfo::filePath();
            FUN_1000341d0(param_1,&local_a0);
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002b4b3c;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
LAB_1002b4b3c:
            local_60 = 0;
          }
          QFileInfo::~QFileInfo(local_98);
          local_70 = local_70 + 8;
          uVar5 = local_60 ^ 1;
          bVar9 = local_60 != 1;
          local_60 = uVar5;
        } while (bVar9);
      }
      pDVar3 = local_78;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b4be8;
        }
        iVar1 = *(int *)(local_78 + 0xc);
        if (iVar1 != *(int *)(local_78 + 8)) {
          lVar4 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
          pQVar8 = (QFileInfo *)(local_78 + (long)iVar1 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar8);
            pQVar8 = pQVar8 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(pDVar3);
      }
LAB_1002b4be8:
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  FUN_100039a80(&local_58);
  return param_1;
}

