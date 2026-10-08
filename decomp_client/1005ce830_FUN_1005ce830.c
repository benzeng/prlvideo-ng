
void FUN_1005ce830(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  CVmIdentification *pCVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QString local_1e0;
  QFileInfo local_1d8 [8];
  QString local_1d0;
  QString local_1c8;
  int *local_1c0;
  int *local_1b8;
  int *local_1b0;
  uint local_1a8;
  QArrayData *local_1a0;
  int *local_198;
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  CVmIdentification local_168 [311];
  undefined1 local_31;
  
  pCVar4 = (CVmIdentification *)CVmConfiguration::getVmIdentification();
  CVmIdentification::CVmIdentification(local_168,pCVar4);
  local_178 = (QArrayData *)QString::fromAscii_helper("%1/Desktop",10);
  QDir::homePath();
  QString::arg(&local_170,&local_178,&local_180,0,0x20);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce8d4;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1005ce8d4:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce90a;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1005ce90a:
  CVmIdentification::getHomePath();
  FUN_100109830(&local_188);
  local_190 = (QArrayData *)PTR_shared_null_1021e1288;
  CVmIdentification::getVmName();
  FUN_100114df0(&local_198,&local_170,&local_1a0,&local_190,1);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce9a7;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1005ce9a7:
  local_1c0 = local_198;
  if (*local_198 != -1) {
    if (*local_198 == 0) {
      QListData::detach((int)&local_1c0);
      iVar7 = local_1c0[2];
      if (iVar7 != local_1c0[3]) {
        local_198 = local_198 + (long)local_198[2] * 2 + 4;
        piVar6 = local_1c0 + (long)iVar7 * 2 + 4;
        lVar5 = (long)local_1c0[3] * 8 + (long)iVar7 * -8;
        do {
          piVar1 = *(int **)local_198;
          *(int **)piVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_198 = local_198 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_198 = *local_198 + 1;
      local_31 = *local_198 != 0;
      UNLOCK();
    }
  }
  local_1b8 = local_1c0 + (long)local_1c0[2] * 2 + 4;
  local_1b0 = local_1c0 + (long)local_1c0[3] * 2 + 4;
  local_1a8 = 1;
  if (local_1c0[2] != local_1c0[3]) {
    do {
      local_1c8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_1b8;
      if (1 < *(int *)local_1c8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + 1;
        local_31 = *(int *)local_1c8.field0_0x0 != 0;
        UNLOCK();
      }
      iVar7 = 5;
      if (local_1a8 != 0) {
        QFileInfo::QFileInfo(local_1d8,&local_1c8);
        QFileInfo::readLink();
        cVar2 = operator==(&local_1d0,&local_188);
        if (*(int *)local_1d0.field0_0x0 != -1) {
          if (*(int *)local_1d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
            local_31 = *(int *)local_1d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005ceb28;
          }
          QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
        }
LAB_1005ceb28:
        QFileInfo::~QFileInfo(local_1d8);
        iVar7 = 1;
        if (cVar2 == '\0') {
          local_1a8 = 0;
          iVar7 = 5;
        }
      }
      if (*(int *)local_1c8.field0_0x0 != -1) {
        if (*(int *)local_1c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
          local_31 = *(int *)local_1c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ceb80;
        }
        QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
      }
LAB_1005ceb80:
      if (iVar7 != 5) goto LAB_1005cebc1;
      local_1b8 = local_1b8 + 2;
      uVar3 = local_1a8 ^ 1;
      bVar8 = local_1a8 != 1;
      local_1a8 = uVar3;
    } while ((bVar8) && (local_1b8 != local_1b0));
  }
  iVar7 = 2;
LAB_1005cebc1:
  FUN_100039a80(&local_1c0);
  if (iVar7 == 2) {
    CVmIdentification::getVmName();
    local_1f0 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_100115e80(&local_1e0,&local_170,&local_1e8,&local_1f0,1);
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cec55;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
LAB_1005cec55:
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cec8b;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
LAB_1005cec8b:
    MacUtils::createAlias(&local_188,&local_1e0);
    if (*(int *)local_1e0.field0_0x0 != -1) {
      if (*(int *)local_1e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
        local_31 = *(int *)local_1e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cecd4;
      }
      QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
    }
  }
LAB_1005cecd4:
  FUN_100039a80(&local_198);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ced16;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1005ced16:
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ced4c;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_1005ced4c:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ced82;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1005ced82:
  CVmIdentification::~CVmIdentification(local_168);
  return;
}

