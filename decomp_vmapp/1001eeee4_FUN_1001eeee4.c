
void * FUN_1001eeee4(long param_1,long param_2)

{
  undefined8 local_20;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x28) == 0) {
    local_20 = (void *)0x0;
  }
  else {
    local_20 = _xmlHashLookup2(*(xmlHashTablePtr *)(*(long *)(param_1 + 0x30) + 0x28),
                               *(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_2 + 0x60));
  }
  return local_20;
}

