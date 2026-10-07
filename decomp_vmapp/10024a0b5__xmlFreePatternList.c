
void _xmlFreePatternList(long param_1)

{
  long lVar1;
  undefined8 local_20;
  
  local_20 = param_1;
  while (local_20 != 0) {
    lVar1 = *(long *)(local_20 + 0x10);
    *(undefined8 *)(local_20 + 0x10) = 0;
    _xmlFreePattern(local_20);
    local_20 = lVar1;
  }
  return;
}

