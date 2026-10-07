
undefined4 FUN_10055f7b0(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  long *plVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  local_20 = 0;
  plVar2 = (long *)FUN_10059ac80(param_1,0x23,&local_20);
  if (plVar2 == (long *)0x0) {
    return local_20;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_28,&local_30,*param_2,0,10,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10055f841;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10055f841:
  pcVar1 = *(code **)(*plVar2 + 0x138);
  local_38 = (QArrayData *)QString::fromAscii_helper("SuspendState",0xc);
  local_20 = (*pcVar1)(plVar2,&local_38,&local_28);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10055f8a0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10055f8a0:
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return local_20;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return local_20;
}

