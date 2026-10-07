
void FUN_1001e8ebf(long param_1,undefined4 param_2,long param_3,undefined8 param_4,xmlChar *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  local_18 = 0;
  local_10 = _xmlStrdup((xmlChar *)"Element \'%s\': ");
  local_10 = _xmlStrcat(local_10,param_5);
  local_10 = _xmlStrcat(local_10,(xmlChar *)".\n");
  uVar1 = FUN_1001e6d76(&local_18,
                        *(undefined8 *)
                         (**(long **)(param_1 + 0x128) + (long)*(int *)(param_3 + 0x14) * 8 + 8),
                        *(undefined8 *)
                         (**(long **)(param_1 + 0x128) + (long)*(int *)(param_3 + 0x14) * 8));
  FUN_1001e83e8(param_1,2,param_2,0,*(undefined4 *)(param_3 + 0x10),local_10,uVar1,param_6,param_7);
  if (local_18 != 0) {
    (*(code *)_xmlFree)(local_18);
    local_18 = 0;
  }
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

