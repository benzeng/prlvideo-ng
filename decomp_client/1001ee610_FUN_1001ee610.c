
void FUN_1001ee610(long param_1)

{
  int iVar1;
  QString *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x14);
  CAbstractProgressOperation::setState(*(long *)(param_1 + 0x10),2);
  if ((iVar1 == -1) && (*(long *)(param_1 + 0x48) != 0)) {
    FileDownloadInfo::downloadedByFar();
  }
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x10));
  pQVar2 = *(QString **)(param_1 + 0x10);
  FUN_1001ecaa0(&local_30,param_1);
  CAbstractProgressOperation::setDescription(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

