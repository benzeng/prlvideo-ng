
int _htmlAutoCloseTag(htmlDocPtr doc,xmlChar *name,htmlNodePtr elem)

{
  int iVar1;
  int local_34;
  htmlNodePtr local_10;
  
  if (elem == (htmlNodePtr)0x0) {
    local_34 = 1;
  }
  else {
    iVar1 = _xmlStrEqual(name,elem->name);
    if (iVar1 == 0) {
      iVar1 = FUN_1001911a8(elem->name,name);
      if (iVar1 == 0) {
        for (local_10 = elem->children; local_10 != (htmlNodePtr)0x0; local_10 = local_10->next) {
          iVar1 = _htmlAutoCloseTag(doc,name,local_10);
          if (iVar1 != 0) {
            return 1;
          }
        }
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
    else {
      local_34 = 0;
    }
  }
  return local_34;
}

