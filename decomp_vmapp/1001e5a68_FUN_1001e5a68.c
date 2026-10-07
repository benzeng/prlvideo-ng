
int FUN_1001e5a68(long param_1)

{
  undefined4 local_24;
  undefined4 local_c;
  
  local_c = 0;
  while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
          (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  if (**(char **)(param_1 + 0x28) == '*') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_24 = -1;
  }
  else if ((**(char **)(param_1 + 0x28) < '0') || ('9' < **(char **)(param_1 + 0x28))) {
    local_24 = -1;
  }
  else {
    while (('/' < **(char **)(param_1 + 0x28) && (**(char **)(param_1 + 0x28) < ':'))) {
      local_c = local_c * 10 + (int)**(char **)(param_1 + 0x28) + -0x30;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    local_24 = local_c;
  }
  return local_24;
}

