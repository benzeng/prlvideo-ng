
void FUN_1001b6000(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x20);
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
    uVar4 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar3 + 2) = uVar4;
    piVar1 = (int *)param_2[3];
    puVar3[3] = piVar1;
    if (*piVar1 + 1U < 2) goto LAB_1001b60f2;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  else {
    puVar2 = (undefined8 *)FUN_1001b6150(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x20);
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
    uVar4 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar3 + 2) = uVar4;
    piVar1 = (int *)param_2[3];
    puVar3[3] = piVar1;
    if (*piVar1 + 1U < 2) goto LAB_1001b60f2;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_2 + 2);
LAB_1001b60f2:
  *(undefined4 *)(puVar3 + 2) = uVar4;
  *puVar2 = puVar3;
  return;
}

