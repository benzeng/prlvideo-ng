
long * FUN_10087e340(long *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_1 == (long *)0x0) {
LAB_10087e56b:
    plVar9 = (long *)0x0;
  }
  else {
    plVar10 = (long *)0x0;
    plVar11 = (long *)0x0;
    do {
      plVar6 = (long *)FUN_10087d330(*param_1);
      if (plVar6 == (long *)0x0) goto LAB_10087e563;
      uVar3 = *(undefined4 *)((long)param_1 + 0xc);
      lVar7 = param_1[2];
      uVar4 = *(undefined4 *)((long)param_1 + 0x14);
      *(int *)(plVar6 + 1) = (int)param_1[1];
      *(undefined4 *)((long)plVar6 + 0xc) = uVar3;
      *(int *)(plVar6 + 2) = (int)lVar7;
      *(undefined4 *)((long)plVar6 + 0x14) = uVar4;
      *(int *)(plVar6 + 3) = (int)param_1[3];
      *(undefined4 *)((long)plVar6 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
      *(int *)(plVar6 + 4) = (int)param_1[4];
      *(int *)(plVar6 + 5) = (int)param_1[5];
      if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 != (code *)0x0)) {
        pcVar2 = (code *)param_1[1];
        if (pcVar2 == (code *)0x0) {
          lVar7 = (*pcVar1)(param_1,0xc,0,plVar6);
        }
        else {
          lVar7 = (*pcVar2)(param_1,6,plVar6,0xc,0,1);
          if (0 < lVar7) {
            uVar8 = (**(code **)(*param_1 + 0x30))(param_1,0xc,0,plVar6);
            lVar7 = (*pcVar2)(param_1,0x86,plVar6,0xc,0,uVar8);
          }
        }
        if (lVar7 != 0) goto LAB_10087e44b;
        iVar5 = FUN_10081d580(plVar6 + 9,0xffffffff,0x15,"bio_lib.c",0x72);
        if (0 < iVar5) goto LAB_10087e563;
        if ((code *)plVar6[1] != (code *)0x0) {
          iVar5 = (*(code *)plVar6[1])(plVar6,1,0,0,0,1);
          goto joined_r0x00010087e532;
        }
        goto LAB_10087e540;
      }
      FUN_100887ce0(0x20,0x67,0x79,"bio_lib.c",0x15d);
LAB_10087e44b:
      iVar5 = FUN_10081f9c0(0,plVar6 + 0xc,param_1 + 0xc);
      if (iVar5 == 0) {
        iVar5 = FUN_10081d580(plVar6 + 9,0xffffffff,0x15,"bio_lib.c",0x72);
        if (iVar5 < 1) {
          if ((code *)plVar6[1] != (code *)0x0) {
            iVar5 = (*(code *)plVar6[1])(plVar6,1,0,0,0,1);
joined_r0x00010087e532:
            if (iVar5 < 1) goto LAB_10087e563;
          }
LAB_10087e540:
          FUN_10081fa50(0,plVar6,plVar6 + 0xc);
          if ((*plVar6 != 0) && (pcVar1 = *(code **)(*plVar6 + 0x40), pcVar1 != (code *)0x0)) {
            (*pcVar1)(plVar6);
          }
          FUN_10081e1a0(plVar6);
        }
LAB_10087e563:
        FUN_10087e280(plVar11);
        goto LAB_10087e56b;
      }
      plVar9 = plVar6;
      if (plVar11 != (long *)0x0) {
        FUN_10087dfb0(plVar10,plVar6);
        plVar9 = plVar11;
      }
      param_1 = (long *)param_1[7];
      plVar10 = plVar6;
      plVar11 = plVar9;
    } while (param_1 != (long *)0x0);
  }
  return plVar9;
}

