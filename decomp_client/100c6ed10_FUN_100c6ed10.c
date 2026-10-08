
bool FUN_100c6ed10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0xa5c,"bio_b64.c",0x76);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    *(undefined4 *)((long)puVar1 + 0x14) = 1;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}

