
void FUN_1002da0a0(long *param_1,undefined4 param_2)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  Data *local_3a8;
  QArrayData *local_3a0;
  QString local_398 [108];
  undefined1 local_31;
  
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  CSystemStatistics::CSystemStatistics((CSystemStatistics *)local_398);
  CSdkRequest::getResultAsString((int)&local_3a0);
  iVar1 = CSystemStatistics::fromString(local_398);
  if (*(int *)local_3a0 != -1) {
    if (*(int *)local_3a0 != 0) {
      LOCK();
      *(int *)local_3a0 = *(int *)local_3a0 + -1;
      local_31 = *(int *)local_3a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002da139;
    }
    QArrayData::deallocate(local_3a0,2,8);
  }
LAB_1002da139:
  if (iVar1 != 0) goto LAB_1002da2e1;
  CVmGuestOsInformation::getRealOsType();
  local_3b8 = (QArrayData *)QString::fromAscii_helper(", ",2);
  QString::split(&local_3a8,&local_3b0,&local_3b8,0,1);
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_31 = *(int *)local_3b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002da1c4;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_1002da1c4:
  if (*(int *)local_3b0 != -1) {
    if (*(int *)local_3b0 != 0) {
      LOCK();
      *(int *)local_3b0 = *(int *)local_3b0 + -1;
      local_31 = *(int *)local_3b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002da1fa;
    }
    QArrayData::deallocate(local_3b0,2,8);
  }
LAB_1002da1fa:
  if (1 < *(int *)(local_3a8 + 0xc) - *(int *)(local_3a8 + 8)) {
    lVar4 = *(long *)(local_3a8 + (long)*(int *)(local_3a8 + 8) * 8 + 0x18);
    iVar1 = QString::compare_helper
                      (*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4),"32bit",0xffffffff
                       ,1);
    *(uint *)(param_1 + 7) = (uint)(iVar1 != 0);
  }
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      local_31 = *(int *)local_3a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002da2e1;
    }
    iVar1 = *(int *)(local_3a8 + 0xc);
    if (iVar1 != *(int *)(local_3a8 + 8)) {
      lVar4 = (long)*(int *)(local_3a8 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_3a8 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_1002da2c0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_1002da2c0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_3a8);
  }
LAB_1002da2e1:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  CSystemStatistics::~CSystemStatistics((CSystemStatistics *)local_398);
  return;
}

