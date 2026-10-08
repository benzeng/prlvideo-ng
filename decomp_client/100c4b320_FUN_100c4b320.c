
undefined8 FUN_100c4b320(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0x40,"rsa_pmeth.c",99);
  uVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x400;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[6] = 1;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[0xc] = 0xfffffffe;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    if (*(long *)(puVar1 + 2) != 0) {
      lVar3 = FUN_100c26a40();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    puVar2[6] = puVar1[6];
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
    uVar4 = 1;
  }
  return uVar4;
}

