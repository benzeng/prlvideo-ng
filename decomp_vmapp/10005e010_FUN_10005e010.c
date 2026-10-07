
undefined1 FUN_10005e010(long param_1,undefined4 param_2,QString *param_3,undefined8 *param_4)

{
  QString *pQVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  QString local_50;
  undefined8 local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  puVar3 = *(uint **)(param_1 + 0x48);
  puVar4 = (undefined8 *)(param_1 + 0x48);
  local_38 = param_2;
  if (1 < *puVar3) {
    FUN_10005fb00(puVar4,puVar3[1]);
    puVar3 = (uint *)*puVar4;
  }
  puVar5 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar3) {
      FUN_10005fb00(puVar4,puVar3[1]);
      puVar3 = (uint *)*puVar4;
    }
    if (puVar5 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
    pQVar1 = *(QString **)puVar5;
    cVar2 = operator==(pQVar1,param_3);
    if (cVar2 != '\0') {
      FUN_10003cd80(pQVar1 + 2,&local_38);
      return 0;
    }
    puVar5 = puVar5 + 2;
    puVar3 = (uint *)*puVar4;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_48 = 0;
  local_40 = (Data *)PTR_shared_null_100ba2188;
  QString::operator=(&local_50,param_3);
  local_48 = *param_4;
  FUN_10003cd80(&local_40,&local_38);
  FUN_10005f450(puVar4,&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005e124;
    }
    QListData::dispose(local_40);
  }
LAB_10005e124:
  if (*(int *)local_50.field0_0x0 == -1) {
    return 1;
  }
  if (*(int *)local_50.field0_0x0 != 0) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_50.field0_0x0 != 0) {
      return 1;
    }
    local_31 = 0;
  }
  QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  return 1;
}

