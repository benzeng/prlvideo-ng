
void FUN_10051b4a0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    plVar3 = operator_new(0x10);
    lVar1 = *param_2;
    *plVar3 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_10051b8e0(param_1,0x7fffffff,1);
    plVar3 = operator_new(0x10);
    lVar1 = *param_2;
    *plVar3 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  *(int *)(plVar3 + 1) = (int)param_2[1];
  *puVar2 = plVar3;
  return;
}

