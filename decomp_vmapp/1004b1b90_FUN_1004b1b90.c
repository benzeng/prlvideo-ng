
void FUN_1004b1b90(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (*param_2 != 0) {
    puVar2 = param_2 + 1;
    uVar1 = 0;
    do {
      FUN_1004b8f00(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20),puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 9;
    } while (uVar1 < *param_2);
  }
  return;
}

