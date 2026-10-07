
void FUN_100816200(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,int param_7,int param_8,long *param_9,long *param_10)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  
  plVar8 = (long *)*param_9;
  plVar9 = (long *)*param_10;
  plVar5 = plVar9;
  plVar7 = plVar8;
  if (param_7 == 3) {
    plVar5 = plVar8;
    plVar7 = plVar9;
  }
  if ((plVar7 != (long *)0x0) && (plVar5 != (long *)0x0)) {
    do {
      plVar1 = plVar7 + 3;
      plVar2 = plVar7 + 2;
      plVar6 = plVar2;
      if (param_7 == 3) {
        plVar6 = plVar1;
      }
      plVar6 = (long *)*plVar6;
      lVar3 = *plVar7;
      if (param_8 < 0) {
        if ((((param_6 == 3) && ((*(byte *)(lVar3 + 0x40) & 2) != 0)) ||
            ((param_5 == 0xfffffffffffffffe && (*(long *)(lVar3 + 0x38) == 1)))) ||
           ((((((param_1 == 0 || ((*(ulong *)(lVar3 + 0x18) & param_1) != 0)) &&
               ((param_2 == 0 || ((*(ulong *)(lVar3 + 0x20) & param_2) != 0)))) &&
              ((((param_3 == 0 || ((*(ulong *)(lVar3 + 0x28) & param_3) != 0)) &&
                ((param_4 == 0 || ((*(ulong *)(lVar3 + 0x30) & param_4) != 0)))) &&
               ((param_5 == 0 || ((*(ulong *)(lVar3 + 0x38) & param_5) != 0)))))) &&
             (((param_6 & 3) == 0 || ((*(ulong *)(lVar3 + 0x40) & param_6 & 3) != 0)))) &&
            (((param_6 & 0x1fc) == 0 || ((*(ulong *)(lVar3 + 0x40) & param_6 & 0x1fc) != 0))))))
        goto LAB_100816350;
      }
      else if (*(int *)(lVar3 + 0x50) == param_8) {
LAB_100816350:
        if (param_7 == 4) {
          if (((int)plVar7[1] != 0) && (plVar9 != plVar7)) {
            if (plVar8 == plVar7) {
              plVar8 = (long *)*plVar2;
            }
            lVar3 = *plVar1;
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x10) = *plVar2;
            }
            if (*plVar2 != 0) {
              *(long *)(*plVar2 + 0x18) = lVar3;
            }
            plVar9[2] = (long)plVar7;
            plVar7[3] = (long)plVar9;
            plVar7[2] = 0;
            plVar9 = plVar7;
          }
        }
        else if (param_7 == 1) {
          if ((int)plVar7[1] == 0) {
            if (plVar9 != plVar7) {
              if (plVar8 == plVar7) {
                plVar8 = (long *)*plVar2;
              }
              lVar3 = *plVar1;
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x10) = *plVar2;
              }
              if (*plVar2 != 0) {
                *(long *)(*plVar2 + 0x18) = lVar3;
              }
              plVar9[2] = (long)plVar7;
              plVar7[3] = (long)plVar9;
              plVar7[2] = 0;
              plVar9 = plVar7;
            }
            *(undefined4 *)(plVar7 + 1) = 1;
          }
        }
        else if (param_7 == 3) {
          if ((int)plVar7[1] != 0) {
            if (plVar8 != plVar7) {
              if (plVar9 == plVar7) {
                plVar9 = (long *)*plVar1;
              }
              lVar3 = *plVar2;
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x18) = *plVar1;
              }
              if (*plVar1 != 0) {
                *(long *)(*plVar1 + 0x10) = lVar3;
              }
              plVar8[3] = (long)plVar7;
              plVar7[2] = (long)plVar8;
              plVar7[3] = 0;
              plVar8 = plVar7;
            }
            *(undefined4 *)(plVar7 + 1) = 0;
          }
        }
        else if (param_7 == 2) {
          plVar4 = (long *)plVar7[2];
          if (plVar8 != plVar7) {
            *(long **)(*plVar1 + 0x10) = (long *)plVar7[2];
            plVar4 = plVar8;
          }
          plVar8 = plVar4;
          if (plVar9 == plVar7) {
            plVar9 = (long *)*plVar1;
          }
          *(undefined4 *)(plVar7 + 1) = 0;
          lVar3 = plVar7[2];
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x18) = *plVar1;
          }
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 0x10) = lVar3;
          }
          plVar7[3] = 0;
          *plVar2 = 0;
        }
      }
    } while ((plVar6 != (long *)0x0) && (bVar10 = plVar7 != plVar5, plVar7 = plVar6, bVar10));
  }
  *param_9 = (long)plVar8;
  *param_10 = (long)plVar9;
  return;
}

