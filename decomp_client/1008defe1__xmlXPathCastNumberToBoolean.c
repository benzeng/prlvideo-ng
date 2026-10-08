
int _xmlXPathCastNumberToBoolean(double val)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = _xmlXPathIsNaN(val);
  if ((iVar1 == 0) && (val != 0.0)) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

