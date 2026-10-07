
void FUN_100724b20(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
  }
  return;
}

