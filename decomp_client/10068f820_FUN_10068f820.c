
undefined8 * FUN_10068f820(undefined8 *param_1,long *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  *param_1 = PTR_shared_null_1021e15e8;
  puVar1 = (undefined8 *)*param_2;
  if (*(uint *)(puVar1 + 4) == 0) {
    return param_1;
  }
  uVar2 = *param_3;
  uVar3 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)((long)puVar1 + 0x24);
  puVar4 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
  while( true ) {
    if (puVar4 == puVar1) {
      return param_1;
    }
    if ((*(uint *)(puVar4 + 1) == uVar3) && (uVar2 == puVar4[2])) break;
    puVar4 = (undefined8 *)*puVar4;
  }
  if (puVar4 == puVar1) {
    return param_1;
  }
  do {
    FUN_1000630f0(param_1,puVar4 + 3);
    puVar4 = (undefined8 *)*puVar4;
    if (puVar4 == (undefined8 *)*param_2) {
      return param_1;
    }
  } while (puVar4[2] == *param_3);
  return param_1;
}

