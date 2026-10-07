
void FUN_1004975e0(long param_1,QString *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_3 != 2) {
    return;
  }
  local_40 = (Data *)PTR_shared_null_100ba2188;
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x78);
  puVar3 = *(uint **)(param_1 + 0x78);
  if (1 < *puVar3) {
    FUN_100498ef0(puVar1);
    puVar3 = (uint *)*puVar1;
  }
  if (*(long *)(puVar3 + 4) == 0) {
    puVar4 = puVar3 + 2;
  }
  else {
    puVar4 = *(uint **)(puVar3 + 8);
  }
  while( true ) {
    if (1 < *puVar3) {
      FUN_100498ef0(puVar1);
      puVar3 = (uint *)*puVar1;
    }
    if (puVar4 == puVar3 + 2) break;
    cVar2 = operator==((QString *)(puVar4 + 10),param_2);
    if (cVar2 == '\0') {
      puVar4 = (uint *)QMapNodeBase::nextNode();
    }
    else {
      FUN_100036f00(&local_40,puVar4 + 8);
      puVar4 = (uint *)FUN_1004989b0(puVar1,puVar4);
    }
    puVar3 = (uint *)*puVar1;
  }
  QMutex::unlock();
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      FUN_1004c07d0(param_1 + 0x40,*(undefined8 *)local_58,0xf000001c);
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004977cf;
    }
    QListData::dispose(local_60);
  }
LAB_1004977cf:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

