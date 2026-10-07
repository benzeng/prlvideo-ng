
undefined8 FUN_1002ccff0(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  
  uVar3 = *(uint *)(*param_2 + 0x24);
  lVar8 = FUN_1002c8420();
  if (lVar8 == 0) {
    lVar8 = 0;
    do {
      uVar3 = *(uint *)(*param_2 + 4 + lVar8 * 4);
      if ((int)uVar3 < 0) {
        *(uint *)(*param_2 + 4 + lVar8 * 4) = uVar3 & 0xf000ffff;
        if ((*(byte *)(*param_2 + 5 + lVar8 * 4) & 0x80) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
        }
        puVar2 = (uint *)(*param_2 + 4 + lVar8 * 4);
        *puVar2 = *puVar2 & 0x7fffffff;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 8);
  }
  else {
    *(undefined4 *)(lVar8 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
    uVar7 = *(byte *)(lVar8 + 0xce) - 1;
    uVar10 = 0xf;
    if (uVar7 < 0x10) {
      uVar10 = uVar7;
    }
    iVar13 = 1;
    if (3 < uVar10) {
      iVar13 = 1 << ((char)uVar10 - 3U & 0x1f);
    }
    if (((*(int *)(lVar8 + 0x10) != 0) && (*(uint *)(lVar8 + 0xc) != param_3)) &&
       (0 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[%s] OUT Hole %u/%u",lVar8 + 0xcf,param_3,*(uint *)(lVar8 + 0xc));
    }
    *(uint *)(lVar8 + 0xc) =
         0x3ffU >> (*(byte *)(*(long *)(param_1 + 0x40) + 0x1020) >> 2 & 3) & iVar13 + param_3;
    *(undefined4 *)(lVar8 + 0x10) = 1;
    plVar1 = (long *)(lVar8 + 0x48);
    plVar11 = (long *)(lVar8 + 0x60);
    uVar12 = 0;
    plVar9 = (long *)0x0;
    do {
      if (*(int *)(*param_2 + 4 + uVar12 * 4) < 0) {
        plVar4 = (long *)*plVar1;
        if (((plVar4 != plVar1) &&
            (plVar9 = *(long **)(lVar8 + 0x50), *(int *)((long)plVar9 + 0x494) == (int)plVar9[0x92])
            ) || (plVar9 == (long *)0x0)) {
          plVar9 = (long *)FUN_1002c8f00(1);
          if (plVar9 == (long *)0x0) {
            return 0;
          }
          plVar9[0x90] = (ulong)param_3;
          *(uint *)(plVar9 + 0x89) = uVar3 & 0x7f;
          *(undefined4 *)(plVar9 + 0x8a) = 0xe1;
          *(uint *)((long)plVar9 + 0x44c) = uVar3 >> 8 & 0xf;
          plVar9[0x8b] = lVar8;
          *(undefined4 *)(plVar9 + 0x8c) = 1;
          *(undefined4 *)(plVar9 + 0x92) = 8;
          *(undefined4 *)((long)plVar9 + 0x43c) = 0;
          puVar5 = *(undefined8 **)(lVar8 + 0x50);
          *(long **)(lVar8 + 0x50) = plVar9;
          *plVar9 = (long)plVar1;
          plVar9[1] = (long)puVar5;
          *puVar5 = plVar9;
          *(int *)(lVar8 + 0x58) = *(int *)(lVar8 + 0x58) + 1;
          if ((plVar4 == plVar1) && ((long *)*plVar11 == plVar11)) {
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            *(long **)(param_1 + 0x10) = plVar11;
            *(long *)(lVar8 + 0x60) = param_1 + 8;
            *(undefined8 **)(lVar8 + 0x68) = puVar5;
            *puVar5 = plVar11;
          }
        }
        FUN_1002cffd0();
        if ((*(byte *)(*param_2 + 5 + uVar12 * 4) & 0x80) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
        }
        puVar2 = (uint *)(*param_2 + 4 + uVar12 * 4);
        *puVar2 = *puVar2 & 0x7fffffff;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 8);
    iVar13 = FUN_1002caf10(param_1,lVar8);
    if (iVar13 != 0) {
      lVar6 = *(long *)(lVar8 + 0x60);
      plVar1 = *(long **)(lVar8 + 0x68);
      *(long **)(lVar6 + 8) = plVar1;
      *plVar1 = lVar6;
      *(long **)(lVar8 + 0x60) = plVar11;
      *(long **)(lVar8 + 0x68) = plVar11;
    }
  }
  return 1;
}

