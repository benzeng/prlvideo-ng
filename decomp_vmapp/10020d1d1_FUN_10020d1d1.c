
undefined8 FUN_10020d1d1(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20;
  
  iVar1 = FUN_100208e22(param_1);
  if (iVar1 == 2) {
    local_20 = _xmlSchemaWhiteSpaceReplace(param_2);
  }
  else if (iVar1 == 3) {
    local_20 = _xmlSchemaCollapseString(param_2);
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

