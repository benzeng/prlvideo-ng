
undefined8 * FUN_100774ab0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_30 = (QArrayData *)QString::fromAscii_helper("nvram -x -p",0xb);
  cVar1 = FUN_100770460(&local_30,&local_28,0,0,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100774b24;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100774b24:
  if (cVar1 == '\0') {
    uVar2 = QString::fromAscii_helper("",0);
    *param_1 = uVar2;
  }
  else {
    *param_1 = local_28;
    if (1 < *(int *)local_28 + 1U) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

