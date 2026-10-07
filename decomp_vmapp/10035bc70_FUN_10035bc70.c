
void FUN_10035bc70(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar7 == 0) {
      if (lVar3 != 0) {
        piVar2 = (int *)(lVar3 + 0x24);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          if (*(long *)(param_1 + 0x20) == lVar3) {
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
          plVar1 = (long *)(lVar3 + 0x30);
          if (*(long *)(param_1 + 0x18) == lVar3) {
            lVar7 = *plVar1;
            *(long *)(param_1 + 0x18) = lVar7;
          }
          else {
            lVar7 = *plVar1;
          }
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
          }
          if (*(long *)(lVar3 + 0x38) != 0) {
            *(long *)(*(long *)(lVar3 + 0x38) + 0x30) = lVar7;
          }
          *(undefined4 *)(lVar3 + 0x28) = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *plVar1 = 0;
          lVar7 = *(long *)(param_1 + 8);
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x38) = lVar3;
            *(long *)(lVar3 + 0x30) = lVar7;
          }
          *(long *)(param_1 + 8) = lVar3;
        }
      }
    }
    else {
      iVar5 = *(int *)(lVar7 + 0x24);
      if (iVar5 != 0) {
        while( true ) {
          lVar4 = *(long *)(lVar7 + 0x38);
          *(int *)(lVar7 + 0x24) = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            if (*(long *)(param_1 + 0x20) == lVar7) {
              *(undefined8 *)(param_1 + 0x20) = 0;
            }
            plVar1 = (long *)(lVar7 + 0x30);
            if (*(long *)(param_1 + 0x18) == lVar7) {
              lVar8 = *plVar1;
              *(long *)(param_1 + 0x18) = lVar8;
            }
            else {
              lVar8 = *plVar1;
            }
            lVar6 = lVar4;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x38) = lVar4;
              lVar6 = *(long *)(lVar7 + 0x38);
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x30) = lVar8;
            }
            *(undefined4 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x38) = 0;
            *plVar1 = 0;
            lVar8 = *(long *)(param_1 + 8);
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x38) = lVar7;
              *(long *)(lVar7 + 0x30) = lVar8;
            }
            *(long *)(param_1 + 8) = lVar7;
          }
          if ((lVar7 == lVar3) || (lVar4 == 0)) break;
          iVar5 = *(int *)(lVar4 + 0x24);
          lVar7 = lVar4;
        }
      }
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}

