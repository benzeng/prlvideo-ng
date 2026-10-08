
bool FUN_100cb7be0(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100cb7b00();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(long *)(puVar1 + 2) = param_2;
    FUN_100bf2cf0(param_2 + 0x18,1,6,"cms_lib.c",0x21a);
  }
  return puVar1 != (undefined4 *)0x0;
}

