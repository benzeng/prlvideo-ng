
undefined4
FUN_1009125e0(long param_1,int param_2,int *param_3,int *param_4,long param_5,undefined4 *param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  xmlGenericErrorFunc pxVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  int local_5c;
  int local_4c;
  int local_48;
  int local_44;
  long local_30;
  int local_1c;
  
  local_5c = 0;
  if ((((param_1 != 0) && (param_3 != (int *)0x0)) && (param_4 != (int *)0x0)) &&
     ((param_5 != 0 && (0 < *param_3)))) {
    iVar2 = *param_3;
    *param_3 = 0;
    *param_4 = 0;
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x40) == 0)) {
      if (param_6 != (undefined4 *)0x0) {
        if (**(int **)(param_1 + 0x20) == 2) {
          *param_6 = 1;
        }
        else {
          *param_6 = 0;
        }
      }
      if (param_2 == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          return 0xffffffff;
        }
        local_30 = *(long *)(param_1 + 0x20);
      }
      else {
        if (*(long *)(param_1 + 0x78) == 0) {
          return 0xffffffff;
        }
        local_30 = *(long *)(param_1 + 0x78);
      }
      local_44 = 0;
      while ((local_44 < *(int *)(local_30 + 0x14) && (local_5c < iVar2))) {
        plVar1 = (long *)(*(long *)(local_30 + 0x18) + (long)local_44 * 0x18);
        if ((-1 < (int)plVar1[1]) &&
           ((lVar4 = *plVar1, lVar4 != 0 && (*(long *)(lVar4 + 0x18) != 0)))) {
          if ((int)plVar1[2] == 0x123457) {
            ppxVar6 = ___xmlGenericError();
            pxVar5 = *ppxVar6;
            ppvVar7 = ___xmlGenericErrorContext();
            (*pxVar5)(*ppvVar7,"Unimplemented block at %s:%d\n","xmlregexp.c",0xd77);
          }
          else if ((int)plVar1[2] == 0x123456) {
            ppxVar6 = ___xmlGenericError();
            pxVar5 = *ppxVar6;
            ppvVar7 = ___xmlGenericErrorContext();
            (*pxVar5)(*ppvVar7,"Unimplemented block at %s:%d\n","xmlregexp.c",0xd7a);
          }
          else if (*(int *)((long)plVar1 + 0xc) < 0) {
            if ((*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (long)(int)plVar1[1] * 8) != 0
                ) && (**(int **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (long)(int)plVar1[1] * 8
                                ) != 4)) {
              if (*(int *)(lVar4 + 0x28) == 0) {
                *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x18);
              }
              else {
                *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x20);
              }
              local_5c = local_5c + 1;
              *param_3 = *param_3 + 1;
            }
          }
          else {
            if (param_2 == 0) {
              local_1c = *(int *)(*(long *)(param_1 + 0x40) + (long)*(int *)((long)plVar1 + 0xc) * 4
                                 );
            }
            else {
              local_1c = *(int *)(*(long *)(param_1 + 0x88) + (long)*(int *)((long)plVar1 + 0xc) * 4
                                 );
            }
            if (local_1c <
                *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x30) +
                         (long)*(int *)((long)plVar1 + 0xc) * 8 + 4)) {
              if (*(int *)(lVar4 + 0x28) == 0) {
                *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x18);
              }
              else {
                *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x20);
              }
              local_5c = local_5c + 1;
              *param_3 = *param_3 + 1;
            }
          }
        }
        local_44 = local_44 + 1;
      }
      local_44 = 0;
      while ((local_44 < *(int *)(local_30 + 0x14) && (local_5c < iVar2))) {
        plVar1 = (long *)(*(long *)(local_30 + 0x18) + (long)local_44 * 0x18);
        if ((((-1 < (int)plVar1[1]) &&
             (((lVar4 = *plVar1, lVar4 != 0 && (*(long *)(lVar4 + 0x18) != 0)) &&
              ((int)plVar1[2] != 0x123457)))) &&
            ((((int)plVar1[2] != 0x123456 && (*(int *)((long)plVar1 + 0xc) < 0)) &&
             (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (long)(int)plVar1[1] * 8) != 0)))
            ) && (**(int **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (long)(int)plVar1[1] * 8) ==
                  4)) {
          if (*(int *)(lVar4 + 0x28) == 0) {
            *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x18);
          }
          else {
            *(undefined8 *)((long)local_5c * 8 + param_5) = *(undefined8 *)(lVar4 + 0x20);
          }
          local_5c = local_5c + 1;
          *param_4 = *param_4 + 1;
        }
        local_44 = local_44 + 1;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (param_2 == 0) {
        local_48 = *(int *)(param_1 + 0x50);
      }
      else {
        if (*(int *)(param_1 + 0x70) == -1) {
          return 0xffffffff;
        }
        local_48 = *(int *)(param_1 + 0x70);
      }
      if (param_6 != (undefined4 *)0x0) {
        if (*(int *)(*(long *)(lVar4 + 0x40) + (long)((*(int *)(lVar4 + 0x50) + 1) * local_48) * 4)
            == 2) {
          *param_6 = 1;
        }
        else {
          *param_6 = 0;
        }
      }
      local_4c = 0;
      while ((local_4c < *(int *)(lVar4 + 0x50) && (local_5c < iVar2))) {
        iVar3 = *(int *)(*(long *)(lVar4 + 0x40) +
                         (long)((*(int *)(lVar4 + 0x50) + 1) * local_48 + local_4c) * 4 + 4);
        if ((0 < iVar3) &&
           ((iVar3 <= *(int *)(lVar4 + 0x3c) &&
            (*(int *)(*(long *)(lVar4 + 0x40) +
                     (long)((*(int *)(lVar4 + 0x50) + 1) * (iVar3 + -1)) * 4) != 4)))) {
          *(undefined8 *)((long)local_5c * 8 + param_5) =
               *(undefined8 *)(*(long *)(lVar4 + 0x58) + (long)local_4c * 8);
          local_5c = local_5c + 1;
          *param_3 = *param_3 + 1;
        }
        local_4c = local_4c + 1;
      }
      local_4c = 0;
      while ((local_4c < *(int *)(lVar4 + 0x50) && (local_5c < iVar2))) {
        iVar3 = *(int *)(*(long *)(lVar4 + 0x40) +
                         (long)((*(int *)(lVar4 + 0x50) + 1) * local_48 + local_4c) * 4 + 4);
        if ((0 < iVar3) &&
           ((iVar3 <= *(int *)(lVar4 + 0x3c) &&
            (*(int *)(*(long *)(lVar4 + 0x40) +
                     (long)((*(int *)(lVar4 + 0x50) + 1) * (iVar3 + -1)) * 4) == 4)))) {
          *(undefined8 *)((long)local_5c * 8 + param_5) =
               *(undefined8 *)(*(long *)(lVar4 + 0x58) + (long)local_4c * 8);
          local_5c = local_5c + 1;
          *param_4 = *param_4 + 1;
        }
        local_4c = local_4c + 1;
      }
    }
    return 0;
  }
  return 0xffffffff;
}

