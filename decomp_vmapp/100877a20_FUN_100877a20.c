
bool FUN_100877a20(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_10081ddd0(0x14,"dh_pmeth.c",0x53);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x400;
    puVar2[1] = 2;
    puVar2[2] = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 3;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
  }
  return puVar2 != (undefined4 *)0x0;
}

