
char * FUN_10014ad50(long param_1,uint param_2)

{
  _sprintf((char *)(param_1 + 0xc),"%d.%d.%d.%d",(ulong)(param_2 >> 0x18),
           (ulong)(param_2 >> 0x10 & 0xff),(ulong)(param_2 >> 8 & 0xff),(ulong)(param_2 & 0xff));
  return (char *)(param_1 + 0xc);
}

