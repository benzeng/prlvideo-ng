
void FUN_100c54aa0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_1023162b0 == 0) && (DAT_1023162b0 = FUN_100c60010(), DAT_1023162b0 == 0)) {
    return;
  }
  puVar1 = (undefined8 *)FUN_100bf3540(8,"eng_lib.c",0xa8);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = param_1;
  FUN_100c600c0(DAT_1023162b0,puVar1,0);
  return;
}

