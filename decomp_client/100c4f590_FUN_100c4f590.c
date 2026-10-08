
bool FUN_100c4f590(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x20,"dsa_pmeth.c",0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x400;
    puVar1[1] = 0xa0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
    *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return puVar1 != (undefined4 *)0x0;
}

