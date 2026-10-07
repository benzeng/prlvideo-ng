
int FUN_100265e10(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  iVar2 = FUN_100264270();
  if (iVar2 < 0) {
    return iVar2;
  }
  CVmDevice::getSystemName();
  QString::operator=((QString *)(param_1 + 0x118),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100265e85;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100265e85:
  QMutex::lock();
  FUN_100264750(param_1,*(undefined8 *)(param_1 + 0x110));
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar3 = (long *)FUN_100707430(0xffffffff,1);
  *(long **)(param_1 + 0x110) = plVar3;
  if (plVar3 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelFile] : can\'t allocate file abstraction for %s",
                  local_40 + *(long *)(local_40 + 0x10));
    iVar2 = -0x7fff8ffe;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100266099;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_100266099;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,(QString *)(param_1 + 0x118),2,1,0x200,0);
  cVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x98))();
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelFile] : can\'t open file %s for write",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100266078;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    iVar2 = 0;
    lVar4 = (**(code **)(**(long **)(param_1 + 0x110) + 0x60))(*(long **)(param_1 + 0x110),0,2);
    if (lVar4 != -1) goto LAB_100266099;
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelFile] : Error seeking to the end of file %s!",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100266078;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100266078:
  FUN_100264750(param_1,*(undefined8 *)(param_1 + 0x110));
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar2 = -0x7fff8ffe;
LAB_100266099:
  QMutex::unlock();
  return iVar2;
}

