
undefined1 FUN_100024b20(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    if (DAT_1011b55f8 < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1008e3970("","vm",2,
                    "Unable to set guest indents: Desktop Utility guest tool is not active");
    }
  }
  else {
    uVar1 = FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),0x19,param_2,param_3 * 0x18,1,0);
  }
  return uVar1;
}

