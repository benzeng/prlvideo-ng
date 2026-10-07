
void FUN_1000a3b00(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  *(undefined8 *)(param_1 + 0x1938) = 0;
  puVar1 = *(uint **)(param_1 + 0x1158);
  uVar4 = puVar1[1];
  if (*puVar1 < puVar1[1]) {
    uVar4 = *puVar1;
  }
  if (uVar4 != 0) {
    puVar2 = puVar1 + 0x14;
    do {
      if (((*(byte *)((long)puVar2 + -0x22) & 1) == 0) &&
         ((*(long *)(puVar2 + -2) != 0 || (*(long *)puVar2 != 0)))) {
        FUN_1000a6580(param_1,puVar2 + -0xc);
        if ((puVar2[-9] & 2) == 0) {
          if ((short)puVar2[-0xb] == 0) {
            uVar4 = puVar2[-7];
            if (puVar2[-7] < puVar2[-8]) {
              uVar4 = puVar2[-8];
            }
            FUN_100544ef0(*(undefined8 *)puVar2,uVar4 + 0xfff & 0xfffff000);
          }
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x1950) + 0x88))
                    (*(long **)(param_1 + 0x1950),puVar2 + -0xc);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2[0] = 0;
        puVar2[1] = 0;
        puVar1 = *(uint **)(param_1 + 0x1158);
      }
      uVar4 = puVar1[1];
      if (*puVar1 < puVar1[1]) {
        uVar4 = *puVar1;
      }
      puVar3 = puVar2 + 4;
      puVar2 = puVar2 + 0x10;
    } while (puVar3 != puVar1 + (ulong)uVar4 * 0x10 + 8);
  }
  return;
}

