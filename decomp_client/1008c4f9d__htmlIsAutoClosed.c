
int _htmlIsAutoClosed(htmlDocPtr doc,htmlNodePtr elem)

{
  int iVar1;
  int local_2c;
  htmlNodePtr local_10;
  
  if (elem == (htmlNodePtr)0x0) {
    local_2c = 1;
  }
  else {
    for (local_10 = elem->children; local_10 != (htmlNodePtr)0x0; local_10 = local_10->next) {
      iVar1 = _htmlAutoCloseTag(doc,elem->name,local_10);
      if (iVar1 != 0) {
        return 1;
      }
    }
    local_2c = 0;
  }
  return local_2c;
}

