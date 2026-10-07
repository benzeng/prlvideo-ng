
void FUN_100566cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar3 = (undefined8 *)QListData::append();
    puVar4 = operator_new(0x28);
    puVar4[2] = param_2[2];
    uVar1 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar1;
    piVar2 = (int *)param_2[3];
    puVar4[3] = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_1005672f0(param_1,0x7fffffff,1);
    puVar4 = operator_new(0x28);
    puVar4[2] = param_2[2];
    uVar1 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar1;
    piVar2 = (int *)param_2[3];
    puVar4[3] = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_2 + 4);
  *puVar3 = puVar4;
  return;
}

