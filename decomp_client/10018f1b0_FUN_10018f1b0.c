
void FUN_10018f1b0(long param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  void *local_30;
  undefined1 local_21;
  
  pvVar1 = operator_new(0x70);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_1007bd2e0(pvVar1,&local_38,param_2,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018f229;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10018f229:
  local_30 = pvVar1;
  FUN_1007ba820(*(undefined8 *)(param_1 + 0xe0),pvVar1);
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar2 = FUN_1007c65a0();
    FUN_100190d60(uVar2,&local_30);
  }
  return;
}

