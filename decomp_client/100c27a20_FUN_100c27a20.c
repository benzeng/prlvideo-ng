
undefined8 * FUN_100c27a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x40,"bn_ctx.c",0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    return puVar1;
  }
  FUN_100c62ee0(3,0x6a,0x41,"bn_ctx.c",0xda);
  return (undefined8 *)0x0;
}

