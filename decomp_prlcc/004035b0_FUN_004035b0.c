
void FUN_004035b0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar2 = PTR___log_level_0061bd30;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      puVar1 = (undefined8 *)(uVar4 * 0x30 + param_1);
      if (puVar1[4] != 0) {
        memset((void *)puVar1[2],0,(ulong)*(uint *)(puVar1 + 3) << 3);
        dlclose(puVar1[4]);
        puVar1[4] = 0;
        if (1 < *(int *)puVar2) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"%s functions were unloaded",*puVar1);
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while (uVar3 != param_2);
  }
  return;
}

