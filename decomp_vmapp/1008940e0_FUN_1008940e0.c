
bool FUN_1008940e0(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x1108,"bio_enc.c",0x73);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10088ae60(puVar1 + 6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 1;
    puVar1[3] = 0;
    puVar1[4] = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 **)(param_1 + 0x30) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return puVar1 != (undefined4 *)0x0;
}

