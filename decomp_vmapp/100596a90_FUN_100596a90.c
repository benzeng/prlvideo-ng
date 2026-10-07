
bool FUN_100596a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10070ade0();
  param_1[4] = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1008e3970("Compact","vdisk",0,"[%p]Error: dio for move allocation failed",*param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)((long)puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = param_1;
    *puVar1 = param_1[7];
    puVar1[9] = FUN_100596b10;
  }
  return puVar1 != (undefined8 *)0x0;
}

