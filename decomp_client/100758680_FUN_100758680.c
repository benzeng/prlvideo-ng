
undefined8 * FUN_100758680(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_78;
  QFileInfo local_70 [8];
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100109d60(&local_40,param_2,0);
  lVar4 = CVmConfiguration::getVmHardwareList();
  plVar1 = *(long **)(lVar4 + 0xa8 + (ulong)param_3 * 8);
  local_60 = (Data *)*plVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      lVar4 = *plVar1;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      iVar3 = CVmDevice::getEmulatedType();
      if (iVar3 == (param_3 == 10) + 1) {
        CVmDevice::getSystemName();
        QFileInfo::QFileInfo(local_70,&local_68);
        cVar2 = QFileInfo::isRelative();
        if (cVar2 == '\0') {
          QFileInfo::absolutePath();
          cVar2 = QString::startsWith(&local_78,&local_40,1);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007587fb;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_1007587fb:
          if (((cVar2 == '\0') && (cVar2 = QFileInfo::exists(), cVar2 != '\0')) &&
             (cVar2 = QtPrivate::QStringList_contains(param_1,&local_68,1), cVar2 == '\0')) {
            FUN_1000341d0(param_1,&local_68);
          }
        }
        QFileInfo::~QFileInfo(local_70);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100758870;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_100758870:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007588b3;
    }
    QListData::dispose(local_60);
  }
LAB_1007588b3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

