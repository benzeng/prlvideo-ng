
void FUN_10015e050(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  
  FUN_10015a6f0(param_1,1);
  CSdkCommunicator::stopCommunication();
  if (((*(long *)(param_1 + 0x108) != 0) && (*(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x110), plVar2 != (long *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x108);
    (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
    piVar3 = (int *)*puVar1;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && ((void *)*puVar1 != (void *)0x0)) {
        operator_delete((void *)*puVar1);
      }
      *(undefined8 *)(param_1 + 0x110) = 0;
      *puVar1 = 0;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar4 = _PrlSrv_Create((undefined8 *)(param_1 + 0x80));
  if (iVar4 == 0) {
    CSdkCommunicator::startCommunication();
  }
  return;
}

