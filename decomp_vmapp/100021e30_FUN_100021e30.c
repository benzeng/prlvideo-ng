
undefined8 * FUN_100021e30(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_shared_null_100ba2188;
  *param_1 = PTR_shared_null_100ba2188;
  if (*(int *)(puVar1 + 4) < *(int *)(*param_2 + 4)) {
    if (*(uint *)puVar1 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      FUN_100022c80(param_1);
    }
  }
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    while (lVar3 != lVar2 + 8) {
      FUN_10000c490(param_1,lVar3 + 0x18);
      lVar3 = QMapNodeBase::nextNode();
      lVar2 = *param_2;
    }
  }
  return param_1;
}

