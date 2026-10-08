
void FUN_1000e4c90(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar3 = (undefined8 *)QListData::append();
    puVar4 = operator_new(0x20);
    *puVar4 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar4[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_1000e7550(param_1,0x7fffffff,1);
    puVar4 = operator_new(0x20);
    *puVar4 = *param_2;
    piVar1 = (int *)param_2[1];
    puVar4[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  uVar2 = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[2] = uVar2;
  *puVar3 = puVar4;
  return;
}

