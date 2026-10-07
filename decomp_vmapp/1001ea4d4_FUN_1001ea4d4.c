
void FUN_1001ea4d4(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  xmlChar *param_5,undefined8 param_6)

{
  xmlChar *add;
  xmlChar *local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = (xmlChar *)0x0;
  FUN_1001e7432(&local_18,0,param_3,0);
  local_18 = _xmlStrcat(local_18,(xmlChar *)", ");
  add = (xmlChar *)FUN_1001e7432(&local_10,0,param_4,0);
  local_18 = _xmlStrcat(local_18,add);
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
    local_10 = 0;
  }
  local_18 = _xmlStrcat(local_18,(xmlChar *)": ");
  local_18 = _xmlStrcat(local_18,param_5);
  local_18 = _xmlStrcat(local_18,(xmlChar *)".\n");
  FUN_1001e80a3(param_1,*(undefined8 *)(param_4 + 0x68),param_2,local_18,param_6,0);
  (*(code *)_xmlFree)(local_18);
  return;
}

