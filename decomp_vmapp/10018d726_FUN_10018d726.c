
xmlElementPtr FUN_10018d726(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  xmlElementPtr local_40;
  xmlElementPtr local_18;
  xmlChar *local_10;
  
  local_18 = (xmlElementPtr)0x0;
  local_10 = (xmlChar *)0x0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (*(long *)(param_3 + 0x10) == 0)) {
    local_40 = (xmlElementPtr)0x0;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if ((*(long *)(param_3 + 0x48) != 0) && (*(long *)(*(long *)(param_3 + 0x48) + 0x18) != 0)) {
      local_10 = *(xmlChar **)(*(long *)(param_3 + 0x48) + 0x18);
    }
    if (local_10 != (xmlChar *)0x0) {
      local_18 = _xmlGetDtdQElementDesc
                           (*(xmlDtdPtr *)(param_2 + 0x50),*(xmlChar **)(param_3 + 0x10),local_10);
      if ((local_18 == (xmlElementPtr)0x0) && (*(long *)(param_2 + 0x58) != 0)) {
        local_18 = _xmlGetDtdQElementDesc
                             (*(xmlDtdPtr *)(param_2 + 0x58),*(xmlChar **)(param_3 + 0x10),local_10)
        ;
        if ((local_18 != (xmlElementPtr)0x0) && (param_4 != (undefined4 *)0x0)) {
          *param_4 = 1;
        }
      }
    }
    if (local_18 == (xmlElementPtr)0x0) {
      local_18 = _xmlGetDtdElementDesc(*(xmlDtdPtr *)(param_2 + 0x50),*(xmlChar **)(param_3 + 0x10))
      ;
      if ((local_18 == (xmlElementPtr)0x0) && (*(long *)(param_2 + 0x58) != 0)) {
        local_18 = _xmlGetDtdElementDesc
                             (*(xmlDtdPtr *)(param_2 + 0x58),*(xmlChar **)(param_3 + 0x10));
        if ((local_18 != (xmlElementPtr)0x0) && (param_4 != (undefined4 *)0x0)) {
          *param_4 = 1;
        }
      }
    }
    if (local_18 == (xmlElementPtr)0x0) {
      FUN_100183d12(param_1,param_3,0x216,"No declaration for element %s\n",
                    *(undefined8 *)(param_3 + 0x10),0,0);
    }
    local_40 = local_18;
  }
  return local_40;
}

