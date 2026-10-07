
int _xmlAutomataNewCounter(xmlAutomataPtr am,int min,int max)

{
  int local_2c;
  
  if (am == (xmlAutomataPtr)0x0) {
    local_2c = -1;
  }
  else {
    local_2c = FUN_1001d9cfc(am);
    if (local_2c < 0) {
      local_2c = -1;
    }
    else {
      *(int *)(*(long *)(am + 0x60) + (long)local_2c * 8) = min;
      *(int *)(*(long *)(am + 0x60) + (long)local_2c * 8 + 4) = max;
    }
  }
  return local_2c;
}

