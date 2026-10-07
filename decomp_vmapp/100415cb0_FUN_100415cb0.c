
void FUN_100415cb0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  undefined1 local_30 [8];
  long local_28;
  
  iVar5 = (int)param_1 + 0x28;
  QSemaphore::acquire(iVar5);
  if (1 < *(uint *)(*(long *)(param_1 + 0x30) + 0x10)) {
    local_28 = *(long *)(param_1 + 0x30);
    FUN_10041f350(local_30,param_1 + 0x30,&local_28);
  }
  plVar4 = operator_new(0x18);
  piVar1 = (int *)*param_2;
  plVar4[2] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_28 = CONCAT71(local_28._1_7_,*piVar1 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *plVar4 = lVar2;
  puVar3 = *(undefined8 **)(lVar2 + 8);
  plVar4[1] = (long)puVar3;
  *puVar3 = plVar4;
  *(long **)(*(long *)(param_1 + 0x30) + 8) = plVar4;
  piVar1 = (int *)(*(long *)(param_1 + 0x30) + 0x14);
  *piVar1 = *piVar1 + 1;
  QSemaphore::release(iVar5);
  FUN_10041fe50(param_1);
  return;
}

