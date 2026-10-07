
void FUN_1005271d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  _free(*(void **)(param_1 + 0x810));
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  lVar3 = 0;
  do {
    puVar1 = *(undefined8 **)(param_1 + 8 + lVar3 * 8);
    *(undefined8 *)(param_1 + 8 + lVar3 * 8) = 0;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_100528500(param_1,puVar1);
      _free(puVar1);
      puVar1 = puVar2;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  FUN_100529970(param_1 + 0x828);
  FUN_100529800(param_1 + 0x830);
  FUN_100529800(param_1 + 0x838);
  FUN_100529800(param_1 + 0x840);
  *(undefined1 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x824) = 0;
  return;
}

