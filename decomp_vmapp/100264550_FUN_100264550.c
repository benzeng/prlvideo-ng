
long * FUN_100264550(undefined8 param_1,QString *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  long *plVar2;
  uint uVar3;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar3 = 0xffffffff;
  plVar2 = (long *)FUN_100707430(0xffffffff,1);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"[CParallelDevice] Cannot create SpecFile");
    return (long *)0x0;
  }
  do {
    FUN_1002642c0(&local_40);
    QString::operator=(param_2,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002645e3;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1002645e3:
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4,param_5,param_6);
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  } while ((cVar1 == '\0') && (uVar3 = uVar3 + 1, uVar3 < 10));
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    return plVar2;
  }
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[CParallelDevice] Can\'t open file %s",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026468c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10026468c:
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return (long *)0x0;
}

