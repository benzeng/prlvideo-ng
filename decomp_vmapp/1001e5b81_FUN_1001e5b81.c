
xmlExpNodePtr FUN_1001e5b81(xmlExpCtxtPtr param_1)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlExpNodePtr local_20;
  int local_c;
  
  while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
          (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  pxVar2 = *(xmlChar **)(param_1 + 0x28);
  if (**(char **)(param_1 + 0x28) == '(') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_20 = (xmlExpNodePtr)FUN_1001e63f9(param_1);
    while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
           ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    if (**(char **)(param_1 + 0x28) != ')') {
      _fprintf(*(FILE **)PTR____stderrp_100ba2328,"unbalanced \'(\' : %s\n",pxVar2);
      _xmlExpFree(param_1,local_20);
      return (xmlExpNodePtr)0x0;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
           ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  else {
    while (((((**(char **)(param_1 + 0x28) != '\0' && (**(char **)(param_1 + 0x28) != ' ')) &&
             ((**(char **)(param_1 + 0x28) != '\n' &&
              ((**(char **)(param_1 + 0x28) != '\r' && (**(char **)(param_1 + 0x28) != '\t')))))) &&
            (**(char **)(param_1 + 0x28) != '(')) &&
           (((((**(char **)(param_1 + 0x28) != ')' && (**(char **)(param_1 + 0x28) != '|')) &&
              (**(char **)(param_1 + 0x28) != ',')) &&
             ((**(char **)(param_1 + 0x28) != '{' && (**(char **)(param_1 + 0x28) != '*')))) &&
            ((**(char **)(param_1 + 0x28) != '+' &&
             ((**(char **)(param_1 + 0x28) != '?' && (**(char **)(param_1 + 0x28) != '}'))))))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    pxVar2 = _xmlDictLookup(*(xmlDictPtr *)param_1,pxVar2,
                            (int)*(undefined8 *)(param_1 + 0x28) - (int)pxVar2);
    if (pxVar2 == (xmlChar *)0x0) {
      return (xmlExpNodePtr)0x0;
    }
    local_20 = (xmlExpNodePtr)FUN_1001e3261(param_1,2,0,0,pxVar2,0,0);
    if (local_20 == (xmlExpNodePtr)0x0) {
      return (xmlExpNodePtr)0x0;
    }
    while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
            (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  if (**(char **)(param_1 + 0x28) == '{') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    iVar1 = FUN_1001e5a68(param_1);
    if (iVar1 < 0) {
      _xmlExpFree(param_1,local_20);
      return (xmlExpNodePtr)0x0;
    }
    while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
            (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
    local_c = iVar1;
    if (**(char **)(param_1 + 0x28) == ',') {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      local_c = FUN_1001e5a68(param_1);
      while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
             ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      }
    }
    if (**(char **)(param_1 + 0x28) != '}') {
      _xmlExpFree(param_1,local_20);
      return (xmlExpNodePtr)0x0;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_20 = (xmlExpNodePtr)FUN_1001e3261(param_1,5,local_20,0,0,iVar1,local_c);
    while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
           ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  else if (**(char **)(param_1 + 0x28) == '?') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_20 = (xmlExpNodePtr)FUN_1001e3261(param_1,5,local_20,0,0,0,1);
    while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
           ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  else if (**(char **)(param_1 + 0x28) == '+') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_20 = (xmlExpNodePtr)FUN_1001e3261(param_1,5,local_20,0,0,1,0xffffffff);
    while (((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
           ((**(char **)(param_1 + 0x28) == '\r' || (**(char **)(param_1 + 0x28) == '\t'))))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  else if (**(char **)(param_1 + 0x28) == '*') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    local_20 = (xmlExpNodePtr)FUN_1001e3261(param_1,5,local_20,0,0,0,0xffffffff);
    while ((((**(char **)(param_1 + 0x28) == ' ' || (**(char **)(param_1 + 0x28) == '\n')) ||
            (**(char **)(param_1 + 0x28) == '\r')) || (**(char **)(param_1 + 0x28) == '\t'))) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  return local_20;
}

