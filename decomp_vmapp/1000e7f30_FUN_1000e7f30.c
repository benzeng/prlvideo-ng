
int FUN_1000e7f30(char *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  QArrayData *pQVar2;
  int iVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  int local_20;
  undefined1 local_19;
  
  local_20 = FUN_1007da300(param_2,param_3);
  if (local_20 == 0) {
    return 0;
  }
  iVar3 = -1;
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    iVar3 = (int)sVar1;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
  local_28 = pQVar2;
  QByteArray::QByteArray((QByteArray *)&local_30,(char *)&local_20,4);
  FUN_1000e2b60(&local_28,&DAT_1011c3768,2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000e7fd2;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1000e7fd2:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) {
        return local_20;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return local_20;
}

