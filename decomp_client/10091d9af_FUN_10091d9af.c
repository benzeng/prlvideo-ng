
void FUN_10091d9af(undefined8 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long local_10;
  
  local_10 = 0;
  if (param_3 == (long *)0x0) {
    FUN_10091ad5a(&local_10,0,param_4,*(undefined8 *)(param_5 + 0x28));
  }
  else if (*param_3 == 0) {
    FUN_10091ad5a(param_3,0,param_4,*(undefined8 *)(param_5 + 0x28));
    local_10 = *param_3;
  }
  else {
    local_10 = *param_3;
  }
  FUN_10091bb4c(param_1,param_5,param_2,0,0,0,"%s, attribute \'%s\': %s.\n",local_10,
                *(undefined8 *)(param_5 + 0x10),param_6,0,0);
  if ((param_3 == (long *)0x0) && (local_10 != 0)) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

