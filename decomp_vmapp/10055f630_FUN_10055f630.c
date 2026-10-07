
int FUN_10055f630(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  int local_28;
  undefined1 local_21;
  
  local_28 = 0;
  plVar3 = (long *)FUN_10059ac80(param_1,9,&local_28);
  if (plVar3 == (long *)0x0) {
    return local_28;
  }
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar1 = *(code **)(*plVar3 + 0x140);
  local_38 = (QArrayData *)QString::fromAscii_helper("SuspendState",0xc);
  local_28 = (*pcVar1)(plVar3,&local_38,&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10055f6cf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10055f6cf:
  if (local_28 == 0) {
    uVar2 = QString::toUInt((bool *)&local_30,0);
    *param_2 = uVar2;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return local_28;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return local_28;
}

