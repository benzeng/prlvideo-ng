
void FUN_10091cd86(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  local_18 = 0;
  FUN_10091c158(&local_10,param_1,param_4);
  local_10 = _xmlStrcat(local_10,(xmlChar *)"The attribute \'%s\' is not allowed.\n");
  uVar1 = FUN_10091cceb(&local_18,param_3,param_4);
  FUN_10091c105(param_1,param_2,param_4,local_10,uVar1,0);
  if (local_18 != 0) {
    (*(code *)_xmlFree)(local_18);
    local_18 = 0;
  }
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

