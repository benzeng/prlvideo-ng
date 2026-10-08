
int _xmlSAXDefaultVersion(int version)

{
  undefined4 local_20;
  
  if ((version == 1) || (version == 2)) {
    local_20 = DAT_10227d2c0;
    DAT_10227d2c0 = version;
  }
  else {
    local_20 = -1;
  }
  return local_20;
}

