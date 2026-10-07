
int _xmlDictSize(xmlDictPtr dict)

{
  int local_14;
  
  if (dict == (xmlDictPtr)0x0) {
    local_14 = -1;
  }
  else if (*(long *)(dict + 0x28) == 0) {
    local_14 = *(int *)(dict + 0x1c);
  }
  else {
    local_14 = *(int *)(dict + 0x1c) + *(int *)(*(long *)(dict + 0x28) + 0x1c);
  }
  return local_14;
}

