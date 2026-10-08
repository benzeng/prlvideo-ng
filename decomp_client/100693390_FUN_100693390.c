
undefined8 * FUN_100693390(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)puVar1 + 0x24);
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (puVar2[2] == param_3)) {
        if (puVar2 != puVar1) {
          FUN_100694130(param_1,puVar2 + 3);
          return param_1;
        }
        break;
      }
    }
  }
  *param_1 = PTR_shared_null_1021e15d0;
  return param_1;
}

