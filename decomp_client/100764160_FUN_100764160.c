
void FUN_100764160(long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  if ((((param_4 == 0x3000000a) || (param_4 == 0x3000000f)) &&
      (puVar1 = *(undefined8 **)(param_1 + 0x20), *(int *)((long)puVar1 + 0x14) != 0)) &&
     (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (puVar2[2] == param_2)) {
        if (puVar2 == puVar1) {
          return;
        }
        if (puVar2[3] == 0) {
          return;
        }
        FUN_100763b60();
        return;
      }
    }
  }
  return;
}

