
long _xmlParseStringPEReference(long *param_1,long *param_2)

{
  long local_40;
  char *local_28;
  char local_19;
  long local_18;
  long local_10;
  
  local_10 = 0;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    local_40 = 0;
  }
  else {
    local_28 = (char *)*param_2;
    if (*local_28 == '%') {
      local_28 = local_28 + 1;
      local_19 = *local_28;
      local_18 = FUN_10087c917(param_1,&local_28);
      if (local_18 == 0) {
        FUN_100877b3f(param_1,0x44,"xmlParseStringPEReference: no name\n");
      }
      else {
        local_19 = *local_28;
        if (local_19 == ';') {
          local_28 = local_28 + 1;
          local_19 = *local_28;
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0xc0) != 0)) {
            local_10 = (**(code **)(*param_1 + 0xc0))(param_1[1],local_18);
          }
          if (local_10 == 0) {
            if (((int)param_1[6] == 1) ||
               ((*(int *)((long)param_1 + 0x8c) == 0 && ((int)param_1[0x12] == 0)))) {
              FUN_1008780de(param_1,0x1a,"PEReference: %%%s; not found\n",local_18);
            }
            else {
              FUN_100877c2c(param_1,0x1b,"PEReference: %%%s; not found\n",local_18,0);
              *(undefined4 *)(param_1 + 0x13) = 0;
            }
          }
          else if ((*(int *)(local_10 + 0x5c) != 4) && (*(int *)(local_10 + 0x5c) != 5)) {
            FUN_100877c2c(param_1,0x1b,"%%%s; is not a parameter entity\n",local_18,0);
          }
          *(undefined4 *)(param_1 + 0x12) = 1;
        }
        else {
          FUN_100877520(param_1,0x17,0);
        }
        (*(code *)_xmlFree)(local_18);
      }
    }
    *param_2 = (long)local_28;
    local_40 = local_10;
  }
  return local_40;
}

