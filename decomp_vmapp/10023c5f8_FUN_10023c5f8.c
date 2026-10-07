
void FUN_10023c5f8(undefined8 param_1,char *param_2,int *param_3,void *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  xmlRegExecCtxtPtr pxVar5;
  long lVar6;
  int local_18;
  int local_10;
  int local_c;
  
  lVar2 = *(long *)((long)param_4 + 0xa8);
  local_18 = 0;
  if (param_4 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing context\n",param_2);
  }
  else {
    *(undefined4 *)((long)param_4 + 0xa0) = 1;
    if (param_3 == (int *)0x0) {
      if (*param_2 != '#') {
        _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing define\n",param_2);
        if ((param_4 != (void *)0x0) && (*(int *)((long)param_4 + 0x44) == 0)) {
          *(undefined4 *)((long)param_4 + 0x44) = 0x25;
        }
        *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
      }
    }
    else if ((param_4 == (void *)0x0) || (param_3 == (int *)0x0)) {
      _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing info\n",param_2);
      if ((param_4 != (void *)0x0) && (*(int *)((long)param_4 + 0x44) == 0)) {
        *(undefined4 *)((long)param_4 + 0x44) = 0x25;
      }
      *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
    }
    else if (*param_3 == 4) {
      if (*(int *)(lVar2 + 8) == 1) {
        if (*(long *)(param_3 + 0x1a) == 0) {
          *(undefined4 *)((long)param_4 + 0xa0) = 0;
          *(int **)((long)param_4 + 0xb0) = param_3;
        }
        else {
          pxVar5 = _xmlRegNewExecCtxt(*(xmlRegexpPtr *)(param_3 + 0x1a),FUN_10023c5f8,param_4);
          if (pxVar5 == (xmlRegExecCtxtPtr)0x0) {
            *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
          }
          else {
            FUN_10023c3ad(param_4,pxVar5);
            lVar6 = FUN_10022e535(param_4,lVar2);
            if (lVar6 == 0) {
              *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
            }
            else {
              uVar3 = *(undefined8 *)((long)param_4 + 0x60);
              *(long *)((long)param_4 + 0x60) = lVar6;
              if (*(long *)(param_3 + 0x12) != 0) {
                local_18 = FUN_10023e4bf(param_4,*(undefined8 *)(param_3 + 0x12));
                if (local_18 != 0) {
                  *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
                  FUN_100230bfa(param_4,0x18,*(undefined8 *)(lVar2 + 0x10),0,0);
                }
              }
              if (*(long *)((long)param_4 + 0x60) == 0) {
                if (*(long *)((long)param_4 + 0x68) != 0) {
                  local_10 = -1;
                  uVar1 = *(undefined4 *)((long)param_4 + 0x38);
                  for (local_c = 0; local_c < **(int **)((long)param_4 + 0x68);
                      local_c = local_c + 1) {
                    *(undefined8 *)((long)param_4 + 0x60) =
                         *(undefined8 *)
                          (*(long *)(*(long *)((long)param_4 + 0x68) + 8) + (long)local_c * 8);
                    *(undefined8 *)(*(long *)((long)param_4 + 0x60) + 8) = 0;
                    iVar4 = FUN_10023f775(param_4,0);
                    if (iVar4 == 0) {
                      local_10 = 0;
                      break;
                    }
                  }
                  if (local_10 != 0) {
                    *(uint *)((long)param_4 + 0x38) = *(uint *)((long)param_4 + 0x38) | 1;
                    FUN_10023f6f2(param_4);
                  }
                  for (local_c = 0; local_c < **(int **)((long)param_4 + 0x68);
                      local_c = local_c + 1) {
                    FUN_10022eca1(param_4,*(undefined8 *)
                                           (*(long *)(*(long *)((long)param_4 + 0x68) + 8) +
                                           (long)local_c * 8));
                  }
                  FUN_10022e384(param_4,*(undefined8 *)((long)param_4 + 0x68));
                  *(undefined8 *)((long)param_4 + 0x68) = 0;
                  if ((local_18 == 0) && (local_10 == -1)) {
                    *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
                  }
                  *(undefined4 *)((long)param_4 + 0x38) = uVar1;
                }
              }
              else {
                *(undefined8 *)(*(long *)((long)param_4 + 0x60) + 8) = 0;
                iVar4 = FUN_10023f775(param_4,1);
                if (iVar4 != 0) {
                  *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
                }
                FUN_10022eca1(param_4,*(undefined8 *)((long)param_4 + 0x60));
              }
              if ((*(int *)((long)param_4 + 0xa0) == -1) &&
                 (((*(uint *)((long)param_4 + 0x38) ^ 1) & 1) != 0)) {
                FUN_100230a38(param_4);
              }
              *(undefined8 *)((long)param_4 + 0x60) = uVar3;
            }
          }
        }
      }
      else {
        FUN_100230bfa(param_4,0x17,0,0,0);
        if (((*(uint *)((long)param_4 + 0x38) ^ 1) & 1) != 0) {
          FUN_100230a38(param_4);
        }
        *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
      }
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s define is not element\n",param_2);
      if (*(int *)((long)param_4 + 0x44) == 0) {
        *(undefined4 *)((long)param_4 + 0x44) = 0x25;
      }
      *(undefined4 *)((long)param_4 + 0xa0) = 0xffffffff;
    }
  }
  return;
}

