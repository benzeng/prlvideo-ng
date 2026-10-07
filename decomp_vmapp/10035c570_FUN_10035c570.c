
undefined1 FUN_10035c570(long param_1,uint *param_2,uint *param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_38;
  int local_34;
  
  if (param_2 == (uint *)0x0) {
    *param_3 = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 6);
    if (lVar5 == 0) {
      *param_3 = param_2[1];
    }
    else {
      puVar1 = param_2 + 4;
      uVar7 = *param_2;
      piVar2 = (int *)(lVar5 + 0x1c);
      lVar12 = *(long *)(param_2 + 4);
      do {
        lVar11 = 0;
        if (param_4 != '\0') {
          lVar11 = rdtsc();
        }
        if (lVar12 == 0) {
          iVar8 = *piVar2;
          if (iVar8 == -1) {
            if (*(int *)(lVar5 + 4) == 0) {
              if (*(long *)(lVar5 + 0x10) == 0) {
                cVar6 = (*DAT_1011c7470)(*(undefined4 *)(lVar5 + 0x18));
                if (cVar6 == '\0') goto LAB_10035c910;
              }
              else {
                iVar8 = (*DAT_1011c7518)(*(long *)(lVar5 + 0x10),0,0);
                if (iVar8 == 0x911b) goto LAB_10035c910;
              }
              *piVar2 = 1;
              iVar8 = 1;
            }
            else {
              iVar8 = *(int *)(lVar5 + 8);
              if (iVar8 == 0) {
                *piVar2 = 0x7fffffff;
                iVar8 = 0x7fffffff;
              }
              else {
                if (param_4 == '\0') {
                  local_38 = 0;
                  (*DAT_1011c6130)(iVar8,0x8867,&local_38);
                  if (local_38 == 0) goto LAB_10035c910;
                  iVar8 = *(int *)(lVar5 + 8);
                }
                (*DAT_1011c6130)(iVar8,0x8866,piVar2);
                iVar8 = *piVar2;
              }
            }
          }
        }
        else {
          iVar8 = *(int *)(lVar12 + 0x1c);
          if (iVar8 == -1) {
            piVar3 = (int *)(lVar12 + 0x1c);
            if (*(int *)(lVar12 + 4) == 0) {
              if (*(long *)(lVar12 + 0x10) == 0) {
                cVar6 = (*DAT_1011c7470)(*(undefined4 *)(lVar12 + 0x18));
                if (cVar6 == '\0') goto LAB_10035c910;
              }
              else {
                iVar8 = (*DAT_1011c7518)(*(long *)(lVar12 + 0x10),0,0);
                if (iVar8 == 0x911b) {
LAB_10035c910:
                  *param_3 = 0xffffffff;
                  return 0;
                }
              }
              *piVar3 = 1;
              iVar8 = 1;
            }
            else {
              iVar8 = *(int *)(lVar12 + 8);
              if (iVar8 == 0) {
                *piVar3 = 0x7fffffff;
                iVar8 = 0x7fffffff;
              }
              else {
                if (param_4 == '\0') {
                  local_34 = 0;
                  (*DAT_1011c6130)(iVar8,0x8867,&local_34);
                  if (local_34 == 0) goto LAB_10035c910;
                  iVar8 = *(int *)(lVar12 + 8);
                }
                (*DAT_1011c6130)(iVar8,0x8866,piVar3);
                iVar8 = *piVar3;
              }
            }
          }
        }
        if (param_4 != '\0') {
          lVar9 = rdtsc();
          *(long *)(*(long *)(param_1 + 0x50) + 0xf0) =
               (*(long *)(*(long *)(param_1 + 0x50) + 0xf0) - lVar11) + lVar9;
        }
        if (6 < uVar7) {
          return 1;
        }
        if ((0x43U >> (uVar7 & 0x1f) & 1) != 0) {
LAB_10035c8d1:
          FUN_10035bc70(param_1);
          uVar7 = param_2[1] + 1;
          param_2[1] = uVar7;
          goto LAB_10035c8f8;
        }
        if ((0x30U >> (uVar7 & 0x1f) & 1) == 0) {
          if (uVar7 != 3) {
            return 1;
          }
          param_2[1] = param_2[1] + iVar8;
        }
        else if (iVar8 != 0) goto LAB_10035c8d1;
        lVar11 = *(long *)(lVar12 + 0x38);
        iVar8 = *(int *)(lVar12 + 0x24) + -1;
        *(int *)(lVar12 + 0x24) = iVar8;
        if (iVar8 == 0) {
          if (*(long *)(param_1 + 0x20) == lVar12) {
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
          plVar4 = (long *)(lVar12 + 0x30);
          if (*(long *)(param_1 + 0x18) == lVar12) {
            lVar9 = *plVar4;
            *(long *)(param_1 + 0x18) = lVar9;
          }
          else {
            lVar9 = *plVar4;
          }
          lVar10 = lVar11;
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x38) = lVar11;
            lVar10 = *(long *)(lVar12 + 0x38);
          }
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x30) = lVar9;
          }
          *(undefined4 *)(lVar12 + 0x28) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *plVar4 = 0;
          lVar9 = *(long *)(param_1 + 8);
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x38) = lVar12;
            *(long *)(lVar12 + 0x30) = lVar9;
          }
          *(long *)(param_1 + 8) = lVar12;
        }
        if (lVar12 == lVar5) {
          param_2[6] = 0;
          param_2[7] = 0;
          puVar1[0] = 0;
          puVar1[1] = 0;
          break;
        }
        *(long *)puVar1 = lVar11;
        lVar12 = lVar11;
      } while (lVar11 != 0);
      uVar7 = param_2[1];
LAB_10035c8f8:
      *param_3 = uVar7;
    }
  }
  return 1;
}

