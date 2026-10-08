
int FUN_1008ecf47(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  xmlXPathObjectPtr pxVar8;
  int local_78;
  int local_50;
  
  local_50 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    switch(*param_2) {
    case 0:
      local_78 = 0;
      break;
    default:
      local_78 = FUN_1008ed7a5(param_1,param_2);
      break;
    case 7:
      uVar7 = **(undefined8 **)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c);
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68);
      local_78 = FUN_1008ecf47(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[1] * 0x38,param_3);
      if (*(int *)(param_1 + 0x10) == 0) {
        if ((((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
            (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) &&
           (0 < **(int **)(*(long *)(param_1 + 0x20) + 8))) {
          _xmlXPathNodeSetSort(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
          *param_3 = *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) +
                       (long)**(int **)(*(long *)(param_1 + 0x20) + 8) * 8 + -8);
        }
        **(undefined8 **)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = uVar3;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c) = uVar1;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68) = uVar2;
        iVar5 = FUN_1008ecf47(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38,param_3);
        if (*(int *)(param_1 + 0x10) == 0) {
          if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
            _xmlXPathErr(param_1,0xb);
            local_78 = 0;
          }
          else {
            pxVar8 = (xmlXPathObjectPtr)_valuePop(param_1);
            if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
              _xmlXPathErr(param_1,0xb);
              local_78 = 0;
            }
            else {
              lVar6 = _valuePop(param_1);
              uVar7 = _xmlXPathNodeSetMerge(*(undefined8 *)(lVar6 + 8),pxVar8->nodesetval);
              *(undefined8 *)(lVar6 + 8) = uVar7;
              _valuePush(param_1,lVar6);
              _xmlXPathFreeObject(pxVar8);
              if (iVar5 < local_78) {
                FUN_1008d942e(param_2);
              }
              local_78 = local_78 + iVar5;
            }
          }
        }
        else {
          local_78 = 0;
        }
      }
      else {
        local_78 = 0;
      }
      break;
    case 8:
      _xmlXPathRoot(param_1);
      local_78 = 0;
      break;
    case 9:
      if (param_2[1] != -1) {
        local_50 = FUN_1008ed7a5(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[1] * 0x38);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != -1) {
          iVar5 = FUN_1008ed7a5(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38);
          local_50 = local_50 + iVar5;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar7 = _xmlXPathNewNodeSet(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
          _valuePush(param_1,uVar7);
          local_78 = local_50;
        }
        else {
          local_78 = 0;
        }
      }
      else {
        local_78 = 0;
      }
      break;
    case 10:
      if (param_2[1] != -1) {
        local_50 = FUN_1008ed7a5(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[1] * 0x38);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (param_2[2] != -1) {
          iVar5 = FUN_1008ed7a5(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38);
          local_50 = local_50 + iVar5;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = 0;
          local_78 = local_50;
        }
        else {
          local_78 = 0;
        }
      }
      else {
        local_78 = 0;
      }
      break;
    case 0xb:
      if (param_2[1] == -1) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_1008ed7a5(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[1] * 0x38);
        if (*(int *)(param_1 + 0x10) == 0) {
          if (((((param_2[2] == -1) ||
                (*(int *)(*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38) != 0x10)) ||
               ((*(int *)(*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38 + 4) != -1 ||
                ((*(int *)(*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38 + 8) == -1 ||
                 (*(int *)(*(long *)(lVar6 + 8) +
                          (long)*(int *)(*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38 + 8) *
                          0x38) != 0xc)))))) ||
              (piVar4 = *(int **)(*(long *)(lVar6 + 8) +
                                  (long)*(int *)(*(long *)(lVar6 + 8) + (long)(int)param_2[2] * 0x38
                                                + 8) * 0x38 + 0x18), piVar4 == (int *)0x0)) ||
             ((*piVar4 != 3 || (*(double *)(piVar4 + 6) != (double)(int)*(double *)(piVar4 + 6)))))
          {
            iVar5 = FUN_1008eb172(param_1,param_2,0,param_3);
            local_78 = local_78 + iVar5;
          }
          else {
            iVar5 = FUN_1008ebcfd(param_1,param_2,(int)*(double *)(piVar4 + 6),0,param_3);
            local_78 = local_78 + iVar5;
          }
        }
        else {
          local_78 = 0;
        }
      }
      break;
    case 0xc:
      pxVar8 = _xmlXPathObjectCopy(*(xmlXPathObjectPtr *)(param_2 + 6));
      _valuePush(param_1,pxVar8);
      local_78 = 0;
      break;
    case 0x12:
      if (param_2[1] != -1) {
        local_50 = FUN_1008ecf47(param_1,*(long *)(lVar6 + 8) + (long)(int)param_2[1] * 0x38,param_3
                                );
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) == 1)) &&
           (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)) {
          _xmlXPathNodeSetSort(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
        }
        local_78 = local_50;
      }
      else {
        local_78 = 0;
      }
    }
  }
  else {
    local_78 = 0;
  }
  return local_78;
}

