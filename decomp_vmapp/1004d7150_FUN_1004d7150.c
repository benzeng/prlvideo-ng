
void FUN_1004d7150(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar3 = (undefined8 *)QListData::append();
    puVar4 = operator_new(0x10);
    uVar2 = *param_2;
    *puVar4 = uVar2;
    lVar1 = *(long *)(param_2 + 2);
    *(long *)(puVar4 + 2) = lVar1;
    if (lVar1 == 0) goto LAB_1004d71df;
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  else {
    puVar3 = (undefined8 *)FUN_1004d7240(param_1,0x7fffffff,1);
    puVar4 = operator_new(0x10);
    uVar2 = *param_2;
    *puVar4 = uVar2;
    lVar1 = *(long *)(param_2 + 2);
    *(long *)(puVar4 + 2) = lVar1;
    if (lVar1 == 0) goto LAB_1004d71df;
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *param_2;
LAB_1004d71df:
  *puVar4 = uVar2;
  *puVar3 = puVar4;
  return;
}

