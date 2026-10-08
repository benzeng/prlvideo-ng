
bool FUN_100c42b10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x10,"ec_pmeth.c",0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 0x28) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}

