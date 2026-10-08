
undefined4
FUN_100923805(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,xmlChar *param_5
             )

{
  int iVar1;
  undefined4 local_44;
  long *local_10;
  
  iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0xd0),param_5);
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(PTR_s_http___www_w3_org_2001_XMLSchema_102279850,param_5);
    if (iVar1 == 0) {
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x28) != 0) {
        local_10 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x28);
        do {
          if ((((int)local_10[1] == 0) || ((int)local_10[1] == 1)) &&
             (iVar1 = _xmlStrEqual(param_5,(xmlChar *)local_10[2]), iVar1 != 0)) {
            return 1;
          }
          local_10 = (long *)*local_10;
        } while (local_10 != (long *)0x0);
      }
      if (param_5 == (xmlChar *)0x0) {
        FUN_10091dd92(param_1,0xbbc,0,param_4,param_3,
                      "References from this schema to components in no namespace are not valid, since not indicated by an import statement"
                      ,0);
      }
      else {
        FUN_10091dd92(param_1,0xbbc,0,param_4,param_3,
                      "References from this schema to components in the namespace \'%s\' are not valid, since not indicated by an import statement"
                      ,param_5);
      }
      local_44 = 0;
    }
    else {
      local_44 = 1;
    }
  }
  else {
    local_44 = 1;
  }
  return local_44;
}

