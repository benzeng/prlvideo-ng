
int _xmlListSize(xmlListPtr l)

{
  undefined4 local_24;
  undefined8 local_18;
  undefined4 local_c;
  
  local_c = 0;
  if (l == (xmlListPtr)0x0) {
    local_24 = -1;
  }
  else {
    for (local_18 = (undefined8 *)**(undefined8 **)l; *(undefined8 **)l != local_18;
        local_18 = (undefined8 *)*local_18) {
      local_c = local_c + 1;
    }
    local_24 = local_c;
  }
  return local_24;
}

