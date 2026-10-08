
void _xmlXPtrEndPointFunction(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  xmlXPathObjectPtr obj;
  undefined8 uVar5;
  xmlXPathObjectPtr local_38;
  long local_30;
  int local_14;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 7 && (**(int **)(param_1 + 0x20) != 1)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        local_38 = obj;
        if (obj->type == XPATH_NODESET) {
          local_38 = (xmlXPathObjectPtr)_xmlXPtrNewLocationSetNodeSet(obj->nodesetval);
          _xmlXPathFreeObject(obj);
        }
        uVar5 = _xmlXPtrLocationSetCreate(0);
        piVar1 = local_38->user;
        if (piVar1 != (int *)0x0) {
          for (local_14 = 0; local_14 < *piVar1; local_14 = local_14 + 1) {
            piVar2 = *(int **)(*(long *)(piVar1 + 2) + (long)local_14 * 8);
            if (piVar2 != (int *)0x0) {
              local_30 = 0;
              if (*piVar2 == 5) {
                local_30 = FUN_1008f2681(*(undefined8 *)(piVar2 + 10),piVar2[0xc]);
              }
              else if (*piVar2 == 6) {
                lVar3 = *(long *)(piVar2 + 0xe);
                if (lVar3 == 0) {
                  if (*(long *)(piVar2 + 10) == 0) {
                    uVar4 = FUN_1008f4db1(0);
                    local_30 = FUN_1008f2681(0,uVar4);
                  }
                }
                else {
                  if (*(int *)(lVar3 + 8) == 2) {
                    _xmlXPathFreeObject(local_38);
                    _xmlXPtrFreeLocationSet(uVar5);
                    _xmlXPathErr(param_1,0x10);
                    return;
                  }
                  local_30 = FUN_1008f2681(lVar3,piVar2[0x10]);
                }
              }
              if (local_30 != 0) {
                _xmlXPtrLocationSetAdd(uVar5,local_30);
              }
            }
          }
        }
        _xmlXPathFreeObject(local_38);
        uVar5 = _xmlXPtrWrapLocationSet(uVar5);
        _valuePush(param_1,uVar5);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

