
void * FUN_1008992ed(long param_1,xmlChar *param_2)

{
  undefined8 local_30;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x78) == 0)) {
    local_30 = (void *)0x0;
  }
  else {
    local_30 = _xmlHashLookup(*(xmlHashTablePtr *)(param_1 + 0x78),param_2);
  }
  return local_30;
}

