
long FUN_100763f40(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (puVar2[2] == param_2)) {
        if (puVar2 == puVar1) {
          return 0;
        }
        if (puVar2[3] == 0) {
          return 0;
        }
        return (long)*(int *)(puVar2[3] + 0x30);
      }
    }
  }
  return 0;
}

