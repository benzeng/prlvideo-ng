
bool FUN_1008700a0(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x40,"rsa_pmeth.c",99);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x400;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[6] = 1;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[0xc] = 0xfffffffe;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
    *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return puVar1 != (undefined4 *)0x0;
}

