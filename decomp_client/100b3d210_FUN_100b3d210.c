
undefined8 FUN_100b3d210(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)*param_1;
  if (1 < *puVar1) {
    FUN_100b467c0(param_1,puVar1[1]);
    puVar1 = (uint *)*param_1;
  }
  puVar2 = puVar1 + (long)(int)puVar1[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar1) {
      FUN_100b467c0(param_1,puVar1[1]);
      puVar1 = (uint *)*param_1;
    }
    if (puVar2 == puVar1 + (long)(int)puVar1[3] * 2 + 4) break;
    if (((*(byte *)(*(long *)puVar2 + 0x1b) & 0x10) == 0) &&
       (*(char *)(*(long *)puVar2 + 0x30) != '\0')) {
      *param_2 = puVar2;
      return 0;
    }
    puVar2 = puVar2 + 2;
  }
  return 0x80004006;
}

