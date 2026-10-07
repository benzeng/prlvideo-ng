
void _xmlListWalk(xmlListPtr l,xmlListWalker walker,void *user)

{
  int iVar1;
  undefined8 *local_10;
  
  if ((l != (xmlListPtr)0x0) && (walker != (xmlListWalker)0x0)) {
    for (local_10 = (undefined8 *)**(undefined8 **)l; *(undefined8 **)l != local_10;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = (*walker)((void *)local_10[2],user);
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}

