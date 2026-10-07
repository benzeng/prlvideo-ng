
int _xmlRegexpExec(xmlRegexpPtr comp,xmlChar *value)

{
  undefined4 local_1c;
  
  if ((comp == (xmlRegexpPtr)0x0) || (value == (xmlChar *)0x0)) {
    local_1c = -1;
  }
  else {
    local_1c = FUN_1001dcabe(comp,value);
  }
  return local_1c;
}

