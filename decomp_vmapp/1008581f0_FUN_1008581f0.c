
undefined4 * FUN_1008581f0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    lVar1 = FUN_10084b950(param_1 + 2,param_2 + 2);
    puVar2 = (undefined4 *)0x0;
    if (lVar1 != 0) {
      lVar1 = FUN_10084b950(param_1 + 8,param_2 + 8);
      puVar2 = (undefined4 *)0x0;
      if (lVar1 != 0) {
        lVar1 = FUN_10084b950(param_1 + 0xe,param_2 + 0xe);
        puVar2 = (undefined4 *)0x0;
        if (lVar1 != 0) {
          *param_1 = *param_2;
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
          *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
          puVar2 = param_1;
        }
      }
    }
  }
  return puVar2;
}

