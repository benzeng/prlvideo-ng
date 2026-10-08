
int FUN_100796670(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (*(uint *)(puVar3 + 4) == 0) {
    return 0;
  }
  uVar6 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar3 + 0x24);
  puVar5 = *(undefined8 **)(puVar3[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar3 + 4)) * 8);
  puVar4 = puVar5;
  while( true ) {
    if (puVar4 == puVar3) {
      return 0;
    }
    if ((*(uint *)(puVar4 + 1) == uVar6) && (puVar4[2] == param_2)) break;
    puVar4 = (undefined8 *)*puVar4;
  }
  if (puVar4 == puVar3) {
    return 0;
  }
  if (*(int *)((long)puVar3 + 0x14) != 0) {
    do {
      if ((*(uint *)(puVar5 + 1) == uVar6) && (puVar5[2] == param_2)) {
        if (puVar5 != puVar3) {
          FUN_100797cb0(&local_28,puVar5 + 3);
          goto LAB_10079671b;
        }
        break;
      }
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != puVar3);
  }
  local_28 = (int *)PTR_shared_null_1021e15e8;
LAB_10079671b:
  iVar1 = local_28[3];
  iVar2 = local_28[2];
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      if (*local_28 != 0) {
        return iVar1 - iVar2;
      }
      local_19 = 0;
    }
    FUN_100797e40(&local_28,local_28);
  }
  return iVar1 - iVar2;
}

