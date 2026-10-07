
int FUN_1001b8e81(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  xmlXPathObjectPtr pxVar5;
  int local_58;
  int local_38;
  
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    switch(*param_2) {
    case 0:
      local_58 = 0;
      break;
    default:
      local_58 = FUN_1001b9e7d(param_1,param_2);
      break;
    case 7:
      local_58 = FUN_1001b8e81(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[1] * 0x38,param_3);
      if (*(int *)(param_1 + 0x10) == 0) {
        if ((((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
            (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) &&
           (0 < **(int **)(*(long *)(param_1 + 0x20) + 8))) {
          _xmlXPathNodeSetSort(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
          *param_3 = **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8);
        }
        iVar2 = FUN_1001b8e81(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38,param_3);
        if (*(int *)(param_1 + 0x10) == 0) {
          if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
            _xmlXPathErr(param_1,0xb);
            local_58 = 0;
          }
          else {
            pxVar5 = (xmlXPathObjectPtr)_valuePop(param_1);
            if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
              _xmlXPathErr(param_1,0xb);
              local_58 = 0;
            }
            else {
              lVar3 = _valuePop(param_1);
              uVar4 = _xmlXPathNodeSetMerge(*(undefined8 *)(lVar3 + 8),pxVar5->nodesetval);
              *(undefined8 *)(lVar3 + 8) = uVar4;
              _valuePush(param_1,lVar3);
              _xmlXPathFreeObject(pxVar5);
              if (iVar2 < local_58) {
                FUN_1001a5b06(param_2);
              }
              local_58 = local_58 + iVar2;
            }
          }
        }
        else {
          local_58 = 0;
        }
      }
      else {
        local_58 = 0;
      }
      break;
    case 8:
      _xmlXPathRoot(param_1);
      local_58 = 0;
      break;
    case 9:
      if (param_2[1] != -1) {
        local_38 = FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[1] * 0x38);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != -1) {
          iVar2 = FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38);
          local_38 = local_38 + iVar2;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar4 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
          _valuePush(param_1,uVar4);
          local_58 = local_38;
        }
        else {
          local_58 = 0;
        }
      }
      else {
        local_58 = 0;
      }
      break;
    case 10:
      if (param_2[1] != -1) {
        local_38 = FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[1] * 0x38);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != -1) {
          iVar2 = FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38);
          local_38 = local_38 + iVar2;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
          local_58 = local_38;
        }
        else {
          local_58 = 0;
        }
      }
      else {
        local_58 = 0;
      }
      break;
    case 0xb:
      if (param_2[1] == -1) {
        local_58 = 0;
      }
      else {
        local_58 = FUN_1001b9e7d(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[1] * 0x38);
        if (*(int *)(param_1 + 0x10) == 0) {
          if (((((param_2[2] == -1) ||
                (*(int *)(*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38) != 0x10)) ||
               ((*(int *)(*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38 + 4) != -1 ||
                ((*(int *)(*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38 + 8) == -1 ||
                 (*(int *)(*(long *)(lVar3 + 8) +
                          (long)*(int *)(*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38 + 8) *
                          0x38) != 0xc)))))) ||
              (piVar1 = *(int **)(*(long *)(lVar3 + 8) +
                                  (long)*(int *)(*(long *)(lVar3 + 8) + (long)(int)param_2[2] * 0x38
                                                + 8) * 0x38 + 0x18), piVar1 == (int *)0x0)) ||
             ((*piVar1 != 3 || (*(double *)(piVar1 + 6) != (double)(int)*(double *)(piVar1 + 6)))))
          {
            iVar2 = FUN_1001b784a(param_1,param_2,param_3,0);
            local_58 = local_58 + iVar2;
          }
          else {
            FUN_1001b83d5(param_1,param_2,(int)*(double *)(piVar1 + 6),param_3,0);
          }
        }
        else {
          local_58 = 0;
        }
      }
      break;
    case 0xc:
      pxVar5 = _xmlXPathObjectCopy(*(xmlXPathObjectPtr *)(param_2 + 6));
      _valuePush(param_1,pxVar5);
      local_58 = 0;
      break;
    case 0x12:
      if (param_2[1] != -1) {
        local_38 = FUN_1001b8e81(param_1,*(long *)(lVar3 + 8) + (long)(int)param_2[1] * 0x38,param_3
                                );
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
           (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) {
          _xmlXPathNodeSetSort(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
        }
        local_58 = local_38;
      }
      else {
        local_58 = 0;
      }
    }
  }
  else {
    local_58 = 0;
  }
  return local_58;
}

