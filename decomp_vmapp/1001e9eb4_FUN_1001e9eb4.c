
void FUN_1001e9eb4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long local_10;
  
  local_10 = 0;
  FUN_1001e7432(&local_10,0,param_3,param_4);
  if (param_6 == 0) {
    FUN_1001e80a3(param_1,param_4,param_2,"%s: The attribute \'%s\' is required but missing.\n",
                  local_10,param_5);
  }
  else {
    FUN_1001e80a3(param_1,param_4,param_2,"%s: %s.\n",local_10,param_6);
  }
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

