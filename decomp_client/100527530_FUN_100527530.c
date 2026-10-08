
undefined8 * FUN_100527530(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = QVariant::userType();
  puVar2 = PTR_shared_null_1021e1288;
  if (iVar4 == 10) {
    puVar5 = (undefined8 *)QVariant::constData();
    piVar1 = (int *)*puVar5;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    cVar3 = QVariant::convert(param_2,(void *)0xa);
    if (cVar3 == '\0') {
      *param_1 = puVar2;
    }
    else {
      *param_1 = puVar2;
      if (1 < *(int *)puVar2 + 1U) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
      }
    }
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (*(int *)puVar2 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate((QArrayData *)puVar2,2,8);
    }
  }
  return param_1;
}

