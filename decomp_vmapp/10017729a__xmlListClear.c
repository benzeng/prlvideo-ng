
void _xmlListClear(xmlListPtr l)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  if (l != (xmlListPtr)0x0) {
    local_18 = (undefined8 *)**(undefined8 **)l;
    while (*(undefined8 **)l != local_18) {
      puVar1 = (undefined8 *)*local_18;
      FUN_100176b4c(l,local_18);
      local_18 = puVar1;
    }
  }
  return;
}

