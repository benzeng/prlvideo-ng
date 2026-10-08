
undefined8 * FUN_100714f80(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  QString *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_10055a620(&local_50);
  local_48 = (undefined8 *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
  local_40 = (undefined8 *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      pQVar1 = (QString *)*local_48;
      cVar5 = operator==(pQVar1,param_3);
      if (cVar5 != '\0') {
        pQVar2 = pQVar1->field0_0x0;
        *param_1 = pQVar2;
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        pQVar2 = pQVar1[1].field0_0x0;
        param_1[1] = pQVar2;
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        FUN_1000ff290(param_1 + 2,pQVar1 + 2);
        FUN_1000fe670(&local_50);
        return param_1;
      }
      local_48 = local_48 + 1;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  FUN_1000fe670(&local_50);
  puVar4 = PTR_shared_null_1021e15e8;
  puVar3 = PTR_shared_null_1021e1288;
  local_58 = PTR_shared_null_1021e1288;
  local_60 = PTR_shared_null_1021e1288;
  local_68 = PTR_shared_null_1021e15e8;
  FUN_1005819a0(param_1,&local_58,&local_60,&local_68);
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_29 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071505f;
    }
    FUN_1000feb90(&local_68,PTR_shared_null_1021e15e8);
  }
LAB_10071505f:
  if (*(int *)puVar3 == -1) {
    return param_1;
  }
  if (*(int *)puVar3 != 0) {
    LOCK();
    *(int *)puVar3 = *(int *)puVar3 + -1;
    local_29 = *(int *)puVar3 != 0;
    UNLOCK();
    if ((bool)local_29) goto LAB_100715096;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_100715096:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

