
/* WARNING: Removing unreachable block (ram,0x00010094153b) */

int FUN_100940cd5(int *param_1,undefined8 param_2,int *param_3,byte *param_4,long *param_5,
                 int param_6,int param_7,int param_8)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long in_stack_ffffffffffffff28;
  uint uVar4;
  byte *local_a8;
  long local_80;
  long local_78;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  byte *local_60;
  int *local_58;
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  xmlChar *local_38;
  long local_30;
  long local_28;
  undefined8 *local_20;
  
  local_6c = 0;
  local_68 = (uint)(param_5 != (long *)0x0);
  local_78 = 0;
  local_60 = (byte *)0x0;
  if ((param_5 != (long *)0x0) && (*param_5 != 0)) {
    _xmlSchemaFreeValue(*param_5);
    *param_5 = 0;
  }
  if ((local_68 == 0) && (((uint)param_3[0x16] >> 0x15 & 1) != 0)) {
    local_68 = 1;
  }
  local_a8 = param_4;
  if (param_4 == (byte *)0x0) {
    local_a8 = (byte *)0x101e41978;
  }
  if (((*param_3 == 1) && (param_3[0x28] == 0x2e)) || (((uint)param_3[0x16] >> 8 & 1) != 0)) {
    if (((param_8 == 0) && ((param_7 != 0 || (((uint)param_3[0x16] >> 0x1c & 1) != 0)))) &&
       (local_60 = (byte *)FUN_100940af9(param_3,local_a8), local_60 != (byte *)0x0)) {
      local_a8 = local_60;
    }
    local_58 = param_3;
    if (*param_3 != 1) {
      for (local_58 = *(int **)(param_3 + 0x1c); (local_58 != (int *)0x0 && (*local_58 != 1));
          local_58 = *(int **)(local_58 + 0x1c)) {
      }
      if (local_58 == (int *)0x0) {
        FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType","could not get the built-in type");
        goto LAB_100940e88;
      }
    }
    if (*param_1 == 2) {
      if (local_58[0x28] == 0x15) {
        local_6c = FUN_100940b4f(param_1,local_a8,&local_78,local_68);
      }
      else if (local_58[0x28] == 0x1c) {
        local_6c = FUN_10093cfec(param_1,*(undefined8 *)(param_1 + 10),0,local_a8,&local_78,local_68
                                );
      }
      else {
        local_64 = FUN_10093c74a(param_3);
        if (local_68 == 0) {
          local_6c = _xmlSchemaValPredefTypeNodeNoNorm(local_58,local_a8,0,0);
        }
        else {
          local_6c = _xmlSchemaValPredefTypeNodeNoNorm(local_58,local_a8,&local_78,0);
        }
      }
    }
    else {
      if (*param_1 != 1) {
        ppxVar2 = ___xmlGenericError();
        pxVar1 = *ppxVar2;
        ppvVar3 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemas.c",0x54e5);
        goto LAB_100940e88;
      }
      if (local_58[0x28] == 0x1c) {
        local_6c = FUN_10093cfec(0,*(undefined8 *)(param_1 + 0x10),param_2,local_a8,&local_78,
                                 local_68);
      }
      else {
        local_64 = FUN_10093c74a(param_3);
        if (local_68 == 0) {
          local_6c = _xmlSchemaValPredefTypeNodeNoNorm(local_58,local_a8,0,param_2);
        }
        else {
          local_6c = _xmlSchemaValPredefTypeNodeNoNorm(local_58,local_a8,&local_78,param_2);
        }
      }
    }
    if (local_6c != 0) {
      if (local_6c < 0) {
        FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType","validating against a built-in type");
        goto LAB_100940e88;
      }
      if (((uint)param_3[0x16] >> 6 & 1) == 0) {
        local_6c = 0x720;
      }
      else {
        local_6c = 0x721;
      }
    }
    if (((local_6c == 0) && (((uint)param_3[0x16] >> 0x1b & 1) != 0)) &&
       (local_6c = FUN_100940507(param_1,param_2,param_3,local_58[0x28],local_a8,local_78,0,param_6)
       , local_6c != 0)) {
      if (local_6c < 0) {
        FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType",
                      "validating facets of atomic simple type");
        goto LAB_100940e88;
      }
      if (((uint)param_3[0x16] >> 6 & 1) == 0) {
        local_6c = 0x720;
      }
      else {
        local_6c = 0x721;
      }
    }
    if ((param_6 != 0) && (0 < local_6c)) {
      FUN_10091ca68(param_1,local_6c,param_2,local_a8,param_3,1);
    }
  }
  else if (((uint)param_3[0x16] >> 6 & 1) == 0) {
    if (((uint)param_3[0x16] >> 7 & 1) != 0) {
      local_20 = (undefined8 *)FUN_100934f21(param_3);
      if (local_20 == (undefined8 *)0x0) {
        FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType","union simple type has no member types"
                     );
LAB_100940e88:
        if (local_60 != (byte *)0x0) {
          (*(code *)_xmlFree)(local_60);
        }
        if (local_78 != 0) {
          _xmlSchemaFreeValue(local_78);
        }
        return -1;
      }
      for (; local_20 != (undefined8 *)0x0; local_20 = (undefined8 *)*local_20) {
        if (local_68 == 0) {
          local_6c = FUN_100940cd5(param_1,param_2,local_20[1],local_a8,0,0,1,0);
        }
        else {
          local_6c = FUN_100940cd5(param_1,param_2,local_20[1],local_a8,&local_78,0,1,0);
        }
        if (local_6c < 1) break;
      }
      if (local_6c != 0) {
        if (local_6c < 0) {
          FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType",
                        "validating members of union simple type");
          goto LAB_100940e88;
        }
        local_6c = 0x722;
      }
      if ((local_6c == 0) && (((uint)param_3[0x16] >> 0x1b & 1) != 0)) {
        if ((param_8 == 0) &&
           (((param_7 != 0 || (((uint)param_3[0x16] >> 0x1c & 1) != 0)) &&
            (local_60 = (byte *)FUN_100940af9(local_20[1],local_a8), local_60 != (byte *)0x0)))) {
          local_a8 = local_60;
        }
        local_6c = FUN_100940507(param_1,param_2,param_3,0,local_a8,local_78,0,param_6);
        if (local_6c != 0) {
          if (local_6c < 0) {
            FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType",
                          "validating facets of union simple type");
            goto LAB_100940e88;
          }
          local_6c = 0x722;
        }
      }
      if ((param_6 != 0) && (0 < local_6c)) {
        FUN_10091ca68(param_1,local_6c,param_2,local_a8,param_3,1);
      }
    }
  }
  else {
    local_38 = (xmlChar *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_80 = 0;
    if ((param_8 == 0) && ((param_7 != 0 || (((uint)param_3[0x16] >> 0x1c & 1) != 0)))) {
      local_60 = (byte *)FUN_100940af9(param_3,local_a8);
      if (local_60 != (byte *)0x0) {
        local_a8 = local_60;
      }
      param_8 = 1;
    }
    local_50 = *(undefined8 *)(param_3 + 0xe);
    local_48 = local_a8;
    do {
      for (; (uVar4 = (uint)((ulong)in_stack_ffffffffffffff28 >> 0x20), *local_48 == 0x20 ||
             (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
          local_48 = local_48 + 1) {
      }
      for (local_40 = local_48;
          (((*local_40 != 0 && (*local_40 != 0x20)) && ((*local_40 < 9 || (10 < *local_40)))) &&
          (*local_40 != 0xd)); local_40 = local_40 + 1) {
      }
      if (local_40 == local_48) break;
      local_38 = _xmlStrndup(local_48,(int)local_40 - (int)local_48);
      local_30 = local_30 + 1;
      if (local_68 == 0) {
        in_stack_ffffffffffffff28 = (ulong)uVar4 << 0x20;
        local_6c = FUN_100940cd5(param_1,param_2,local_50,local_38,0,param_6,
                                 in_stack_ffffffffffffff28,1);
      }
      else {
        in_stack_ffffffffffffff28 = (ulong)uVar4 << 0x20;
        local_6c = FUN_100940cd5(param_1,param_2,local_50,local_38,&local_80,param_6,
                                 in_stack_ffffffffffffff28,1);
      }
      if (local_38 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_38);
        local_38 = (xmlChar *)0x0;
      }
      if (local_80 != 0) {
        if (local_78 == 0) {
          local_78 = local_80;
        }
        else {
          _xmlSchemaValueAppend(local_28,local_80);
        }
        local_28 = local_80;
        local_80 = 0;
      }
      if (local_6c != 0) {
        if (local_6c < 0) {
          FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType",
                        "validating an item of list simple type");
          goto LAB_100940e88;
        }
        local_6c = 0x721;
        break;
      }
      local_48 = local_40;
    } while (*local_40 != 0);
    if (local_38 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_38);
      local_38 = (xmlChar *)0x0;
    }
    if (((local_6c == 0) && (((uint)param_3[0x16] >> 0x1b & 1) != 0)) &&
       (local_6c = FUN_100940507(param_1,param_2,param_3,0,local_a8,local_78,local_30,param_6),
       local_6c != 0)) {
      if (local_6c < 0) {
        FUN_10091c652(param_1,"xmlSchemaVCheckCVCSimpleType","validating facets of list simple type"
                     );
        goto LAB_100940e88;
      }
      local_6c = 0x721;
    }
    if ((param_6 != 0) && (0 < local_6c)) {
      if ((param_8 == 0) &&
         (local_60 = (byte *)FUN_100940af9(param_3,local_a8), local_60 != (byte *)0x0)) {
        local_a8 = local_60;
      }
      FUN_10091ca68(param_1,local_6c,param_2,local_a8,param_3,1);
    }
  }
  if (local_60 != (byte *)0x0) {
    (*(code *)_xmlFree)(local_60);
  }
  if (local_6c == 0) {
    if (param_5 == (long *)0x0) {
      if (local_78 != 0) {
        _xmlSchemaFreeValue(local_78);
      }
    }
    else {
      *param_5 = local_78;
    }
  }
  else if (local_78 != 0) {
    _xmlSchemaFreeValue(local_78);
  }
  return local_6c;
}

