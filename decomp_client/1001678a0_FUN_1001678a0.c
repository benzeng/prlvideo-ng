
void FUN_1001678a0(undefined8 param_1,QString param_2,char param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmEventBase::getEventIssuerId();
  local_40 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_type",0xe);
  lVar2 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100167915;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100167915:
  if (lVar2 != 0) {
    CVmEventParameter::getParamValue();
    iVar1 = QString::toInt((bool *)&local_48,0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100167968;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100167968:
    if (iVar1 == 1) goto LAB_1001679b3;
  }
  uVar3 = FUN_100794960();
  FUN_100796760(uVar3,param_1,param_2.field0_0x0);
  if (param_3 == '\0') {
    FUN_100800be0(param_1,0,&local_38);
  }
  pvVar4 = operator_new(0x48);
  FUN_100293680(pvVar4,param_1);
  CAbstractTask::execute();
LAB_1001679b3:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

