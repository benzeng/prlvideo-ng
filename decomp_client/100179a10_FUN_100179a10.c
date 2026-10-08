
uint * FUN_100179a10(undefined8 *param_1,byte *param_2,long param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100179ad0(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
    uVar3 = 1;
  }
  else {
    puVar5 = (uint *)0x0;
    puVar1 = *(uint **)(puVar4 + 4);
    do {
      while (puVar4 = puVar1, *param_2 <= (byte)puVar4[6]) {
        puVar5 = puVar4;
        puVar1 = *(uint **)(puVar4 + 2);
        uVar2 = 1;
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_100179a80;
      }
      puVar1 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    uVar3 = 0;
    uVar2 = 0;
    if (puVar5 != (uint *)0x0) {
LAB_100179a80:
      uVar3 = uVar2;
      if ((byte)puVar5[6] <= *param_2) {
        FUN_1001792b0(puVar5 + 8,param_3);
        *(undefined2 *)(puVar5 + 10) = *(undefined2 *)(param_3 + 8);
        return puVar5;
      }
    }
  }
  puVar4 = (uint *)FUN_1001379d0(*param_1,param_2,param_3,puVar4,uVar3);
  return puVar4;
}

