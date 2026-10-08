
bool FUN_100c4f600(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0x20,"dsa_pmeth.c",0x54);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x400;
    puVar2[1] = 0xa0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
  }
  return puVar2 != (undefined4 *)0x0;
}

