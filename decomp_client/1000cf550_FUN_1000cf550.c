
ulong FUN_1000cf550(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(uint **)(param_1 + 0x58);
  if ((int)puVar1[2] < (int)puVar1[3]) {
    puVar4 = (undefined8 *)(param_1 + 0x58);
    uVar3 = 0;
    do {
      if (1 < *puVar1) {
        FUN_1000e6e10(puVar4,puVar1[1]);
        puVar1 = (uint *)*puVar4;
      }
      uVar2 = puVar1[2];
      if ((*(int *)(*(long *)(puVar1 + (uVar3 + (long)(int)uVar2) * 2 + 4) + 0x30) == *param_2) &&
         (*(int *)(*(long *)(puVar1 + (uVar3 + (long)(int)uVar2) * 2 + 4) + 0x34) == param_2[1])) {
        if ((int)uVar3 < 0) {
          return 0xffffffff;
        }
        if (1 < *puVar1) {
          FUN_1000e6e10(puVar4,puVar1[1]);
          puVar1 = (uint *)*puVar4;
          uVar2 = puVar1[2];
        }
        if (*(int *)(*(long *)(*(long *)(puVar1 + ((long)(int)uVar3 + (long)(int)uVar2) * 2 + 4) +
                              0x38) + 0xc) ==
            *(int *)(*(long *)(*(long *)(puVar1 + ((long)(int)uVar3 + (long)(int)uVar2) * 2 + 4) +
                              0x38) + 8)) {
          return 0xffffffff;
        }
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)puVar1[3] - (long)(int)uVar2);
  }
  return 0xffffffff;
}

