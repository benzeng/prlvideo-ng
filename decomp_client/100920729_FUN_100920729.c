
long FUN_100920729(long param_1,xmlChar *param_2)

{
  int iVar1;
  long local_10;
  
  if ((param_1 != 0) && (param_2 != (xmlChar *)0x0)) {
    for (local_10 = *(long *)(param_1 + 0x58); local_10 != 0; local_10 = *(long *)(local_10 + 0x30))
    {
      if ((*(long *)(local_10 + 0x48) == 0) &&
         (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),param_2), iVar1 != 0)) {
        return local_10;
      }
    }
  }
  return 0;
}

