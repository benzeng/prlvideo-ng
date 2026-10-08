
undefined4 FUN_1009571d2(xmlDocPtr param_1,long param_2)

{
  xmlHashTablePtr table;
  xmlChar *name;
  void *pvVar1;
  undefined4 local_3c;
  
  if (param_1 == (xmlDocPtr)0x0) {
    local_3c = 0xffffffff;
  }
  else if (param_2 == 0) {
    local_3c = 0xffffffff;
  }
  else {
    table = param_1->ids;
    if (table == (xmlHashTablePtr)0x0) {
      local_3c = 0xffffffff;
    }
    else if (param_2 == 0) {
      local_3c = 0xffffffff;
    }
    else {
      name = _xmlNodeListGetString(param_1,*(xmlNodePtr *)(param_2 + 0x18),1);
      if (name == (xmlChar *)0x0) {
        local_3c = 0xffffffff;
      }
      else {
        pvVar1 = _xmlHashLookup(table,name);
        (*(code *)_xmlFree)(name);
        if ((pvVar1 == (void *)0x0) || (*(long *)((long)pvVar1 + 0x10) != param_2)) {
          local_3c = 0xffffffff;
        }
        else {
          *(undefined8 *)((long)pvVar1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)((long)pvVar1 + 0x10) = 0;
          local_3c = 0;
        }
      }
    }
  }
  return local_3c;
}

