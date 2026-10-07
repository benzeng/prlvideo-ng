
bool FUN_10082a4e0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x140,"hm_pmeth.c",0x4e);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 4;
    FUN_100829f90(puVar1 + 4);
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}

