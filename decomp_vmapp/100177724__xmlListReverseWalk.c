
void _xmlListReverseWalk(xmlListPtr l,xmlListWalker walker,void *user)

{
  int iVar1;
  long local_10;
  
  if ((l != (xmlListPtr)0x0) && (walker != (xmlListWalker)0x0)) {
    for (local_10 = *(long *)(*(long *)l + 8); *(long *)l != local_10;
        local_10 = *(long *)(local_10 + 8)) {
      iVar1 = (*walker)(*(void **)(local_10 + 0x10),user);
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}

