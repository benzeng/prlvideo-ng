
undefined8
FUN_1002dc420(long param_1,char param_2,int param_3,undefined8 param_4,byte param_5,ushort *param_6,
             int *param_7)

{
  long lVar1;
  
  if ((char)param_3 == '\0') {
    if (-1 < param_2) {
      return 0x20;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x40 + (ulong)param_5 * 8);
    if (lVar1 == 0) {
      return 0x20;
    }
    if (*param_7 != 2) {
      return 0x20;
    }
    *param_6 = (ushort)(*(int *)(lVar1 + 0xbc) != 0);
  }
  else {
    if ((param_3 != 1) && (param_3 != 3)) {
      return 0x20;
    }
    if (param_2 < '\0') {
      return 0x20;
    }
  }
  return 0;
}

