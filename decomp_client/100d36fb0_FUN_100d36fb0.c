
undefined1 FUN_100d36fb0(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined *local_30;
  undefined1 local_21;
  
  local_30 = PTR_shared_null_1021e15e8;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
  local_38 = pQVar2;
  FUN_1000341d0(&local_30,&local_38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3701e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d3701e:
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d35230(param_1,&local_40,&local_48);
  uVar1 = QtPrivate::QStringList_contains(&local_30,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d37081;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d37081:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d370b1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d370b1:
  FUN_100039a80(&local_30);
  return uVar1;
}

