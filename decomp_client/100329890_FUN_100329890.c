
undefined8 FUN_100329890(long param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_88;
  long local_80;
  QString local_78;
  CRequestInfo local_70 [8];
  QArrayData *local_68;
  int *local_58;
  QVariant local_48;
  undefined1 local_31;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_78,uVar1);
  CRequestInfo::CRequestInfo(local_70,0x30da8,&local_78,(QObject *)0x0);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100329913;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100329913:
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_88,uVar2);
  local_80 = _PrlDevSecondaryDisplay_AsyncCaptureScaledScreenRegionToBuffer
                       (local_88,param_2,0x50000008,0,*param_3,param_3[1],
                        (1 - *param_3) + param_3[2],(1 - param_3[1]) + param_3[3],*param_4,
                        param_4[1]);
  uVar1 = CSdkCommunicator::createRequest(uVar1,&local_80,local_70);
  if (local_80 != 0) {
    _PrlHandle_Free();
  }
  if (local_88 != 0) {
    _PrlHandle_Free();
  }
  QVariant::~QVariant(&local_48);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_31 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return uVar1;
}

