
void FUN_1000e2540(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("exe",3);
  FUN_1000e5580(param_2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e25a4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000e25a4:
  local_38 = (QArrayData *)QString::fromAscii_helper("lnk",3);
  FUN_1000e5580(param_2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e25f5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000e25f5:
  local_40 = (QArrayData *)QString::fromAscii_helper("msi",3);
  FUN_1000e5580(param_2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e2646;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000e2646:
  cVar1 = FUN_1000e0160(param_1);
  if (cVar1 == '\0') goto LAB_1000e26f4;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("exe",3);
  local_48 = pQVar2;
  FUN_1000341d0(param_2,&local_48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e26a5;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000e26a5:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("msi",3);
  local_50 = pQVar2;
  FUN_1000341d0(param_2,&local_50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e26f4;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000e26f4:
  QtPrivate::QStringList_sort(param_2,1);
  return;
}

