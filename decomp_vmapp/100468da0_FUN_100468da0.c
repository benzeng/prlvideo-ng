
undefined8 FUN_100468da0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  long lVar6;
  uint *puVar7;
  size_t sVar8;
  bool bVar9;
  ulong uVar10;
  undefined4 local_68 [2];
  void *local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  FUN_10046a180(param_2,&local_48);
  pvVar4 = pvStack_40;
  pvVar3 = local_48;
  puVar5 = (undefined4 *)0x0;
  uVar10 = (long)pvStack_40 + (8 - (long)local_48) & 0xffffffff;
  if (uVar10 != 0) {
    puVar5 = operator_new(uVar10);
    ___bzero(puVar5,uVar10);
  }
  *puVar5 = 0;
  sVar8 = (long)pvVar4 - (long)pvVar3;
  puVar5[1] = (int)sVar8;
  if (sVar8 != 0) {
    _memcpy(puVar5 + 2,pvVar3,sVar8);
  }
  local_50 = 0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  local_68[0] = FUN_10046a270(param_2);
  if ((ulong)((long)local_58 - (long)local_60) < uVar10) {
    FUN_10005a320(&local_60);
  }
  else if ((uVar10 < (ulong)((long)local_58 - (long)local_60)) &&
          (local_58 != (void *)((long)local_60 + uVar10))) {
    local_58 = (void *)((long)local_60 + uVar10);
  }
  _memcpy(local_60,puVar5,uVar10);
  QMutex::lock();
  bVar9 = true;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) == 0) {
    FUN_100469980(puVar1,local_68);
  }
  else {
    FUN_100469980(puVar1,local_68);
    lVar6 = FUN_1002a6010(*(undefined8 *)(param_1 + 0x48));
    puVar7 = (uint *)*puVar1;
    if (1 < *puVar7) {
      FUN_100469720(puVar1,puVar7[1]);
      puVar7 = (uint *)*puVar1;
    }
    *(int *)(lVar6 + 0xc) =
         *(int *)(*(long *)(puVar7 + (long)(int)puVar7[2] * 2 + 4) + 0x10) -
         *(int *)(*(long *)(puVar7 + (long)(int)puVar7[2] * 2 + 4) + 8);
    if (1 < *puVar7) {
      FUN_100469720(puVar1,puVar7[1]);
      puVar7 = (uint *)*puVar1;
    }
    *(undefined4 *)(lVar6 + 8) = **(undefined4 **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    QMutex::unlock();
    bVar9 = false;
    FUN_1004c07d0(param_1 + 0x10,uVar2,0);
  }
  if (bVar9) {
    QMutex::unlock();
  }
  if (local_60 != (void *)0x0) {
    if (local_58 != local_60) {
      local_58 = local_60;
    }
    operator_delete(local_60);
  }
  if (puVar5 != (undefined4 *)0x0) {
    operator_delete(puVar5);
  }
  if (local_48 != (void *)0x0) {
    if (pvStack_40 != local_48) {
      pvStack_40 = local_48;
    }
    operator_delete(local_48);
  }
  return 1;
}

