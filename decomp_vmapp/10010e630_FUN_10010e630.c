
void FUN_10010e630(char *param_1,uint param_2)

{
  *param_1 = '\0';
  _sprintf(param_1,"%c%c%c%c",(ulong)(param_2 >> 0x18),(ulong)(param_2 >> 0x10),
           (ulong)(param_2 >> 8),(ulong)param_2);
  return;
}

