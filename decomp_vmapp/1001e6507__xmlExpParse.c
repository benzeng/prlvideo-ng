
xmlExpNodePtr _xmlExpParse(xmlExpCtxtPtr ctxt,char *expr)

{
  xmlExpNodePtr local_30;
  
  *(char **)(ctxt + 0x20) = expr;
  *(char **)(ctxt + 0x28) = expr;
  local_30 = (xmlExpNodePtr)FUN_1001e63f9(ctxt);
  while ((((**(char **)(ctxt + 0x28) == ' ' || (**(char **)(ctxt + 0x28) == '\n')) ||
          (**(char **)(ctxt + 0x28) == '\r')) || (**(char **)(ctxt + 0x28) == '\t'))) {
    *(long *)(ctxt + 0x28) = *(long *)(ctxt + 0x28) + 1;
  }
  if (**(char **)(ctxt + 0x28) != '\0') {
    _xmlExpFree(ctxt,local_30);
    local_30 = (xmlExpNodePtr)0x0;
  }
  return local_30;
}

