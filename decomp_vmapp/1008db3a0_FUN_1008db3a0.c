
bool FUN_1008db3a0(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1008db2c0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(long *)(puVar1 + 2) = param_2;
    FUN_10081d580(param_2 + 0x18,1,6,"cms_lib.c",0x21a);
  }
  return puVar1 != (undefined4 *)0x0;
}

