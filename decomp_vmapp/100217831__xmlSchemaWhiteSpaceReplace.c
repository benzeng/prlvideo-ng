
xmlChar * _xmlSchemaWhiteSpaceReplace(xmlChar *param_1)

{
  xmlChar *local_38;
  xmlChar *local_20;
  xmlChar *local_10;
  
  local_20 = param_1;
  if (param_1 == (xmlChar *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    for (; (((*local_20 != '\0' && (*local_20 != '\r')) && (*local_20 != '\t')) &&
           (*local_20 != '\n')); local_20 = local_20 + 1) {
    }
    if (*local_20 == '\0') {
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = _xmlStrdup(param_1);
      local_10 = local_38 + ((long)local_20 - (long)param_1);
      do {
        if (((*local_10 == '\r') || (*local_10 == '\t')) || (*local_10 == '\n')) {
          *local_10 = ' ';
        }
        local_10 = local_10 + 1;
      } while (*local_10 != '\0');
    }
  }
  return local_38;
}

