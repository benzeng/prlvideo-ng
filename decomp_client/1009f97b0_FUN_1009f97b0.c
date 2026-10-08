
undefined8 FUN_1009f97b0(undefined8 param_1)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  QDir local_58 [8];
  QArrayData *local_50;
  QString local_48;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  QFileInfo::fileName();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e1dada);
  QString::append(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009f9844;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009f9844:
  FUN_1000341d0(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009f9881;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1009f9881:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009f98b1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009f98b1:
  QFileInfo::absoluteDir();
  QDir::entryInfoList(param_1,local_58,&local_40,2,1);
  QDir::~QDir(local_58);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1009f9950:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1009f9950;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return param_1;
}

