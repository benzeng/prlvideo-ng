
void FUN_1002fab50(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = FUN_1002adb30(param_1,*param_2);
  lVar1 = param_2[2];
  param_2[2] = 0;
  FUN_100305720(param_2[1],param_3);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      puVar5 = puVar3;
      puVar2 = (undefined8 *)*puVar5;
      if (puVar2 == (undefined8 *)0x0) break;
      puVar3 = puVar2 + 7;
    } while (puVar2 != param_2);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar5 = param_2[7];
    }
  }
  param_2[7] = 0;
  FUN_1002adb30(param_1,uVar4);
  return;
}

