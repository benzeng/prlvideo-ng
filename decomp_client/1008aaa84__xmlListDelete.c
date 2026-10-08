
void _xmlListDelete(xmlListPtr l)

{
  if (l != (xmlListPtr)0x0) {
    _xmlListClear(l);
    (*(code *)_xmlFree)(*(undefined8 *)l);
    (*(code *)_xmlFree)(l);
  }
  return;
}

