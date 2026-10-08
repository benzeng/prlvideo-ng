
void FUN_10072cb00(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x10);
    *puVar3 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      *(int *)(puVar3[1] + 4) = *(int *)(puVar3[1] + 4) + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_10072cf10(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x10);
    *puVar3 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      *(int *)(puVar3[1] + 4) = *(int *)(puVar3[1] + 4) + 1;
      UNLOCK();
    }
  }
  *puVar2 = puVar3;
  return;
}

