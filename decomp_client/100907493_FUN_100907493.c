
undefined8 FUN_100907493(xmlHashTablePtr param_1,xmlChar *param_2)

{
  void *pvVar1;
  undefined8 local_30;
  
  if (param_1 == (xmlHashTablePtr)0x0) {
    local_30 = 0;
  }
  else {
    pvVar1 = _xmlHashLookup(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      local_30 = 0;
    }
    else if (*(int *)((long)pvVar1 + 0x18) == 0xd) {
      local_30 = *(undefined8 *)((long)pvVar1 + 0x30);
    }
    else {
      local_30 = 0;
    }
  }
  return local_30;
}

