
long * FUN_1004c3c10(long *param_1,long param_2,long param_3,ushort param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(uint **)(param_2 + 0x28);
  puVar4 = (undefined8 *)(param_2 + 0x28);
  if (1 < *puVar2) {
    FUN_1004c35a0(puVar4,puVar2[1]);
    puVar2 = (uint *)*puVar4;
  }
  puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  *param_1 = (long)puVar3;
  if ((0x1f < param_4) && (iVar1 = *(int *)(param_3 + 0x10), iVar1 != 0)) {
    while( true ) {
      if (1 < *puVar2) {
        FUN_1004c35a0(puVar4,puVar2[1]);
        puVar2 = (uint *)*puVar4;
      }
      if ((puVar3 == puVar2 + (long)(int)puVar2[3] * 2 + 4) ||
         (*(int *)(*(long *)puVar3 + 4) == iVar1)) break;
      puVar3 = puVar3 + 2;
      *param_1 = (long)puVar3;
    }
  }
  return param_1;
}

