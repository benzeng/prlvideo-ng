
void FUN_100352420(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x18);
    *puVar3 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_1003528a0(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x18);
    *puVar3 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar3[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
  *puVar2 = puVar3;
  return;
}

