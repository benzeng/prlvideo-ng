
uint * FUN_10044ff50(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100450000(param_1);
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
      while (puVar4 = puVar1, *param_2 <= *(ulong *)(puVar4 + 6)) {
        puVar5 = puVar4;
        puVar1 = *(uint **)(puVar4 + 2);
        uVar2 = 1;
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_10044ffbe;
      }
      puVar1 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    uVar3 = 0;
    uVar2 = 0;
    if (puVar5 != (uint *)0x0) {
LAB_10044ffbe:
      uVar3 = uVar2;
      if (*(ulong *)(puVar5 + 6) <= *param_2) {
        FUN_100450320(puVar5 + 8,param_3);
        return puVar5;
      }
    }
  }
  puVar4 = (uint *)FUN_100450150(*param_1,param_2,param_3,puVar4,uVar3);
  return puVar4;
}

