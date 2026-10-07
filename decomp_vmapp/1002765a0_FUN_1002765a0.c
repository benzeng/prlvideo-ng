
void FUN_1002765a0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100baf7e0;
  param_1[1] = &PTR_metaObject_100baf868;
  param_1[0xd] = &PTR_FUN_100baf8e0;
  FUN_100257ee0();
  if (*(char *)(param_1 + 0x2d) != '\0') {
    iVar3 = (**(code **)(*(long *)param_1[0x2e] + 0x60))((long *)param_1[0x2e],0);
    if (iVar3 != 0) {
      FUN_1008e3970("","LocalDevices",0,"net_adapter %d:SetEtraceBuffer failed: error %x",
                    *(undefined4 *)(param_1 + 0x2a));
    }
  }
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 8))();
  }
  param_1[0x31] = 0;
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 8))();
  }
  param_1[0x2e] = 0;
  FUN_1007d8af0((long)param_1 + 0x1ec);
  param_1[0x2c] = 0;
  pvVar1 = (void *)param_1[0x3a];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x3b];
    if (pvVar2 != pvVar1) {
      param_1[0x3b] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pQVar4 = (QArrayData *)param_1[0x36];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1002766e3;
      pQVar4 = (QArrayData *)param_1[0x36];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002766e3:
  QMutex::~QMutex((QMutex *)(param_1 + 0x2b));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x13));
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

