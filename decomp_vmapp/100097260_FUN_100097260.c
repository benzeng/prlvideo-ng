
int FUN_100097260(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_R12D;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  long local_78;
  QString local_70;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar4 = CVmConfiguration::getVmHardwareList();
  local_58 = *(Data **)(lVar4 + 0x1b0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar4 = *(long *)(lVar4 + 0x1b0);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
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
  local_40 = 1;
  if (*(int *)(local_58 + 8) == *(int *)(local_58 + 0xc)) {
    iVar3 = 2;
  }
  else {
    do {
      local_40 = 1;
      iVar3 = CVmDevice::getEnabled();
      if (((iVar3 != 0) && (iVar3 = CVmDevice::getConnected(), iVar3 == 1)) &&
         ((iVar3 = CVmDevice::getEmulatedType(), iVar3 == 1 ||
          (iVar3 = CVmDevice::getEmulatedType(), iVar3 == 3)))) {
        if (param_4 != 0) {
          CVmDevice::getSystemName();
          cVar2 = QtPrivate::QStringList_contains(param_4,&local_60,1);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000973df;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1000973df:
          if (cVar2 == '\0') goto LAB_1000975d0;
        }
        if (param_5 != '\0') {
          CVmDevice::getSystemName();
          QFileInfo::QFileInfo(local_68,&local_70);
          cVar2 = QFileInfo::exists();
          QFileInfo::~QFileInfo(local_68);
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_31 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10009744b;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_10009744b:
          if (cVar2 == '\0') goto LAB_1000975d0;
        }
        local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        CVmDevice::getSystemName();
        QString::operator=(&local_80,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000974a7;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1000974a7:
        local_78 = 0;
        FUN_1002592b0(FUN_1000977c0,&local_80);
        if (local_78 == 0) {
          iVar3 = (**(code **)(*param_2 + 0x170))(param_2,&local_80,3);
        }
        else {
          iVar3 = (**(code **)(*param_2 + 0x168))(param_2);
        }
        bVar1 = false;
        if (iVar3 < 0) {
          QString::toUtf8();
          FUN_1008e3970("","vm",0,"Error 0x%x when adding disk %s to the states manager",iVar3,
                        local_90 + *(long *)(local_90 + 0x10));
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100097575;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100097575:
          bVar1 = true;
          (**(code **)(*param_2 + 0x178))(param_2);
          unaff_R12D = iVar3;
        }
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000975bd;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1000975bd:
        iVar3 = 1;
        if (bVar1) goto LAB_1000975f2;
      }
LAB_1000975d0:
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
    iVar3 = 2;
  }
LAB_1000975f2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100097618;
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
LAB_100097618:
  if (iVar3 == 2) {
    unaff_R12D = 0;
  }
  return unaff_R12D;
}

