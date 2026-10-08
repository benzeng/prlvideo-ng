
void FUN_100adc520(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  do {
    for (puVar2 = *(undefined8 **)(param_1 + lVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      *(undefined1 *)((long)puVar2 + 0x54) = 0;
    }
    for (puVar2 = *(undefined8 **)(param_1 + 8 + lVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      *(undefined1 *)((long)puVar2 + 0x54) = 0;
    }
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x100);
  return;
}

