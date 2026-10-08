
bool FUN_100c5fd20(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x38,"bss_bio.c",0x93);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[4] = 0x4400;
    puVar1[5] = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}

