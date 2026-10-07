
void FUN_1001ea330(undefined8 param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                  xmlChar *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long local_40;
  long local_18;
  xmlChar *local_10;
  
  local_18 = 0;
  local_10 = (xmlChar *)0x0;
  FUN_1001ea2b7(&local_18,param_3,param_4,param_5);
  local_10 = _xmlStrdup((xmlChar *)"%s: ");
  local_10 = _xmlStrcat(local_10,param_6);
  local_10 = _xmlStrcat(local_10,(xmlChar *)".\n");
  local_40 = param_5;
  if ((param_5 == 0) && (param_4 != 0)) {
    local_40 = *(long *)(param_4 + 0x48);
  }
  FUN_1001e8224(param_1,local_40,param_2,0,0,0,local_10,local_18,param_7,param_8,param_9,0);
  if ((param_3 == 0) && (local_18 != 0)) {
    (*(code *)_xmlFree)(local_18);
    local_18 = 0;
  }
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

