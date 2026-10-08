
void FUN_100a29d70(CSdkCommunicator *param_1,CSdkCommunicator *param_2,undefined8 param_3,
                  undefined8 *param_4)

{
  CSdkCommunicator *pCVar1;
  int *piVar2;
  long lVar3;
  
  CSdkCommunicator::CSdkCommunicator(param_1,0,1);
  *(undefined **)param_1 = &DAT_102280d70;
  pCVar1 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 0x38) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (pCVar1 != param_2) {
    if (*(long *)pCVar1 != 0) {
      _PrlHandle_Free();
    }
    lVar3 = *(long *)param_2;
    *(long *)pCVar1 = lVar3;
    if (lVar3 != 0) {
      _PrlHandle_AddRef();
    }
  }
  CSdkCommunicator::startCommunication();
  return;
}

