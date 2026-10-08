
bool FUN_10031ae60(long param_1)

{
  char cVar1;
  undefined7 in_register_00000001;
  int local_14;
  
  local_14 = (int)((uint7)in_register_00000001 >> 0x18);
  cVar1 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_14,0);
  return cVar1 != '\0' && local_14 == 0;
}

