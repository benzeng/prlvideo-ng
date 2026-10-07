
undefined8 * FUN_10084b520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x18,"bn_lib.c",0x110);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x14) = 1;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    return puVar1;
  }
  FUN_100887ce0(3,0x71,0x41,"bn_lib.c",0x111);
  return (undefined8 *)0x0;
}

