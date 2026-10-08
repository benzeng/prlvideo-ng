
undefined1 FUN_100d34950(QString *param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  bool bVar10;
  QArrayData *local_d0;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  uint local_a0;
  QTypedArrayData<unsigned_short> *local_98;
  QString local_90;
  QArrayData *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  QString local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_1);
  cVar4 = QFileInfo::exists();
  uVar5 = 1;
  if (cVar4 == '\0') goto LAB_100d34f36;
  cVar4 = QFileInfo::isFile();
  if ((cVar4 != '\0') || (cVar4 = QFileInfo::isSymLink(), cVar4 != '\0')) {
    uVar5 = QFile::remove(param_1);
    goto LAB_100d34f36;
  }
  cVar4 = QFileInfo::isDir();
  if ((cVar4 == '\0') && (cVar4 = QFileInfo::isBundle(), cVar4 == '\0')) {
    local_50 = param_1->field0_0x0;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","VIUtils",0,"TR00047.15:\t%s",local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d34af6;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100d34af6:
    if (*(int *)local_50 == -1) {
      uVar5 = 0;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar5 = 0;
          goto LAB_100d34f36;
        }
      }
      QArrayData::deallocate((QArrayData *)local_50,2,8);
      uVar5 = 0;
    }
    goto LAB_100d34f36;
  }
  QDir::QDir((QDir *)&local_58,param_1);
  QDir::entryList(&local_80,&local_58,0x6400,0xffffffff);
  local_78 = local_80;
  if (*local_80 != -1) {
    if (*local_80 == 0) {
      QListData::detach((int)&local_78);
      iVar1 = local_78[2];
      if (iVar1 != local_78[3]) {
        local_80 = local_80 + (long)local_80[2] * 2 + 4;
        piVar9 = local_78 + (long)iVar1 * 2 + 4;
        lVar8 = (long)local_78[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_80;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_80 = local_80 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  local_60 = 1;
  FUN_100039a80(&local_80);
  if (local_60 != 0) {
    do {
      if (local_70 == local_68) break;
      local_88 = *(QArrayData **)local_70;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      if (local_60 != 0) {
        uVar6 = QDir::separator();
        local_98 = param_1->field0_0x0;
        if (1 < *(uint *)local_98 + 1) {
          LOCK();
          *(uint *)local_98 = *(uint *)local_98 + 1;
          local_31 = *(uint *)local_98 != 0;
          UNLOCK();
        }
        uVar7 = *(uint *)(local_98 + 4);
        if ((1 < *(uint *)local_98) || ((*(uint *)(local_98 + 8) & 0x7fffffff) < uVar7 + 2)) {
          QString::reallocData((uint)&local_98,SUB41(uVar7 + 2,0));
          uVar7 = *(uint *)(local_98 + 4);
        }
        *(uint *)(local_98 + 4) = uVar7 + 1;
        *(undefined2 *)(local_98 + (long)(int)uVar7 * 2 + *(long *)(local_98 + 0x10)) = uVar6;
        *(undefined2 *)
         (local_98 + (long)(int)*(uint *)(local_98 + 4) * 2 + *(long *)(local_98 + 0x10)) = 0;
        if (1 < *(uint *)local_98 + 1) {
          LOCK();
          *(uint *)local_98 = *(uint *)local_98 + 1;
          local_31 = *(uint *)local_98 != 0;
          UNLOCK();
        }
        local_90.field0_0x0 = local_98;
        QString::append(&local_90);
        FUN_100d34950(&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d34c7e;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100d34c7e:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d34cb4;
          }
          QArrayData::deallocate((QArrayData *)local_98,2,8);
        }
LAB_100d34cb4:
        local_60 = 0;
      }
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d34ceb;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100d34ceb:
      local_70 = local_70 + 2;
      uVar7 = local_60 ^ 1;
      bVar10 = local_60 != 1;
      local_60 = uVar7;
    } while (bVar10);
  }
  FUN_100039a80(&local_78);
  QDir::entryList(&local_c0,&local_58,0x302,0xffffffff);
  local_b8 = local_c0;
  if (*local_c0 != -1) {
    if (*local_c0 == 0) {
      QListData::detach((int)&local_b8);
      iVar1 = local_b8[2];
      if (iVar1 != local_b8[3]) {
        local_c0 = local_c0 + (long)local_c0[2] * 2 + 4;
        piVar9 = local_b8 + (long)iVar1 * 2 + 4;
        lVar8 = (long)local_b8[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_c0;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_c0 = local_c0 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_c0 = *local_c0 + 1;
      local_31 = *local_c0 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)local_b8[2] * 2 + 4;
  local_a8 = local_b8 + (long)local_b8[3] * 2 + 4;
  local_a0 = 1;
  FUN_100039a80(&local_c0);
  if (local_a0 != 0) {
    do {
      if (local_b0 == local_a8) break;
      pQVar3 = *(QArrayData **)local_b0;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      if (local_a0 != 0) {
        QDir::remove(&local_58);
        local_a0 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d34e9d;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100d34e9d:
      local_b0 = local_b0 + 2;
      uVar7 = local_a0 ^ 1;
      bVar10 = local_a0 != 1;
      local_a0 = uVar7;
    } while (bVar10);
  }
  FUN_100039a80(&local_b8);
  QDir::absolutePath();
  uVar5 = QDir::rmdir(&local_58);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d34f2d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100d34f2d:
  QDir::~QDir((QDir *)&local_58);
LAB_100d34f36:
  QFileInfo::~QFileInfo(local_40);
  return uVar5;
}

