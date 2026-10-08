
void FUN_100adb3f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = *(undefined8 **)(param_1 + lVar3 * 8);
    *(undefined8 *)(param_1 + lVar3 * 8) = 0;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      _free((void *)puVar1[0xd]);
      _free((void *)puVar1[0xf]);
      _free((void *)puVar1[0x11]);
      _free(puVar1);
      puVar1 = puVar2;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1,0x800);
  _free(*(void **)(param_1 + 0x808));
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined1 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  return;
}

