
void FUN_1000e8bb0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 != param_1) {
    do {
      plVar4 = (long *)param_2[2];
      if ((char)plVar4[3] != '\0') {
        return;
      }
      plVar3 = (long *)plVar4[2];
      lVar5 = *plVar3;
      if ((long *)lVar5 == plVar4) {
        lVar5 = plVar3[1];
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0x18) != '\0')) {
          if ((long *)*plVar4 != param_2) {
            plVar1 = (long *)plVar4[1];
            lVar5 = *plVar1;
            plVar4[1] = lVar5;
            if (lVar5 != 0) {
              *(long **)(lVar5 + 0x10) = plVar4;
              plVar3 = (long *)plVar4[2];
            }
            plVar1[2] = (long)plVar3;
            plVar3 = (long *)plVar4[2];
            if ((long *)*plVar3 == plVar4) {
              *plVar3 = (long)plVar1;
            }
            else {
              plVar3[1] = (long)plVar1;
            }
            *plVar1 = (long)plVar4;
            plVar4[2] = (long)plVar1;
            plVar3 = (long *)plVar1[2];
            plVar4 = plVar1;
          }
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar4 = (long *)*plVar3;
          lVar5 = plVar4[1];
          *plVar3 = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
          }
          plVar4[2] = plVar3[2];
          puVar2 = (undefined8 *)plVar3[2];
          if ((long *)*puVar2 == plVar3) {
            *puVar2 = plVar4;
            plVar4[1] = (long)plVar3;
          }
          else {
            puVar2[1] = plVar4;
            plVar4[1] = (long)plVar3;
          }
LAB_1000e8d2c:
          plVar3[2] = (long)plVar4;
          return;
        }
      }
      else if ((lVar5 == 0) || (*(char *)(lVar5 + 0x18) != '\0')) {
        if ((long *)*plVar4 == param_2) {
          plVar1 = (long *)*plVar4;
          lVar5 = plVar1[1];
          *plVar4 = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar4;
            plVar3 = (long *)plVar4[2];
          }
          plVar1[2] = (long)plVar3;
          plVar3 = (long *)plVar4[2];
          if ((long *)*plVar3 == plVar4) {
            *plVar3 = (long)plVar1;
          }
          else {
            plVar3[1] = (long)plVar1;
          }
          plVar1[1] = (long)plVar4;
          plVar4[2] = (long)plVar1;
          plVar3 = (long *)plVar1[2];
          plVar4 = plVar1;
        }
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar3 + 3) = 0;
        plVar4 = (long *)plVar3[1];
        lVar5 = *plVar4;
        plVar3[1] = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
        }
        plVar4[2] = plVar3[2];
        puVar2 = (undefined8 *)plVar3[2];
        if ((long *)*puVar2 == plVar3) {
          *puVar2 = plVar4;
        }
        else {
          puVar2[1] = plVar4;
        }
        *plVar4 = (long)plVar3;
        goto LAB_1000e8d2c;
      }
      *(undefined1 *)(plVar4 + 3) = 1;
      *(bool *)(plVar3 + 3) = plVar3 == param_1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      param_2 = plVar3;
    } while (plVar3 != param_1);
  }
  return;
}

