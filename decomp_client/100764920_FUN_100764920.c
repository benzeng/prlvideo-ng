
undefined8 FUN_100764920(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar2 = 0;
  if (*(int *)((long)puVar1 + 0x14) != 0) {
    puVar5 = puVar1;
    if (*(uint *)(puVar1 + 4) != 0) {
      uVar4 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
      for (puVar3 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          (puVar5 = puVar1, puVar3 != puVar1 &&
          ((*(uint *)(puVar3 + 1) != uVar4 || (puVar5 = puVar3, puVar3[2] != param_2))));
          puVar3 = (undefined8 *)*puVar3) {
      }
    }
    puVar3 = &local_10;
    if (puVar5 != puVar1) {
      puVar3 = puVar5 + 3;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}

