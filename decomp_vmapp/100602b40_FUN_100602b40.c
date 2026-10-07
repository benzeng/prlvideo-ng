
void FUN_100602b40(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x28);
    piVar1 = (int *)*param_2;
    *puVar3 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined1 *)((long)puVar3 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 3);
    puVar3[2] = param_2[2];
    FUN_100603130(puVar3 + 4,param_2 + 4);
  }
  else {
    puVar2 = (undefined8 *)FUN_100602db0(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x28);
    piVar1 = (int *)*param_2;
    *puVar3 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined1 *)((long)puVar3 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 3);
    puVar3[2] = param_2[2];
    FUN_100603130(puVar3 + 4,param_2 + 4);
  }
  *puVar2 = puVar3;
  return;
}

