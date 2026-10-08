
undefined8 * FUN_100ba4880(char *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  size_t sVar3;
  
  puVar1 = _malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    *(undefined4 *)puVar1 = 3;
    pcVar2 = _strdup(param_1);
    puVar1[4] = pcVar2;
    if (pcVar2 == (char *)0x0) {
      FUN_100ba3950(puVar1);
    }
    else {
      sVar3 = _strlen(param_1);
      puVar1[1] = sVar3;
    }
  }
  return puVar1;
}

