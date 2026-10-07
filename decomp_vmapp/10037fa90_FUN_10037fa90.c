
undefined8 FUN_10037fa90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    uVar1 = 0x22;
    if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
      uVar1 = 0x23;
    }
    puVar2 = &DAT_100b3d750;
  }
  else {
    uVar1 = 0x28;
    puVar2 = &DAT_100b3d7e0;
  }
  *param_2 = puVar2;
  return uVar1;
}

