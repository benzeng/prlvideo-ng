
undefined8 * FUN_100ce11e0(undefined8 *param_1,int param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_2 == 3) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vmwarevm",8);
    local_50 = pQVar1;
    FUN_1000341d0(param_1,&local_50);
    if (*(int *)pQVar1 == -1) {
      return param_1;
    }
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
    return param_1;
  }
  if (param_2 != 2) {
    if (param_2 != 1) {
      return param_1;
    }
    pQVar1 = (QArrayData *)QString::fromAscii_helper("pvm",3);
    local_38 = pQVar1;
    FUN_1000341d0(param_1,&local_38);
    if (*(int *)pQVar1 == -1) {
      return param_1;
    }
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
    return param_1;
  }
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vpc6",4);
  local_40 = pQVar1;
  FUN_1000341d0(param_1,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce125e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100ce125e:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vpc7",4);
  local_48 = pQVar1;
  FUN_1000341d0(param_1,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return param_1;
}

