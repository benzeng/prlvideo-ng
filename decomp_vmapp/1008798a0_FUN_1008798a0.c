
void FUN_1008798a0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_1011c0870 == 0) && (DAT_1011c0870 = FUN_100884e10(), DAT_1011c0870 == 0)) {
    return;
  }
  puVar1 = (undefined8 *)FUN_10081ddd0(8,"eng_lib.c",0xa8);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = param_1;
  FUN_100884ec0(DAT_1011c0870,puVar1,0);
  return;
}

