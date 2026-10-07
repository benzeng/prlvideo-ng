
long FUN_1001bd0a7(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long local_70;
  undefined8 local_60;
  int local_44;
  int local_34;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    local_70 = 0;
  }
  else {
    local_44 = _xmlPatternMaxDepth(param_2);
    if (local_44 == -1) {
      local_70 = 0;
    }
    else {
      if (local_44 == -2) {
        local_44 = 10000;
      }
      iVar1 = _xmlPatternMinDepth(param_2);
      if (iVar1 == -1) {
        local_70 = 0;
      }
      else {
        iVar2 = _xmlPatternFromRoot(param_2);
        if (iVar2 < 0) {
          local_70 = 0;
        }
        else {
          local_70 = _xmlXPathNewNodeSet(0);
          if (local_70 == 0) {
            local_70 = 0;
          }
          else {
            if (iVar1 == 0) {
              if (iVar2 == 0) {
                _xmlXPathNodeSetAddUnique(*(undefined8 *)(local_70 + 8),param_1[1]);
              }
              else {
                _xmlXPathNodeSetAddUnique(*(undefined8 *)(local_70 + 8),*param_1);
              }
            }
            if (local_44 != 0) {
              if (iVar2 == 0) {
                if (param_1[1] != 0) {
                  if ((*(uint *)(param_1[1] + 8) < 0x16) &&
                     ((1L << ((byte)*(uint *)(param_1[1] + 8) & 0x3f) & 0x202a02U) != 0)) {
                    local_30 = param_1[1];
                  }
                  local_28 = local_30;
                }
              }
              else {
                local_30 = *param_1;
              }
              if ((local_30 != 0) && (lVar3 = _xmlPatternGetStreamCtxt(param_2), lVar3 != 0)) {
                if ((iVar2 != 0) &&
                   ((iVar1 = _xmlStreamPush(lVar3,0,0), -1 < iVar1 && (iVar1 == 1)))) {
                  _xmlXPathNodeSetAddUnique(*(undefined8 *)(local_70 + 8),local_30);
                }
                local_34 = 0;
LAB_1001bd366:
                if (((*(long *)(local_30 + 0x18) != 0) && (local_34 < local_44)) &&
                   (*(int *)(*(long *)(local_30 + 0x18) + 8) != 0x11)) {
                  local_30 = *(long *)(local_30 + 0x18);
                  local_34 = local_34 + 1;
                  if (*(int *)(local_30 + 8) == 0xe) goto LAB_1001bd3ad;
                  goto LAB_1001bd44f;
                }
LAB_1001bd3ad:
                if (local_30 != local_28) {
                  do {
                    if (*(long *)(local_30 + 0x30) == 0) goto LAB_1001bd3f2;
                    local_30 = *(long *)(local_30 + 0x30);
                  } while ((*(int *)(local_30 + 8) == 0x11) || (*(int *)(local_30 + 8) == 0xe));
                  goto LAB_1001bd29c;
                }
LAB_1001bd460:
                _xmlFreeStreamCtxt(lVar3);
              }
            }
          }
        }
      }
    }
  }
  return local_70;
  while (local_30 != 0) {
LAB_1001bd3f2:
    local_30 = *(long *)(local_30 + 0x28);
    local_34 = local_34 + -1;
    if ((local_30 == 0) || (local_30 == local_28)) goto LAB_1001bd460;
    if (*(int *)(local_30 + 8) == 1) {
      _xmlStreamPop(lVar3);
    }
    if (*(long *)(local_30 + 0x30) != 0) {
      local_30 = *(long *)(local_30 + 0x30);
      break;
    }
  }
LAB_1001bd44f:
  if ((local_30 == 0) || (local_34 < 0)) goto LAB_1001bd460;
LAB_1001bd29c:
  while (*(int *)(local_30 + 8) == 1) {
    if (*(long *)(local_30 + 0x48) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = *(undefined8 *)(*(long *)(local_30 + 0x48) + 0x10);
    }
    iVar1 = _xmlStreamPush(lVar3,*(undefined8 *)(local_30 + 0x10),local_60);
    if ((-1 < iVar1) && (iVar1 == 1)) {
      _xmlXPathNodeSetAddUnique(*(undefined8 *)(local_70 + 8),local_30);
    }
    if ((*(long *)(local_30 + 0x18) != 0) && (local_34 < local_44)) break;
    _xmlStreamPop(lVar3);
    do {
      if (*(long *)(local_30 + 0x30) == 0) goto LAB_1001bd366;
      local_30 = *(long *)(local_30 + 0x30);
    } while ((*(int *)(local_30 + 8) == 0x11) || (*(int *)(local_30 + 8) == 0xe));
  }
  goto LAB_1001bd366;
}

