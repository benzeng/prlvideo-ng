
void FUN_100ac5ee0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0xaf0);
  puVar2 = *(uint **)(param_1 + 0xaf0);
  if (1 < *puVar2) {
    FUN_100ac86d0(plVar1);
    puVar2 = (uint *)*plVar1;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar3 = puVar2 + 2;
  }
  else {
    puVar3 = *(uint **)(puVar2 + 8);
  }
  if (1 < *puVar2) {
    FUN_100ac86d0(plVar1);
    puVar2 = (uint *)*plVar1;
  }
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  if (puVar3 != puVar2 + 2) {
    do {
      puVar2 = (uint *)QMapNodeBase::nextNode();
      if ((((puVar3[8] == uVar4) && (puVar3[7] == (uint)param_3)) &&
          (puVar3 != (uint *)(*plVar1 + 8))) &&
         (puVar2 = (uint *)FUN_100ac8810(plVar1,puVar3), 1 < *(uint *)*plVar1)) {
        FUN_100ac86d0(plVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)(*plVar1 + 8));
  }
  plVar1 = (long *)(param_1 + 0xaf8);
  puVar2 = *(uint **)(param_1 + 0xaf8);
  if (1 < *puVar2) {
    FUN_100ac86d0(plVar1);
    puVar2 = (uint *)*plVar1;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar3 = puVar2 + 2;
  }
  else {
    puVar3 = *(uint **)(puVar2 + 8);
  }
  if (1 < *puVar2) {
    FUN_100ac86d0(plVar1);
    puVar2 = (uint *)*plVar1;
  }
  if (puVar3 != puVar2 + 2) {
    do {
      puVar2 = (uint *)QMapNodeBase::nextNode();
      if (((puVar3[8] == uVar4) && (puVar3[7] == (uint)param_3)) &&
         ((puVar3 != (uint *)(*plVar1 + 8) &&
          (puVar2 = (uint *)FUN_100ac8810(plVar1,puVar3), 1 < *(uint *)*plVar1)))) {
        FUN_100ac86d0(plVar1);
      }
      puVar3 = puVar2;
    } while (puVar3 != (uint *)(*plVar1 + 8));
  }
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_32 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_100ad8300(param_1,&local_40,param_3);
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

