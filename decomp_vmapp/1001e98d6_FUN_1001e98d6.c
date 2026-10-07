
void FUN_1001e98d6(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7,xmlChar *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  xmlChar *add;
  undefined8 uVar1;
  char local_68 [32];
  char local_48 [40];
  xmlChar *local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_20 = (xmlChar *)0x0;
  local_c = FUN_1001e9004(param_1,param_3);
  FUN_1001e8830(&local_20,param_1,param_3);
  if (param_2 == 0x730) {
    local_10 = 0x3ef;
  }
  else {
    local_10 = *param_7;
  }
  local_20 = _xmlStrcat(local_20,(xmlChar *)"[");
  local_20 = _xmlStrcat(local_20,(xmlChar *)"facet \'");
  add = (xmlChar *)FUN_100208cf9(local_10);
  local_20 = _xmlStrcat(local_20,add);
  local_20 = _xmlStrcat(local_20,(xmlChar *)"\'] ");
  if (param_8 == (xmlChar *)0x0) {
    if (((local_10 == 0x3f1) || (local_10 == 0x3f3)) || (local_10 == 0x3f2)) {
      if (local_c == 2) {
        local_20 = _xmlStrcat(local_20,(xmlChar *)"The value \'%s\' has a length of \'%s\'; ");
      }
      else {
        local_20 = _xmlStrcat(local_20,(xmlChar *)"The value has a length of \'%s\'; ");
      }
      uVar1 = _xmlSchemaGetFacetValueAsULong(param_7);
      _snprintf(local_48,0x18,"%lu",uVar1);
      _snprintf(local_68,0x18,"%lu",param_5);
      if (local_10 == 0x3f1) {
        local_20 = _xmlStrcat(local_20,(xmlChar *)
                                       "this differs from the allowed length of \'%s\'.\n");
      }
      else if (local_10 == 0x3f2) {
        local_20 = _xmlStrcat(local_20,(xmlChar *)
                                       "this exceeds the allowed maximum length of \'%s\'.\n");
      }
      else if (local_10 == 0x3f3) {
        local_20 = _xmlStrcat(local_20,(xmlChar *)
                                       "this underruns the allowed minimum length of \'%s\'.\n");
      }
      if (local_c == 2) {
        FUN_1001e877e(param_1,param_2,param_3,local_20,param_4,local_68,local_48);
      }
      else {
        FUN_1001e87dd(param_1,param_2,param_3,local_20,local_68,local_48);
      }
    }
    else if (local_10 == 0x3ef) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' is not an element of the set {%s}.\n");
      uVar1 = FUN_1001e7e90(param_1,&local_18,param_6);
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,uVar1);
    }
    else if (local_10 == 0x3ee) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' is not accepted by the pattern \'%s\'.\n");
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 1000) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' is less than the minimum value allowed (\'%s\').\n"
                           );
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 0x3ea) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' is greater than the maximum value allowed (\'%s\').\n"
                           );
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 0x3e9) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)"The value \'%s\' must be less than \'%s\'.\n");
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 0x3eb) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)"The value \'%s\' must be more than \'%s\'.\n");
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 0x3ec) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' has more digits than are allowed (\'%s\').\n"
                           );
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_10 == 0x3ed) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)
                                     "The value \'%s\' has more fractional digits than are allowed (\'%s\').\n"
                           );
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,*(undefined8 *)(param_7 + 4));
    }
    else if (local_c == 2) {
      local_20 = _xmlStrcat(local_20,(xmlChar *)"The value \'%s\' is not facet-valid.\n");
      FUN_1001e87dd(param_1,param_2,param_3,local_20,param_4,0);
    }
    else {
      local_20 = _xmlStrcat(local_20,(xmlChar *)"The value is not facet-valid.\n");
      FUN_1001e87dd(param_1,param_2,param_3,local_20,0,0);
    }
  }
  else {
    local_20 = _xmlStrcat(local_20,param_8);
    local_20 = _xmlStrcat(local_20,(xmlChar *)".\n");
    FUN_1001e87dd(param_1,param_2,param_3,local_20,param_9,param_10);
  }
  if (local_18 != 0) {
    (*(code *)_xmlFree)(local_18);
    local_18 = 0;
  }
  (*(code *)_xmlFree)(local_20);
  return;
}

