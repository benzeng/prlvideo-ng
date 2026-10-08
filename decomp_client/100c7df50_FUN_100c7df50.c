
undefined8 * FUN_100c7df50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x48,"x_info.c",0x45);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 1;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    return puVar1;
  }
  FUN_100c62ee0(0xd,0xaa,0x41,"x_info.c",0x47);
  return (undefined8 *)0x0;
}

