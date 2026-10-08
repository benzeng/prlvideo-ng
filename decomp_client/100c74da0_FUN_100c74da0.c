
undefined8 * FUN_100c74da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x28,"a_object.c",0x15a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 1;
    return puVar1;
  }
  FUN_100c62ee0(0xd,0x7b,0x41,"a_object.c",0x15c);
  return (undefined8 *)0x0;
}

