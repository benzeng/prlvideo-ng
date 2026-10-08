
undefined8 _xmlScanAttributeDecl(long param_1,xmlChar *param_2)

{
  undefined8 local_30;
  undefined8 local_18;
  xmlHashTablePtr local_10;
  
  local_18 = 0;
  if (param_1 == 0) {
    local_30 = 0;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_30 = 0;
  }
  else {
    local_10 = *(xmlHashTablePtr *)(param_1 + 0x58);
    if (local_10 == (xmlHashTablePtr)0x0) {
      local_30 = 0;
    }
    else {
      _xmlHashScan3(local_10,(xmlChar *)0x0,(xmlChar *)0x0,param_2,FUN_1008ba61e,&local_18);
      local_30 = local_18;
    }
  }
  return local_30;
}

