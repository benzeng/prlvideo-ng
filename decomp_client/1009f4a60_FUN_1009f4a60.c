
void FUN_1009f4a60(QString param_1,long *param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("MonitorData.txt",0xf);
  FUN_1009f2c60(param_1.field0_0x0,param_2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009f4ac5;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009f4ac5:
  pQVar1 = (QArrayData *)PTR_shared_null_1021e1288;
  if (*(int *)(*param_2 + 4) == 0) {
    CProblemReport::setMonitorData(param_1);
    if (*(int *)pQVar1 == -1) {
      return;
    }
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  else {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("MonitorData.txt",0xf);
    CProblemReport::setMonitorData(param_1);
    if (*(int *)pQVar1 == -1) {
      return;
    }
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate(pQVar1,2,8);
  return;
}

