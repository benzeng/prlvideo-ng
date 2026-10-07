
undefined1 FUN_100258130(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  QMutex::lock();
  while ((char)param_2[2] == '\0') {
    iVar3 = FUN_1002ef640(param_3);
    if (iVar3 == 4) break;
    QWaitCondition::wait((QMutex *)(param_1 + 0x18),param_1 + 0x10);
    if ((char)param_2[2] != '\0') break;
    iVar3 = FUN_1002ef640(param_3);
    if (iVar3 == 4) break;
    uVar4 = FUN_1002ef000(param_3);
    uVar5 = FUN_1002ef010(param_3);
    FUN_1008e3970("","LocalDevices",0,
                  "sync_request on dev(%u:%u) was not acked in time, continue wait...",uVar4,uVar5);
  }
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *param_2 = (long)param_2;
  param_2[1] = (long)param_2;
  lVar1 = param_2[2];
  QMutex::unlock();
  return (char)lVar1;
}

