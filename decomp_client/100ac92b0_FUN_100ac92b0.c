
bool FUN_100ac92b0(undefined8 param_1,undefined8 param_2)

{
  int local_20;
  int local_1c;
  
  _GetFrontProcess(&local_20);
  return local_1c == (int)((ulong)param_2 >> 0x20) && local_20 == (int)param_2;
}

