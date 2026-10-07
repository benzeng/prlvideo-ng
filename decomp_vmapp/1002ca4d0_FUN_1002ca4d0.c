
undefined8 FUN_1002ca4d0(long param_1,long *param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  uint uVar13;
  
  uVar8 = *(uint *)(*param_2 + 8);
  uVar13 = (uVar8 >> 0x15) + 1 & 0x7ff;
  if (uVar13 < 0x501) {
    lVar10 = FUN_1002c8420(param_1,uVar8 >> 8 & 0x7f,uVar8 >> 0xf & 0xf);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
      if (((*(int *)(lVar10 + 0x10) != 0) && (*(uint *)(lVar10 + 0xc) != param_3)) &&
         (0 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[%s] OUT Hole %u/%u",lVar10 + 0xcf,param_3,*(uint *)(lVar10 + 0xc)
                     );
      }
      *(uint *)(lVar10 + 0xc) = (1 << (*(char *)(lVar10 + 0xce) - 1U & 0x1f)) + param_3 & 0x3ff;
      *(undefined4 *)(lVar10 + 0x10) = 1;
      lVar2 = lVar10 + 0x48;
      lVar4 = *(long *)(lVar10 + 0x48);
      if (((lVar4 == lVar2) || (plVar11 = *(long **)(lVar10 + 0x50), plVar11 == (long *)0x0)) ||
         (*(int *)((long)plVar11 + 0x494) == (int)plVar11[0x92])) {
        plVar11 = (long *)FUN_1002c8f00(0);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11[0x90] = (ulong)param_3;
        lVar5 = *param_2;
        *(uint *)(plVar11 + 0x89) = *(uint *)(lVar5 + 8) >> 8 & 0x7f;
        *(uint *)(plVar11 + 0x8a) = (uint)*(byte *)(lVar5 + 8);
        *(uint *)((long)plVar11 + 0x44c) = *(uint *)(lVar5 + 8) >> 0xf & 0xf;
        uVar12 = 1;
        if ((*(uint *)(lVar10 + 0x90) & 0x20) == 0) {
          uVar12 = 8;
        }
        *(undefined4 *)(plVar11 + 0x92) = uVar12;
        plVar11[0x8b] = lVar10;
        *(undefined4 *)(plVar11 + 0x8c) = 1;
        puVar6 = *(undefined8 **)(lVar10 + 0x50);
        *(long **)(lVar10 + 0x50) = plVar11;
        *plVar11 = lVar2;
        plVar11[1] = (long)puVar6;
        *puVar6 = plVar11;
        *(int *)(lVar10 + 0x58) = *(int *)(lVar10 + 0x58) + 1;
        if ((lVar4 == lVar2) && (lVar2 = lVar10 + 0x60, *(long *)(lVar10 + 0x60) == lVar2)) {
          plVar7 = *(long **)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar2;
          *(long *)(lVar10 + 0x60) = param_1 + 8;
          *(long **)(lVar10 + 0x68) = plVar7;
          *plVar7 = lVar2;
        }
      }
      if ((uVar13 != 0) && (*(int *)(*param_2 + 0xc) != 0)) {
        FUN_10008cba0(DAT_1011c3688,(long)plVar11 + (ulong)*(uint *)(plVar11 + 0x88) + 0x4d8,
                      *(int *)(*param_2 + 0xc),uVar13);
      }
      uVar3 = *(uint *)((long)plVar11 + 0x494);
      *(undefined4 *)(plVar11 + (ulong)uVar3 + 0x93) = 0;
      *(short *)((long)plVar11 + (ulong)uVar3 * 8 + 0x49c) = (short)uVar13;
      *(uint *)((long)plVar11 + 0x494) = uVar3 + 1;
      *(int *)((long)plVar11 + 0x43c) = *(int *)((long)plVar11 + 0x43c) + uVar13;
      *(uint *)(plVar11 + 0x88) = (int)plVar11[0x88] + uVar13;
      *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xfffff800 | uVar8 >> 0x15;
      if ((*(byte *)(*param_2 + 7) & 1) != 0) {
        *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
      }
      *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
      iVar9 = FUN_1002caf10();
      if (iVar9 == 0) {
        return 1;
      }
      lVar2 = *(long *)(lVar10 + 0x60);
      plVar11 = *(long **)(lVar10 + 0x68);
      *(long **)(lVar2 + 8) = plVar11;
      *plVar11 = lVar2;
      *(long *)(lVar10 + 0x60) = lVar10 + 0x60;
      *(long *)(lVar10 + 0x68) = lVar10 + 0x60;
      return 1;
    }
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x7ff;
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x400000;
    uVar8 = *(uint *)(param_1 + 0x470);
    if ((*(byte *)(*param_2 + 7) & 1) != 0) {
      uVar8 = uVar8 | 4;
      *(uint *)(param_1 + 0x470) = uVar8;
    }
    *(uint *)(param_1 + 0x470) = uVar8 | 0x10;
  }
  else {
    puVar1 = (uint *)(*param_2 + 4);
    *puVar1 = *puVar1 | 0x7ff;
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x400000;
    uVar8 = *(uint *)(param_1 + 0x470);
    if ((*(byte *)(*param_2 + 7) & 1) != 0) {
      uVar8 = uVar8 | 4;
      *(uint *)(param_1 + 0x470) = uVar8;
    }
    *(uint *)(param_1 + 0x470) = uVar8 | 0x10;
  }
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
  return 1;
}

