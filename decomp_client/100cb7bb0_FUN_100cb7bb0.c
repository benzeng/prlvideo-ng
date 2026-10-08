
bool FUN_100cb7bb0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100cb7b00();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = param_2;
  }
  return puVar1 != (undefined4 *)0x0;
}

