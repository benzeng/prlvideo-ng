
void FUN_10091e58d(undefined8 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long local_10;
  
  local_10 = 0;
  if (param_3 == (long *)0x0) {
    FUN_10091ad5a(&local_10,0,param_4,param_5);
  }
  else if (*param_3 == 0) {
    FUN_10091ad5a(param_3,0,param_4,param_5);
    local_10 = *param_3;
  }
  else {
    local_10 = *param_3;
  }
  if (param_7 == 0) {
    if (param_8 == 0) {
      FUN_10091bae4(param_1,param_5,param_6,param_2,"%s: The content is not valid.\n",local_10,0);
    }
    else {
      FUN_10091bae4(param_1,param_5,param_6,param_2,
                    "%s: The content is not valid. Expected is %s.\n",local_10,param_8);
    }
  }
  else {
    FUN_10091bae4(param_1,param_5,param_6,param_2,"%s: %s.\n",local_10,param_7);
  }
  if ((param_3 == (long *)0x0) && (local_10 != 0)) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

