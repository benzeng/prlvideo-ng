
undefined8
FUN_1002dce10(long param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
             undefined2 param_5,undefined8 param_6,undefined4 *param_7)

{
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] Class specific device request %02x %02x %04x %04x %d",
                  *(long *)(param_1 + 8) + 0x838,param_2,param_3,param_4,param_5,*param_7);
  }
  return 0x20;
}

