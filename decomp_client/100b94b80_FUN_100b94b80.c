
void FUN_100b94b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

