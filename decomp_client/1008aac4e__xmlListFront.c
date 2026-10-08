
xmlLinkPtr _xmlListFront(xmlListPtr l)

{
  undefined8 local_18;
  
  if (l == (xmlListPtr)0x0) {
    local_18 = (xmlLinkPtr)0x0;
  }
  else {
    local_18 = (xmlLinkPtr)**(undefined8 **)l;
  }
  return local_18;
}

