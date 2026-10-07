
undefined8 FUN_10037f9a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    uVar1 = 0x18;
    if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
      uVar1 = 0x19;
    }
    puVar2 = &DAT_1011189d0;
  }
  else {
    uVar1 = 0x1d;
    puVar2 = &DAT_101118a40;
  }
  *param_2 = puVar2;
  return uVar1;
}

