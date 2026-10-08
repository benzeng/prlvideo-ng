
undefined8 * FUN_1003591b0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  if (*(int *)(puVar1 + 4) < *(int *)(*param_2 + 4)) {
    if (*(uint *)puVar1 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      FUN_1003593b0(param_1);
    }
  }
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    while (lVar3 != lVar2 + 8) {
      FUN_1003592d0(param_1,lVar3 + 0x20);
      lVar3 = QMapNodeBase::nextNode();
      lVar2 = *param_2;
    }
  }
  return param_1;
}

