
void FUN_100413fb0(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QArrayData *pQVar5;
  int iVar6;
  Data *pDVar7;
  long lVar8;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(DAT_1011cc738 + 4) == 0) {
    return;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("/Library/Managed Preferences",0x1c);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  QString::arg(&local_40,&local_48,&DAT_1011cc738,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100414067;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100414067:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100414097;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100414097:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004140c7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004140c7:
  QMutex::lock();
  QFileSystemWatcher::directories();
  iVar6 = *(int *)(local_60 + 0xc);
  iVar1 = *(int *)(local_60 + 8);
  if (*(int *)local_60 != -1) {
    iVar3 = iVar6;
    iVar4 = iVar1;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004141ac;
      iVar3 = *(int *)(local_60 + 0xc);
      iVar4 = *(int *)(local_60 + 8);
    }
    if (iVar3 != iVar4) {
      lVar8 = (long)iVar4 * 8 + (long)iVar3 * -8;
      pDVar7 = local_60 + (long)iVar3 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar5 == 0) {
LAB_100414180:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar7;
            goto LAB_100414180;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_1004141ac:
  iVar6 = iVar6 - iVar1;
  if (iVar6 == 1) {
    cVar2 = QFile::exists(&local_40);
    if (cVar2 != '\0') {
      QFileSystemWatcher::addPath(*(QString **)(param_1 + 0x10));
    }
    FUN_100413e30(param_1);
  }
  else if (iVar6 == 2) {
    iVar6 = QString::compare(&local_40,param_2,1);
    if (iVar6 == 0) {
      FUN_100413e30(param_1);
    }
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("[FCWatcher]","ParentalControlWatcher",1,
                  "WARNING: incorrect path number (%d) to monitor!",iVar6);
  }
  QMutex::unlock();
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

