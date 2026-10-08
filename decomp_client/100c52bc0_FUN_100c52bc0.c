
bool FUN_100c52bc0(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x14,"dh_pmeth.c",0x53);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x400;
    puVar1[1] = 2;
    puVar1[2] = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
    *(undefined4 **)(param_1 + 0x40) = puVar1 + 3;
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return puVar1 != (undefined4 *)0x0;
}

