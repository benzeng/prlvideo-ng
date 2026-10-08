
void FUN_100ad1790(char *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_14;
  
  puVar3 = *(uint **)param_1;
  local_14 = param_3;
  if (puVar3[1] == 0) {
    FUN_100ad94b0(param_1);
    puVar3 = *(uint **)param_1;
  }
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(long *)(puVar3 + 4);
  if (*(int *)(lVar2 + 4 + (long)puVar3) == 0) {
    uStack_20 = 0;
    local_28 = 0x10;
    *(int *)((long)puVar3 + lVar2) = *(int *)((long)puVar3 + lVar2) + 0x10;
    piVar1 = (int *)((long)puVar3 + lVar2 + 4);
    *piVar1 = *piVar1 + 0x10;
    QByteArray::append(param_1,(int)&local_28);
  }
  QByteArray::append(param_1,(int)&local_14);
  puVar3 = *(uint **)param_1;
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(long *)(puVar3 + 4);
  *(int *)((long)puVar3 + lVar2) = *(int *)((long)puVar3 + lVar2) + 4;
  piVar1 = (int *)((long)puVar3 + lVar2 + 4);
  *piVar1 = *piVar1 + 4;
  piVar1 = (int *)((long)puVar3 + lVar2 + 0x20);
  *piVar1 = *piVar1 + 4;
  piVar1 = (int *)((long)puVar3 + lVar2 + 0x24);
  *piVar1 = *piVar1 + 1;
  return;
}

