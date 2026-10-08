
void FUN_1005732c0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(uint *)param_4[1] < 2)) {
      uVar4 = FUN_1003dff90();
      *(undefined4 *)*param_4 = uVar4;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    lVar8 = *(long *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar8 + 8);
    lVar10 = (long)iVar2;
    plVar9 = (long *)(lVar8 + 0x10 + lVar10 * 8);
    iVar3 = *(int *)(lVar8 + 0xc);
    lVar7 = (long)iVar3;
    plVar5 = plVar9;
    if (iVar2 == iVar3) {
LAB_100573351:
      plVar1 = (long *)(lVar8 + 0x10 + lVar7 * 8);
      if (plVar5 != plVar1) {
        if (iVar2 == iVar3) {
LAB_100573381:
          if (plVar9 != plVar1) {
            return;
          }
        }
        else {
          lVar8 = lVar7 * 8 + lVar10 * -8;
          do {
            if (*plVar9 == *(long *)param_4[2]) goto LAB_100573381;
            plVar9 = plVar9 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        FUN_100a1c840(param_1 + 0x18,0);
        return;
      }
    }
    else {
      lVar6 = lVar7 * 8 + lVar10 * -8;
      do {
        if (*plVar5 == *(long *)param_4[1]) goto LAB_100573351;
        plVar5 = plVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return;
}

