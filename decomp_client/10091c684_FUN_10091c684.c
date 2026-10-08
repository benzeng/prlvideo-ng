
void FUN_10091c684(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  xmlChar *param_5,undefined8 param_6,undefined8 param_7)

{
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  FUN_10091c158(&local_10,param_1,param_3);
  local_10 = _xmlStrcat(local_10,param_5);
  local_10 = _xmlStrcat(local_10,(xmlChar *)".\n");
  FUN_10091c105(param_1,param_2,param_3,local_10,param_6,param_7,param_6,param_5,param_4);
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

