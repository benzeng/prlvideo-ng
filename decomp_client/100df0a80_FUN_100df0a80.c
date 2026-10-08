
bool FUN_100df0a80(undefined8 param_1)

{
  QArrayData *pQVar1;
  int iVar2;
  QArrayData *pQVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_40;
  undefined1 local_35;
  undefined1 local_33;
  undefined1 local_32;
  
  QByteArray::QByteArray((QByteArray *)&local_40,"/\\:*?\"<>|",-1);
  pQVar1 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_35 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar5 = (long)*(int *)(local_40 + 4);
  if (lVar5 != 0) {
    pQVar3 = local_40 + *(long *)(local_40 + 0x10);
    iVar4 = 1;
    do {
      iVar2 = QString::indexOf(param_1,(int)(char)*pQVar3,0,1);
      if (iVar2 != -1) goto LAB_100df0b05;
      pQVar3 = pQVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  iVar4 = 2;
LAB_100df0b05:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_33 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100df0b32;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_100df0b32:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100df0b62;
      local_32 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100df0b62:
  return iVar4 == 2;
}

