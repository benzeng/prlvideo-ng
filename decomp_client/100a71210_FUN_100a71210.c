
undefined8 * FUN_100a71210(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong local_48;
  long local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_3;
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
  }
  local_48 = lVar3 + 0x10;
  if ((local_48 & 1) == 0) {
    QReadWriteLock::lockForRead();
    local_48 = local_48 | 1;
    lVar1 = *param_3;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0x10) + 0x28);
  local_40[0] = lVar3;
  if (lVar3 != 0) {
    do {
      local_40[0] = lVar3;
      FUN_100a717c0(param_1,local_40);
      lVar3 = *(long *)(lVar3 + 0x68);
    } while (lVar3 != 0);
    lVar1 = *param_3;
    local_40[0] = 0;
  }
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
  }
  puVar2 = *(uint **)(lVar3 + 0x18);
  if (1 < *puVar2) {
    puVar4 = (undefined8 *)(lVar3 + 0x18);
    if ((puVar2[2] & 0x7fffffff) == 0) {
      puVar2 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar4 = puVar2;
    }
    else {
      FUN_100a71c90(puVar4,puVar2[1],puVar2[2] & 0x7fffffff,0);
      puVar2 = (uint *)*puVar4;
    }
  }
  plVar5 = (long *)((long)puVar2 + *(long *)(puVar2 + 4));
  while( true ) {
    lVar3 = 0;
    if (*param_3 != 0) {
      lVar3 = *(long *)(*param_3 + 0x10);
    }
    puVar2 = *(uint **)(lVar3 + 0x18);
    if (1 < *puVar2) {
      puVar4 = (undefined8 *)(lVar3 + 0x18);
      if ((puVar2[2] & 0x7fffffff) == 0) {
        puVar2 = (uint *)QArrayData::allocate(8,8,0,2);
        *puVar4 = puVar2;
      }
      else {
        FUN_100a71c90(puVar4,puVar2[1],puVar2[2] & 0x7fffffff,0);
        puVar2 = (uint *)*puVar4;
      }
    }
    if (plVar5 == (long *)((long)puVar2 + (long)(int)puVar2[1] * 8 + *(long *)(puVar2 + 4))) break;
    lVar3 = *(long *)*plVar5;
    if (((lVar3 != 0) && (1 < *(uint *)(lVar3 + 8))) && ((char)((long *)*plVar5)[0xe] == '\0')) {
      FUN_100a717c0(param_1,plVar5);
    }
    plVar5 = plVar5 + 1;
  }
  if ((local_48 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

