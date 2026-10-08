
void _xmlListReverse(xmlListPtr l)

{
  undefined8 *local_18;
  undefined8 *local_10;
  
  if (l != (xmlListPtr)0x0) {
    local_10 = *(undefined8 **)l;
    for (local_18 = (undefined8 *)**(undefined8 **)l; *(undefined8 **)l != local_18;
        local_18 = (undefined8 *)*local_18) {
      *local_10 = local_10[1];
      local_10[1] = local_18;
      local_10 = local_18;
    }
    *local_10 = local_10[1];
    local_10[1] = local_18;
  }
  return;
}

