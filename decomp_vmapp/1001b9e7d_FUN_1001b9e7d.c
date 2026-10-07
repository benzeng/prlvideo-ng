
int FUN_1001b9e7d(long param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  xmlGenericErrorFunc pxVar3;
  int iVar4;
  xmlXPathObjectPtr pxVar5;
  undefined8 uVar6;
  xmlGenericErrorFunc *ppxVar7;
  void **ppvVar8;
  int local_180;
  undefined8 local_168;
  undefined8 local_160;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  long local_148;
  long local_140;
  xmlXPathObjectPtr local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  int *local_118;
  int local_10c;
  long local_108;
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_dc;
  long local_d8;
  xmlXPathObjectPtr local_d0;
  xmlXPathObjectPtr local_c8;
  long local_c0;
  xmlNodeSetPtr local_b8;
  xmlNodeSetPtr local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  int *local_90;
  int local_84;
  undefined8 local_80;
  int *local_78;
  long local_70;
  xmlXPathObjectPtr local_68;
  xmlXPathObjectPtr local_60;
  long local_58;
  undefined8 local_50;
  int *local_48;
  xmlNodeSetPtr local_40;
  int local_38;
  int local_34;
  int *local_30;
  
  local_154 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_148 = *(long *)(param_1 + 0x38);
    switch(*param_2) {
    case 0:
      local_180 = 0;
      break;
    case 1:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        _xmlXPathBooleanFunction(param_1,1);
        if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 0x10) == 0)) {
          local_180 = local_154;
        }
        else {
          local_138 = (xmlXPathObjectPtr)_valuePop(param_1);
          **(undefined8 **)(param_1 + 0x18) = local_128;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
          if (*(int *)(param_1 + 0x10) == 0) {
            _xmlXPathBooleanFunction(param_1,1);
            local_140 = _valuePop(param_1);
            *(uint *)(local_140 + 0x10) = *(uint *)(local_140 + 0x10) & local_138->boolval;
            _valuePush(param_1,local_140);
            _xmlXPathFreeObject(local_138);
            local_180 = local_154;
          }
          else {
            _xmlXPathFreeObject(local_138);
            local_180 = 0;
          }
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 2:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        _xmlXPathBooleanFunction(param_1,1);
        if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 0x10) == 1)) {
          local_180 = local_154;
        }
        else {
          local_138 = (xmlXPathObjectPtr)_valuePop(param_1);
          **(undefined8 **)(param_1 + 0x18) = local_128;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
          if (*(int *)(param_1 + 0x10) == 0) {
            _xmlXPathBooleanFunction(param_1,1);
            local_140 = _valuePop(param_1);
            *(uint *)(local_140 + 0x10) = *(uint *)(local_140 + 0x10) | local_138->boolval;
            _valuePush(param_1,local_140);
            _xmlXPathFreeObject(local_138);
            local_180 = local_154;
          }
          else {
            _xmlXPathFreeObject(local_138);
            local_180 = 0;
          }
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 3:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        **(undefined8 **)(param_1 + 0x18) = local_128;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
        local_154 = local_154 + iVar4;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (param_2[3] == 0) {
            local_150 = _xmlXPathNotEqualValues(param_1);
          }
          else {
            local_150 = _xmlXPathEqualValues(param_1);
          }
          uVar6 = _xmlXPathNewBoolean(local_150);
          _valuePush(param_1,uVar6);
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 4:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        **(undefined8 **)(param_1 + 0x18) = local_128;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
        local_154 = local_154 + iVar4;
        if (*(int *)(param_1 + 0x10) == 0) {
          local_14c = _xmlXPathCompareValues(param_1,param_2[3],param_2[4]);
          uVar6 = _xmlXPathNewBoolean(local_14c);
          _valuePush(param_1,uVar6);
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 5:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != 0xffffffff) {
          **(undefined8 **)(param_1 + 0x18) = local_128;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          if (param_2[3] == 0) {
            _xmlXPathSubValues(param_1);
          }
          else if (param_2[3] == 1) {
            _xmlXPathAddValues(param_1);
          }
          else if (param_2[3] == 2) {
            _xmlXPathValueFlipSign(param_1);
          }
          else if (param_2[3] == 3) {
            if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
              _xmlXPathNumberFunction(param_1,1);
            }
            if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
              _xmlXPathErr(param_1,0xb);
              return 0;
            }
          }
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 6:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        **(undefined8 **)(param_1 + 0x18) = local_128;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
        local_154 = local_154 + iVar4;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (param_2[3] == 0) {
            _xmlXPathMultValues(param_1);
          }
          else if (param_2[3] == 1) {
            _xmlXPathDivValues(param_1);
          }
          else if (param_2[3] == 2) {
            _xmlXPathModValues(param_1);
          }
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 7:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
      local_154 = local_154 + iVar4;
      if (*(int *)(param_1 + 0x10) == 0) {
        **(undefined8 **)(param_1 + 0x18) = local_128;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
        local_154 = local_154 + iVar4;
        if (*(int *)(param_1 + 0x10) == 0) {
          if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
            _xmlXPathErr(param_1,0xb);
            local_180 = 0;
          }
          else {
            local_138 = (xmlXPathObjectPtr)_valuePop(param_1);
            if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
              _xmlXPathErr(param_1,0xb);
              local_180 = 0;
            }
            else {
              local_140 = _valuePop(param_1);
              uVar6 = _xmlXPathNodeSetMerge(*(undefined8 *)(local_140 + 8),local_138->nodesetval);
              *(undefined8 *)(local_140 + 8) = uVar6;
              _valuePush(param_1,local_140);
              _xmlXPathFreeObject(local_138);
              local_180 = local_154;
            }
          }
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 8:
      _xmlXPathRoot(param_1);
      local_180 = local_154;
      break;
    case 9:
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != 0xffffffff) {
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar6 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
          _valuePush(param_1,uVar6);
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 10:
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != 0xffffffff) {
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
          local_180 = local_154;
        }
        else {
          local_180 = 0;
        }
      }
      else {
        local_180 = 0;
      }
      break;
    case 0xb:
      if (param_2[1] == 0xffffffff) {
        local_180 = 0;
      }
      else {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
        if (*(int *)(param_1 + 0x10) == 0) {
          if ((((param_2[2] == 0xffffffff) ||
               (*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38) != 0x10)) ||
              (*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38 + 4) != -1)) ||
             (((*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38 + 8) == -1 ||
               (*(int *)(*(long *)(local_148 + 8) +
                        (long)*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38 + 8)
                        * 0x38) != 0xc)) ||
              ((local_118 = *(int **)(*(long *)(local_148 + 8) +
                                      (long)*(int *)(*(long *)(local_148 + 8) +
                                                     (long)(int)param_2[2] * 0x38 + 8) * 0x38 + 0x18
                                     ), local_118 == (int *)0x0 ||
               ((*local_118 != 3 ||
                (local_10c = (int)*(double *)(local_118 + 6),
                *(double *)(local_118 + 6) != (double)local_10c)))))))) {
            local_180 = FUN_1001b784a(param_1,param_2,0,0);
            local_180 = local_154 + local_180;
          }
          else {
            local_180 = FUN_1001b83d5(param_1,param_2,local_10c,0,0);
            local_180 = local_154 + local_180;
          }
        }
        else {
          local_180 = 0;
        }
      }
      break;
    case 0xc:
      pxVar5 = _xmlXPathObjectCopy(*(xmlXPathObjectPtr *)(param_2 + 6));
      _valuePush(param_1,pxVar5);
      local_180 = local_154;
      break;
    case 0xd:
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (*(long *)(param_2 + 8) == 0) {
        local_108 = _xmlXPathVariableLookup
                              (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 6));
        if (local_108 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 5;
          return 0;
        }
        _valuePush(param_1,local_108);
      }
      else {
        local_100 = _xmlXPathNsLookup(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 8));
        if (local_100 == 0) {
          ppxVar7 = ___xmlGenericError();
          pxVar3 = *ppxVar7;
          uVar6 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)(param_2 + 6);
          ppvVar8 = ___xmlGenericErrorContext();
          (*pxVar3)(*ppvVar8,"xmlXPathCompOpEval: variable %s bound to undefined prefix %s\n",uVar2,
                    uVar6);
          return local_154;
        }
        local_108 = _xmlXPathVariableLookupNS
                              (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 6),
                               local_100);
        if (local_108 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 5;
          return 0;
        }
        _valuePush(param_1,local_108);
      }
      local_180 = local_154;
      break;
    case 0xe:
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (*(int *)(param_1 + 0x28) < (int)param_2[3]) {
        ppxVar7 = ___xmlGenericError();
        pxVar3 = *ppxVar7;
        ppvVar8 = ___xmlGenericErrorContext();
        (*pxVar3)(*ppvVar8,"xmlXPathCompOpEval: parameter error\n");
        *(undefined4 *)(param_1 + 0x10) = 10;
        local_180 = local_154;
      }
      else {
        for (local_dc = 0; local_dc < (int)param_2[3]; local_dc = local_dc + 1) {
          if (*(long *)(*(long *)(param_1 + 0x30) + (long)(*(int *)(param_1 + 0x28) - local_dc) * 8
                       + -8) == 0) {
            ppxVar7 = ___xmlGenericError();
            pxVar3 = *ppxVar7;
            ppvVar8 = ___xmlGenericErrorContext();
            (*pxVar3)(*ppvVar8,"xmlXPathCompOpEval: parameter error\n");
            *(undefined4 *)(param_1 + 0x10) = 10;
            return local_154;
          }
        }
        if (*(long *)(param_2 + 10) == 0) {
          local_d8 = 0;
          if (*(long *)(param_2 + 8) == 0) {
            local_f8 = (code *)_xmlXPathFunctionLookup
                                         (*(undefined8 *)(param_1 + 0x18),
                                          *(undefined8 *)(param_2 + 6));
          }
          else {
            local_d8 = _xmlXPathNsLookup(*(undefined8 *)(param_1 + 0x18),
                                         *(undefined8 *)(param_2 + 8));
            if (local_d8 == 0) {
              ppxVar7 = ___xmlGenericError();
              pxVar3 = *ppxVar7;
              uVar6 = *(undefined8 *)(param_2 + 8);
              uVar2 = *(undefined8 *)(param_2 + 6);
              ppvVar8 = ___xmlGenericErrorContext();
              (*pxVar3)(*ppvVar8,"xmlXPathCompOpEval: function %s bound to undefined prefix %s\n",
                        uVar2,uVar6);
              return local_154;
            }
            local_f8 = (code *)_xmlXPathFunctionLookupNS
                                         (*(undefined8 *)(param_1 + 0x18),
                                          *(undefined8 *)(param_2 + 6),local_d8);
          }
          if (local_f8 == (code *)0x0) {
            ppxVar7 = ___xmlGenericError();
            pxVar3 = *ppxVar7;
            uVar6 = *(undefined8 *)(param_2 + 6);
            ppvVar8 = ___xmlGenericErrorContext();
            (*pxVar3)(*ppvVar8,"xmlXPathCompOpEval: function %s not found\n",uVar6);
            _xmlXPathErr(param_1,9);
            return 0;
          }
          *(code **)(param_2 + 10) = local_f8;
          *(long *)(param_2 + 0xc) = local_d8;
        }
        else {
          local_f8 = *(code **)(param_2 + 10);
        }
        local_f0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
        local_e8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0);
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8) = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0) = *(undefined8 *)(param_2 + 0xc);
        (*local_f8)(param_1,param_2[3]);
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8) = local_f0;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0) = local_e8;
        local_180 = local_154;
      }
      break;
    case 0xf:
      local_128 = **(undefined8 **)(param_1 + 0x18);
      local_130 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      local_120 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      local_11c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = local_11c;
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = local_120;
      *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
      **(undefined8 **)(param_1 + 0x18) = local_128;
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != 0xffffffff) {
          iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
          local_154 = local_154 + iVar4;
          **(undefined8 **)(param_1 + 0x18) = local_128;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_130;
          if (*(int *)(param_1 + 0x10) != 0) {
            return 0;
          }
        }
        local_180 = local_154;
      }
      else {
        local_180 = 0;
      }
      break;
    case 0x10:
    case 0x11:
      local_b8 = (xmlNodeSetPtr)0x0;
      if (((((param_2[1] == 0xffffffff) || (param_2[2] == 0xffffffff)) ||
           ((*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38) != 0x12 ||
            ((*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38) != 0xc ||
             (local_90 = *(int **)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38 + 0x18),
             local_90 == (int *)0x0)))))) || (*local_90 != 3)) ||
         (*(double *)(local_90 + 6) != DAT_100b44c90)) {
        if ((((((param_2[1] == 0xffffffff) || (param_2[2] == 0xffffffff)) ||
              (*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38) != 0x12)) ||
             ((*(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38) != 0x12 ||
              (local_84 = *(int *)(*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38 + 4),
              local_84 == -1)))) ||
            (*(int *)(*(long *)(local_148 + 8) + (long)local_84 * 0x38) != 0xe)) ||
           (((*(long *)(*(long *)(local_148 + 8) + (long)local_84 * 0x38 + 0x20) != 0 ||
             (*(int *)(*(long *)(local_148 + 8) + (long)local_84 * 0x38 + 0xc) != 0)) ||
            ((*(long *)(*(long *)(local_148 + 8) + (long)local_84 * 0x38 + 0x18) == 0 ||
             (iVar4 = _xmlStrEqual(*(xmlChar **)
                                    (*(long *)(local_148 + 8) + (long)local_84 * 0x38 + 0x18),
                                   (xmlChar *)"last"), iVar4 == 0)))))) {
          if (param_2[1] != 0xffffffff) {
            iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
            local_154 = local_154 + iVar4;
          }
          if (*(int *)(param_1 + 0x10) == 0) {
            if (param_2[2] == 0xffffffff) {
              local_180 = local_154;
            }
            else if (*(long *)(param_1 + 0x20) == 0) {
              local_180 = local_154;
            }
            else {
              local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
              if (**(int **)(param_1 + 0x20) == 7) {
                local_80 = 0;
                if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 7)) {
                  _xmlXPathErr(param_1,0xb);
                  local_180 = 0;
                }
                else {
                  local_c8 = (xmlXPathObjectPtr)_valuePop(param_1);
                  local_78 = local_c8->user;
                  *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                  if ((local_78 == (int *)0x0) || (*local_78 == 0)) {
                    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0;
                    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0;
                    if (param_2[2] != 0xffffffff) {
                      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) +
                                                    (long)(int)param_2[2] * 0x38);
                      local_154 = local_154 + iVar4;
                    }
                    local_d0 = (xmlXPathObjectPtr)_valuePop(param_1);
                    if (local_d0 != (xmlXPathObjectPtr)0x0) {
                      _xmlXPathFreeObject(local_d0);
                    }
                    _valuePush(param_1,local_c8);
                    if (*(int *)(param_1 + 0x10) == 0) {
                      local_180 = local_154;
                    }
                    else {
                      local_180 = 0;
                    }
                  }
                  else {
                    local_80 = _xmlXPtrLocationSetCreate(0);
                    for (local_94 = 0; local_94 < *local_78; local_94 = local_94 + 1) {
                      *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) =
                           *(undefined8 *)
                            (*(long *)(*(long *)(local_78 + 2) + (long)local_94 * 8) + 0x28);
                      *(int *)(*(long *)(param_1 + 0x18) + 0x68) = *local_78;
                      *(int *)(*(long *)(param_1 + 0x18) + 0x6c) = local_94 + 1;
                      local_c0 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8))
                      ;
                      _valuePush(param_1,local_c0);
                      if (param_2[2] != 0xffffffff) {
                        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) +
                                                      (long)(int)param_2[2] * 0x38);
                        local_154 = local_154 + iVar4;
                      }
                      if (*(int *)(param_1 + 0x10) != 0) {
                        _xmlXPathFreeObject(local_c8);
                        return 0;
                      }
                      local_d0 = (xmlXPathObjectPtr)_valuePop(param_1);
                      iVar4 = _xmlXPathEvaluatePredicateResult(param_1,local_d0);
                      if (iVar4 != 0) {
                        pxVar5 = _xmlXPathObjectCopy(*(xmlXPathObjectPtr *)
                                                      (*(long *)(local_78 + 2) + (long)local_94 * 8)
                                                    );
                        _xmlXPtrLocationSetAdd(local_80,pxVar5);
                      }
                      if (local_d0 != (xmlXPathObjectPtr)0x0) {
                        _xmlXPathFreeObject(local_d0);
                      }
                      if (*(long *)(param_1 + 0x20) == local_c0) {
                        local_d0 = (xmlXPathObjectPtr)_valuePop(param_1);
                        _xmlXPathFreeObject(local_d0);
                      }
                      *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                    }
                    _xmlXPathFreeObject(local_c8);
                    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0xffffffff;
                    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0xffffffff;
                    uVar6 = _xmlXPtrWrapLocationSet(local_80);
                    _valuePush(param_1,uVar6);
                    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_a8;
                    local_180 = local_154;
                  }
                }
              }
              else if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
                _xmlXPathErr(param_1,0xb);
                local_180 = 0;
              }
              else {
                local_c8 = (xmlXPathObjectPtr)_valuePop(param_1);
                local_b0 = local_c8->nodesetval;
                local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
                local_a0 = **(undefined8 **)(param_1 + 0x18);
                *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                if ((local_b0 == (xmlNodeSetPtr)0x0) || (local_b0->nodeNr == 0)) {
                  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0;
                  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0;
                  _valuePush(param_1,local_c8);
                  *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_a8;
                  if (*(int *)(param_1 + 0x10) != 0) {
                    return 0;
                  }
                }
                else {
                  local_b8 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
                  for (local_94 = 0; local_94 < local_b0->nodeNr; local_94 = local_94 + 1) {
                    *(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8) = local_b0->nodeTab[local_94];
                    if ((local_b0->nodeTab[local_94]->type != XML_NAMESPACE_DECL) &&
                       (local_b0->nodeTab[local_94]->doc != (_xmlDoc *)0x0)) {
                      **(undefined8 **)(param_1 + 0x18) = local_b0->nodeTab[local_94]->doc;
                    }
                    local_c0 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
                    _valuePush(param_1,local_c0);
                    *(int *)(*(long *)(param_1 + 0x18) + 0x68) = local_b0->nodeNr;
                    *(int *)(*(long *)(param_1 + 0x18) + 0x6c) = local_94 + 1;
                    if (param_2[2] != 0xffffffff) {
                      iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) +
                                                    (long)(int)param_2[2] * 0x38);
                      local_154 = local_154 + iVar4;
                    }
                    if (*(int *)(param_1 + 0x10) != 0) {
                      _xmlXPathFreeNodeSet(local_b8);
                      _xmlXPathFreeObject(local_c8);
                      return 0;
                    }
                    local_d0 = (xmlXPathObjectPtr)_valuePop(param_1);
                    iVar4 = _xmlXPathEvaluatePredicateResult(param_1,local_d0);
                    if (iVar4 != 0) {
                      _xmlXPathNodeSetAdd(local_b8,local_b0->nodeTab[local_94]);
                    }
                    if (local_d0 != (xmlXPathObjectPtr)0x0) {
                      _xmlXPathFreeObject(local_d0);
                    }
                    if (*(long *)(param_1 + 0x20) == local_c0) {
                      local_d0 = (xmlXPathObjectPtr)_valuePop(param_1);
                      _xmlXPathFreeObject(local_d0);
                    }
                    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                  }
                  _xmlXPathFreeObject(local_c8);
                  *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
                  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0xffffffff;
                  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0xffffffff;
                  **(undefined8 **)(param_1 + 0x18) = local_a0;
                  uVar6 = _xmlXPathWrapNodeSet(local_b8);
                  _valuePush(param_1,uVar6);
                }
                *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = local_a8;
                local_180 = local_154;
              }
            }
          }
          else {
            local_180 = 0;
          }
        }
        else {
          local_168 = 0;
          local_180 = FUN_1001b961f(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38,
                                    &local_168);
          local_180 = local_154 + local_180;
          if (*(int *)(param_1 + 0x10) == 0) {
            if ((((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
                (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) &&
               ((*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) != 0 &&
                (1 < **(int **)(*(long *)(param_1 + 0x20) + 8))))) {
              **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) =
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) +
                     (long)**(int **)(*(long *)(param_1 + 0x20) + 8) * 8 + -8);
              **(undefined4 **)(*(long *)(param_1 + 0x20) + 8) = 1;
            }
          }
          else {
            local_180 = 0;
          }
        }
      }
      else {
        local_160 = 0;
        local_180 = FUN_1001b8e81(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38,
                                  &local_160);
        local_180 = local_154 + local_180;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
             ((*(long *)(*(long *)(param_1 + 0x20) + 8) != 0 &&
              (1 < **(int **)(*(long *)(param_1 + 0x20) + 8))))) {
            **(undefined4 **)(*(long *)(param_1 + 0x20) + 8) = 1;
          }
        }
        else {
          local_180 = 0;
        }
      }
      break;
    case 0x12:
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
           (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) {
          _xmlXPathNodeSetSort(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
        }
        local_180 = local_154;
      }
      else {
        local_180 = 0;
      }
      break;
    case 0x13:
      local_50 = 0;
      if (param_2[1] != 0xffffffff) {
        iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[1] * 0x38);
        local_154 = local_154 + iVar4;
      }
      if (param_2[2] == 0xffffffff) {
        local_180 = local_154;
      }
      else {
        if (**(int **)(param_1 + 0x20) == 7) {
          if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 7)) {
            _xmlXPathErr(param_1,0xb);
            return 0;
          }
          local_60 = (xmlXPathObjectPtr)_valuePop(param_1);
          local_48 = local_60->user;
          if ((local_48 == (int *)0x0) || (*local_48 == 0)) {
            *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0;
            iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38);
            local_154 = local_154 + iVar4;
            local_68 = (xmlXPathObjectPtr)_valuePop(param_1);
            if (local_68 != (xmlXPathObjectPtr)0x0) {
              _xmlXPathFreeObject(local_68);
            }
            _valuePush(param_1,local_60);
            if (*(int *)(param_1 + 0x10) != 0) {
              return 0;
            }
            return local_154;
          }
          local_50 = _xmlXPtrLocationSetCreate(0);
          for (local_38 = 0; local_38 < *local_48; local_38 = local_38 + 1) {
            *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) =
                 *(undefined8 *)(*(long *)(*(long *)(local_48 + 2) + (long)local_38 * 8) + 0x28);
            *(int *)(*(long *)(param_1 + 0x18) + 0x68) = *local_48;
            *(int *)(*(long *)(param_1 + 0x18) + 0x6c) = local_38 + 1;
            local_58 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
            _valuePush(param_1,local_58);
            if (param_2[2] != 0xffffffff) {
              iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) + (long)(int)param_2[2] * 0x38)
              ;
              local_154 = local_154 + iVar4;
            }
            if (*(int *)(param_1 + 0x10) != 0) {
              _xmlXPathFreeObject(local_60);
              return 0;
            }
            local_68 = (xmlXPathObjectPtr)_valuePop(param_1);
            if (local_68->type == XPATH_LOCATIONSET) {
              local_30 = local_68->user;
              for (local_34 = 0; local_34 < *local_30; local_34 = local_34 + 1) {
                local_70 = _xmlXPtrNewRange(*(undefined8 *)
                                             (*(long *)(*(long *)(local_48 + 2) + (long)local_38 * 8
                                                       ) + 0x28),
                                            *(undefined4 *)
                                             (*(long *)(*(long *)(local_48 + 2) + (long)local_38 * 8
                                                       ) + 0x30),
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(local_30 + 2) + (long)local_34 * 8
                                                       ) + 0x38),
                                            *(undefined4 *)
                                             (*(long *)(*(long *)(local_30 + 2) + (long)local_34 * 8
                                                       ) + 0x40));
                if (local_70 != 0) {
                  _xmlXPtrLocationSetAdd(local_50,local_70);
                }
              }
            }
            else {
              local_70 = _xmlXPtrNewRangeNodeObject
                                   (*(undefined8 *)
                                     (*(long *)(*(long *)(local_48 + 2) + (long)local_38 * 8) + 0x28
                                     ),local_68);
              if (local_70 != 0) {
                _xmlXPtrLocationSetAdd(local_50,local_70);
              }
            }
            if (local_68 != (xmlXPathObjectPtr)0x0) {
              _xmlXPathFreeObject(local_68);
            }
            if (*(long *)(param_1 + 0x20) == local_58) {
              local_68 = (xmlXPathObjectPtr)_valuePop(param_1);
              _xmlXPathFreeObject(local_68);
            }
            *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
          }
        }
        else {
          if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
            _xmlXPathErr(param_1,0xb);
            return 0;
          }
          local_60 = (xmlXPathObjectPtr)_valuePop(param_1);
          local_40 = local_60->nodesetval;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
          local_50 = _xmlXPtrLocationSetCreate(0);
          if (local_40 != (xmlNodeSetPtr)0x0) {
            for (local_38 = 0; local_38 < local_40->nodeNr; local_38 = local_38 + 1) {
              *(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8) = local_40->nodeTab[local_38];
              local_58 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
              _valuePush(param_1,local_58);
              if (param_2[2] != 0xffffffff) {
                iVar4 = FUN_1001b9e7d(param_1,*(long *)(local_148 + 8) +
                                              (long)(int)param_2[2] * 0x38);
                local_154 = local_154 + iVar4;
              }
              if (*(int *)(param_1 + 0x10) != 0) {
                _xmlXPathFreeObject(local_60);
                return 0;
              }
              local_68 = (xmlXPathObjectPtr)_valuePop(param_1);
              local_70 = _xmlXPtrNewRangeNodeObject(local_40->nodeTab[local_38],local_68);
              if (local_70 != 0) {
                _xmlXPtrLocationSetAdd(local_50,local_70);
              }
              if (local_68 != (xmlXPathObjectPtr)0x0) {
                _xmlXPathFreeObject(local_68);
              }
              if (*(long *)(param_1 + 0x20) == local_58) {
                local_68 = (xmlXPathObjectPtr)_valuePop(param_1);
                _xmlXPathFreeObject(local_68);
              }
              *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
            }
          }
        }
        _xmlXPathFreeObject(local_60);
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = 0xffffffff;
        uVar6 = _xmlXPtrWrapLocationSet(local_50);
        _valuePush(param_1,uVar6);
        local_180 = local_154;
      }
      break;
    default:
      ppxVar7 = ___xmlGenericError();
      pxVar3 = *ppxVar7;
      uVar1 = *param_2;
      ppvVar8 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar8,"XPath: unknown precompiled operation %d\n",(ulong)uVar1);
      local_180 = local_154;
    }
  }
  else {
    local_180 = 0;
  }
  return local_180;
}

