
undefined8 FUN_100d8b240(undefined8 param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_28;
  undefined1 local_1c;
  undefined1 local_1b;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("prl_naptd.pid",0xd);
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Naptd-pid",9);
  FUN_100d8b360(param_1,&local_28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_1c = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_1c) goto LAB_100d8b2ae;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d8b2ae:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1b = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

