
void FUN_1000b4a10(undefined8 *param_1,void *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    pvVar3 = operator_new(0x68);
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x50);
    *(int **)((long)pvVar3 + 0x50) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x58);
    *(int **)((long)pvVar3 + 0x58) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x60);
    *(int **)((long)pvVar3 + 0x60) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_1000b5e10(param_1,0x7fffffff,1);
    pvVar3 = operator_new(0x68);
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x50);
    *(int **)((long)pvVar3 + 0x50) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x58);
    *(int **)((long)pvVar3 + 0x58) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    _memcpy(pvVar3,param_2,0x50);
    piVar1 = *(int **)((long)param_2 + 0x60);
    *(int **)((long)pvVar3 + 0x60) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  _memcpy(pvVar3,param_2,0x50);
  *puVar2 = pvVar3;
  return;
}

