
void FUN_1008c9bd1(long *param_1)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  local_10 = 0;
  param_1[0x27] = param_1[0x27] + 9;
  *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
  *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
  FUN_1008c47ba(param_1);
  local_18 = FUN_1008c6418(param_1);
  if (local_18 == 0) {
    FUN_1008c3ec0(param_1,0x44,"htmlParseDocTypeDecl : no DOCTYPE name !\n",0,0);
  }
  FUN_1008c47ba(param_1);
  local_10 = FUN_1008c854a(param_1,&local_20);
  FUN_1008c47ba(param_1);
  if (**(char **)(param_1[7] + 0x20) != '>') {
    FUN_1008c3ec0(param_1,0x3d,"DOCTYPE improperly terminated\n",0,0);
  }
  _xmlNextChar(param_1);
  if (((*param_1 != 0) && (*(long *)*param_1 != 0)) && (*(int *)((long)param_1 + 0x14c) == 0)) {
    (**(code **)*param_1)(param_1[1],local_18,local_20,local_10);
  }
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
  }
  if (local_20 != 0) {
    (*(code *)_xmlFree)(local_20);
  }
  return;
}

