
void FUN_100461110(undefined8 *param_1,undefined8 *param_2)

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
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined2 *)((long)puVar3 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
    *(undefined8 *)((long)puVar3 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    QBrush::QBrush((QBrush *)(puVar3 + 4),(QBrush *)(param_2 + 4));
  }
  else {
    puVar2 = (undefined8 *)FUN_100467e80(param_1,0x7fffffff,1);
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
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined2 *)((long)puVar3 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
    *(undefined8 *)((long)puVar3 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    QBrush::QBrush((QBrush *)(puVar3 + 4),(QBrush *)(param_2 + 4));
  }
  *puVar2 = puVar3;
  return;
}

