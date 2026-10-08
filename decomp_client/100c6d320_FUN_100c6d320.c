
undefined4 * FUN_100c6d320(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x38,"p_lib.c",0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 1;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[10] = 1;
    return puVar1;
  }
  FUN_100c62ee0(6,0x6a,0x41,"p_lib.c",0xb6);
  return (undefined4 *)0x0;
}

