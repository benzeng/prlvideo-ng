
xmlExpNodePtr FUN_100919d21(xmlExpCtxtPtr param_1)

{
  long lVar1;
  xmlExpNodePtr local_18;
  
  local_18 = (xmlExpNodePtr)FUN_100919c13(param_1);
  while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
          (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  while( true ) {
    if (**(char **)(param_1 + 0x28) != ',') {
      return local_18;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    lVar1 = FUN_100919c13(param_1);
    if (lVar1 == 0) break;
    local_18 = (xmlExpNodePtr)FUN_100916b89(param_1,3,local_18,lVar1,0,0,0);
    if (local_18 == (xmlExpNodePtr)0x0) {
      return (xmlExpNodePtr)0x0;
    }
  }
  _xmlExpFree(param_1,local_18);
  return (xmlExpNodePtr)0x0;
}

