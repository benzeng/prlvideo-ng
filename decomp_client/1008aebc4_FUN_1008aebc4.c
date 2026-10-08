
undefined8 FUN_1008aebc4(char *param_1,int *param_2,char *param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char *local_40;
  char *local_30;
  
  pcVar2 = param_1 + *param_2;
  iVar1 = *param_4;
  local_40 = param_3;
  local_30 = param_1;
  while ((local_40 < param_3 + iVar1 && (local_30 < pcVar2))) {
    if (*local_40 == '<') {
      if ((long)pcVar2 - (long)local_30 < 4) break;
      builtin_strncpy(local_30,"&lt;",4);
      local_30 = local_30 + 4;
    }
    else if (*local_40 == '>') {
      if ((long)pcVar2 - (long)local_30 < 4) break;
      builtin_strncpy(local_30,"&gt;",4);
      local_30 = local_30 + 4;
    }
    else if (*local_40 == '&') {
      if ((long)pcVar2 - (long)local_30 < 5) break;
      builtin_strncpy(local_30,"&amp;",5);
      local_30 = local_30 + 5;
    }
    else if (*local_40 == '\r') {
      if ((long)pcVar2 - (long)local_30 < 5) break;
      builtin_strncpy(local_30,"&#13;",5);
      local_30 = local_30 + 5;
    }
    else {
      *local_30 = *local_40;
      local_30 = local_30 + 1;
    }
    local_40 = local_40 + 1;
  }
  *param_2 = (int)local_30 - (int)param_1;
  *param_4 = (int)local_40 - (int)param_3;
  return 0;
}

