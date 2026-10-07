
undefined8 _xmlSchemaGetBuiltInListSimpleTypeItemType(int *param_1)

{
  int iVar1;
  undefined8 local_20;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    local_20 = 0;
  }
  else {
    iVar1 = param_1[0x28];
    if (iVar1 == 0x19) {
      local_20 = DAT_1011b88e0;
    }
    else if (iVar1 == 0x1b) {
      local_20 = DAT_1011b88f0;
    }
    else if (iVar1 == 0x13) {
      local_20 = DAT_1011b8908;
    }
    else {
      local_20 = 0;
    }
  }
  return local_20;
}

