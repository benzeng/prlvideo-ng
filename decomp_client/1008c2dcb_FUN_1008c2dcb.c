
void FUN_1008c2dcb(xmlListPtr param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 != (xmlListPtr)0x0) {
    local_18 = param_2;
    local_10 = param_3;
    _xmlListWalk(param_1,FUN_1008c2d94,&local_18);
  }
  return;
}

