
void FUN_1001785f0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar3 = (undefined8 *)QListData::append();
    puVar4 = operator_new(0x10);
    piVar1 = (int *)*param_2;
    uVar2 = param_2[1];
    *puVar4 = piVar1;
    puVar4[1] = uVar2;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_1001794d0(param_1,0x7fffffff,1);
    puVar4 = operator_new(0x10);
    piVar1 = (int *)*param_2;
    uVar2 = param_2[1];
    *puVar4 = piVar1;
    puVar4[1] = uVar2;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *puVar3 = puVar4;
  return;
}

