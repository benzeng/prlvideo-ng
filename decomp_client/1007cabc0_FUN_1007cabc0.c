
void FUN_1007cabc0(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  CSbaInstallation *this;
  int *piVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  CSbaInstallation *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  Data_conflict local_188;
  undefined4 local_180;
  QVariant local_178;
  QArrayData *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  undefined4 local_148;
  int *local_140;
  QArrayData *local_138;
  QString local_130;
  QString local_128;
  QVariant local_120;
  CSbaInstallation local_110 [223];
  undefined1 local_31;
  
  CSbaInstallation::CSbaInstallation(local_110);
  FUN_100a04400(&local_128);
  FUN_1007caa20(&local_130);
  QSettings::QSettings((QSettings *)&local_120,&local_128,&local_130,(QObject *)0x0);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cac51;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1007cac51:
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cac87;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_1007cac87:
  local_138 = (QArrayData *)QString::fromAscii_helper("Sba Installations",0x11);
  QSettings::beginGroup((QString *)&local_120);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cace8;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1007cace8:
  QSettings::allKeys();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"SBA INSTALL: found %d installation(s), loading...");
  }
  local_160 = local_140;
  if (*local_140 != -1) {
    if (*local_140 == 0) {
      QListData::detach((int)&local_160);
      iVar1 = local_160[2];
      if (iVar1 != local_160[3]) {
        local_140 = local_140 + (long)local_140[2] * 2 + 4;
        piVar4 = local_160 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_160[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_140;
          *(int **)piVar4 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar4 = piVar4 + 2;
          local_140 = local_140 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_140 = *local_140 + 1;
      local_31 = *local_140 != 0;
      UNLOCK();
    }
  }
  local_158 = local_160 + (long)local_160[2] * 2 + 4;
  local_150 = local_160 + (long)local_160[3] * 2 + 4;
  if (local_160[2] != local_160[3]) {
    do {
      local_148 = 1;
      local_180 = 0x80000000;
      local_188.field7 = 0;
      QSettings::value((QString *)&local_178,&local_120);
      QVariant::toString();
      CBaseNode::fromString
                ((QTypedArrayData<unsigned_short> *)local_110,SUB81(&local_168,0),(QString *)0x0,
                 (int *)0x0,(int *)0x0);
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007caead;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_1007caead:
      QVariant::~QVariant(&local_178);
      QVariant::~QVariant((QVariant *)&local_188);
      if (2 < DAT_10230ffd0) {
        CSbaInstallation::getType();
        QString::toUtf8();
        pQVar7 = local_190 + *(long *)(local_190 + 0x10);
        CSbaInstallation::getResult();
        QString::toUtf8();
        pQVar6 = local_1a0 + *(long *)(local_1a0 + 0x10);
        CSbaInstallation::getDstPath();
        QString::toUtf8();
        pQVar5 = local_1b0 + *(long *)(local_1b0 + 0x10);
        CSbaInstallation::getCreationDateTime();
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",3,"SBA INSTALL: loaded %s [%s] (%s) at %s",pQVar7,pQVar6,
                      pQVar5,local_1c0 + *(long *)(local_1c0 + 0x10));
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_31 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007caff3;
          }
          QArrayData::deallocate(local_1c0,1,8);
        }
LAB_1007caff3:
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb029;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
LAB_1007cb029:
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb05f;
          }
          QArrayData::deallocate(local_1b0,1,8);
        }
LAB_1007cb05f:
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_31 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb095;
          }
          QArrayData::deallocate(local_1b8,2,8);
        }
LAB_1007cb095:
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_31 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb0cb;
          }
          QArrayData::deallocate(local_1a0,1,8);
        }
LAB_1007cb0cb:
        if (*(int *)local_1a8 != -1) {
          if (*(int *)local_1a8 != 0) {
            LOCK();
            *(int *)local_1a8 = *(int *)local_1a8 + -1;
            local_31 = *(int *)local_1a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb108;
          }
          QArrayData::deallocate(local_1a8,2,8);
        }
LAB_1007cb108:
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb14c;
          }
          QArrayData::deallocate(local_190,1,8);
        }
LAB_1007cb14c:
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_31 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cb190;
          }
          QArrayData::deallocate(local_198,2,8);
        }
      }
LAB_1007cb190:
      this = operator_new(0xd8);
      CSbaInstallation::CSbaInstallation(this,local_110);
      local_1d0 = this;
      FUN_1007d9500(param_1 + 0xa8,&local_1d0);
      local_158 = local_158 + 2;
    } while (local_158 != local_150);
  }
  local_148 = 1;
  FUN_100039a80(&local_160);
  FUN_100039a80(&local_140);
  QSettings::~QSettings((QSettings *)&local_120);
  CSbaInstallation::~CSbaInstallation(local_110);
  return;
}

