
void FUN_100745050(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    pvVar3 = operator_new(0x80);
    FUN_100283580(pvVar3,param_2);
    piVar1 = *(int **)(param_2 + 0x58);
    *(int **)((long)pvVar3 + 0x58) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x60);
    *(int **)((long)pvVar3 + 0x60) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x68);
    *(int **)((long)pvVar3 + 0x68) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x70);
    *(int **)((long)pvVar3 + 0x70) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x78);
    *(int **)((long)pvVar3 + 0x78) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_100745520(param_1,0x7fffffff,1);
    pvVar3 = operator_new(0x80);
    FUN_100283580(pvVar3,param_2);
    piVar1 = *(int **)(param_2 + 0x58);
    *(int **)((long)pvVar3 + 0x58) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x60);
    *(int **)((long)pvVar3 + 0x60) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x68);
    *(int **)((long)pvVar3 + 0x68) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x70);
    *(int **)((long)pvVar3 + 0x70) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x78);
    *(int **)((long)pvVar3 + 0x78) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *puVar2 = pvVar3;
  return;
}

