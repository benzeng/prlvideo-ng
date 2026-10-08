
undefined1 FUN_100ab14c0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 local_70 [64];
  
  FUN_100aafe50(local_70,param_1 + 200);
  lVar1 = *(long *)(param_1 + 0xc0);
  plVar5 = (long *)0x0;
  uVar8 = 0;
  if (lVar1 != 0) {
    for (plVar5 = *(long **)(lVar1 + 0x20); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[5]) {
      if ((long *)plVar5[3] == param_2) {
        *(undefined4 *)((long)plVar5 + 0x3c) = 2;
        goto LAB_100ab1590;
      }
    }
    plVar6 = *(long **)(lVar1 + 0x18);
    plVar5 = (long *)0x0;
    uVar8 = 0;
    if (plVar6 != (long *)0x0) {
LAB_100ab1540:
      plVar4 = (long *)plVar6[5];
      if ((long *)plVar6[3] != param_2) goto code_r0x000100ab154a;
      if (plVar4 != (long *)0x0) {
        plVar4[4] = plVar6[4];
      }
      *(long **)plVar6[4] = plVar4;
      (**(code **)(*plVar6 + 8))();
      plVar5 = (long *)0x0;
      if (*(long *)(lVar1 + 0x18) == *(long *)(lVar1 + 0x20)) {
        plVar5 = (long *)0x0;
        FUN_100aaf5d0(lVar1 + 0x28);
      }
LAB_100ab1590:
      uVar8 = 1;
      param_2 = plVar5;
    }
  }
LAB_100ab1596:
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar7 = *(ulong *)(param_1 + 0x30);
    plVar6 = (long *)(lVar1 + (uVar7 >> 8) * 8);
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
    if (*(long *)(param_1 + 0x20) != lVar1) {
      plVar4 = (long *)((uVar7 & 0xff) * 0x10 + *plVar6);
      uVar7 = uVar7 + *(long *)(param_1 + 0x38);
      plVar3 = (long *)((uVar7 & 0xff) * 0x10 + *(long *)(lVar1 + (uVar7 >> 8) * 8));
    }
    while (plVar4 != plVar3) {
      if ((long *)*plVar4 == param_2) {
        uVar7 = plVar4[1];
        if (((uVar7 & 4) != 0) &&
           (*(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1, (uVar7 & 1) != 0)) {
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
          *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
        }
        FUN_100ab28b0(param_1 + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar1 = *(long *)(param_1 + 0xc0);
          lVar2 = plVar5[5];
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = plVar5[4];
          }
          *(long *)plVar5[4] = lVar2;
          (**(code **)(*plVar5 + 8))(plVar5);
          if (*(long *)(lVar1 + 0x18) == *(long *)(lVar1 + 0x20)) {
            FUN_100aaf5d0(lVar1 + 0x28);
          }
        }
        FUN_100aafe00(local_70);
        uVar8 = 1;
        (**(code **)(*param_2 + 8))(param_2);
        break;
      }
      plVar4 = plVar4 + 2;
      if ((long)plVar4 - *plVar6 == 0x1000) {
        plVar4 = (long *)plVar6[1];
        plVar6 = plVar6 + 1;
      }
    }
  }
  FUN_100aafde0(local_70);
  return uVar8;
code_r0x000100ab154a:
  plVar5 = (long *)0x0;
  plVar6 = plVar4;
  if (plVar4 == (long *)0x0) goto code_r0x000100ab1554;
  goto LAB_100ab1540;
code_r0x000100ab1554:
  uVar8 = 0;
  goto LAB_100ab1596;
}

