
int FUN_100203b08(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  int *local_18;
  int local_c;
  
  local_c = 0;
  local_18 = *(int **)(param_2 + 0x70);
  if ((*(int *)(param_2 + 0x5c) == 4) || (*(int *)(param_2 + 0x5c) == 6)) {
    if ((*local_18 == 4) || ((*local_18 == 1 && (local_18[0x28] != 0x2d)))) {
      if (((*(uint *)(param_2 + 0x58) >> 1 ^ 1) & 1) != 0) {
        local_28 = 0;
        uVar2 = FUN_1001e6d76(&local_28,*(undefined8 *)(local_18 + 0x34),
                              *(undefined8 *)(local_18 + 4));
        FUN_1001ea46a(param_1,0xc04,0,param_2,0,
                      "If using <simpleContent> and <restriction>, the base type must be a complex type. The base type \'%s\' is a simple type"
                      ,uVar2);
        if (local_28 != 0) {
          (*(code *)_xmlFree)(local_28);
        }
        return 0xc04;
      }
    }
    else if ((local_18[0x17] == 4) || (local_18[0x17] == 6)) {
      if (*(long *)(local_18 + 0x30) == 0) {
        FUN_1001ea46a(param_1,0xbfd,0,param_2,0,
                      "Internal error: xmlSchemaCheckSRCCT, \'%s\', base type has no content type",
                      *(undefined8 *)(param_2 + 0x10));
        return -1;
      }
    }
    else if ((local_18[0x17] == 3) && (((byte)(*(uint *)(param_2 + 0x58) >> 2) & 1) == 1)) {
      iVar1 = FUN_100201987(*(undefined8 *)(local_18 + 0xe));
      if (iVar1 == 0) {
        local_c = 0xc04;
      }
      else if (*(long *)(param_2 + 0xc0) == 0) {
        local_30 = 0;
        uVar2 = FUN_1001e6d76(&local_30,*(undefined8 *)(local_18 + 0x34),
                              *(undefined8 *)(local_18 + 4));
        FUN_1001ea46a(param_1,0xc04,0,param_2,0,
                      "A <simpleType> is expected among the children of <restriction>, if <simpleContent> is used and the base type \'%s\' is a complex type"
                      ,uVar2);
        if (local_30 != 0) {
          (*(code *)_xmlFree)(local_30);
        }
        return 0xc04;
      }
    }
    else {
      local_c = 0xc04;
    }
    if (0 < local_c) {
      local_38 = 0;
      if ((*(uint *)(param_2 + 0x58) >> 2 & 1) == 0) {
        uVar2 = FUN_1001e6d76(&local_38,*(undefined8 *)(local_18 + 0x34),
                              *(undefined8 *)(local_18 + 4));
        FUN_1001ea46a(param_1,0xc04,0,param_2,0,
                      "If <simpleContent> and <extension> is used, the base type must be a simple type. The base type \'%s\' is a complex type"
                      ,uVar2);
      }
      else {
        uVar2 = FUN_1001e6d76(&local_38,*(undefined8 *)(local_18 + 0x34),
                              *(undefined8 *)(local_18 + 4));
        FUN_1001ea46a(param_1,0xc04,0,param_2,0,
                      "If <simpleContent> and <restriction> is used, the base type must be a simple type or a complex type with mixed content and particle emptiable. The base type \'%s\' is none of those"
                      ,uVar2);
      }
      if (local_38 != 0) {
        (*(code *)_xmlFree)(local_38);
      }
    }
  }
  else if ((*local_18 != 5) && (local_18[0x28] != 0x2d)) {
    local_20 = 0;
    uVar2 = FUN_1001e6d76(&local_20,*(undefined8 *)(local_18 + 0x34),*(undefined8 *)(local_18 + 4));
    FUN_1001ea46a(param_1,0xc04,0,param_2,*(undefined8 *)(param_2 + 0x48),
                  "If using <complexContent>, the base type is expected to be a complex type. The base type \'%s\' is a simple type"
                  ,uVar2);
    if (local_20 != 0) {
      (*(code *)_xmlFree)(local_20);
    }
    return 0xc04;
  }
  return local_c;
}

