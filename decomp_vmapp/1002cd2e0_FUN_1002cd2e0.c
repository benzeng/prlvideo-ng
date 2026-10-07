
undefined8 FUN_1002cd2e0(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  
  lVar6 = FUN_1002c8420(param_1,*(uint *)(*param_2 + 0x24) & 0x7f,
                        *(uint *)(*param_2 + 0x24) >> 8 & 0xf | 0x80);
  if (lVar6 == 0) {
    lVar6 = 0;
    do {
      uVar9 = *(uint *)(*param_2 + 4 + lVar6 * 4);
      if ((int)uVar9 < 0) {
        *(uint *)(*param_2 + 4 + lVar6 * 4) = uVar9 & 0xf000ffff;
        if ((*(byte *)(*param_2 + 5 + lVar6 * 4) & 0x80) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
        }
        puVar2 = (uint *)(*param_2 + 4 + lVar6 * 4);
        *puVar2 = *puVar2 & 0x7fffffff;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  else {
    *(undefined4 *)(lVar6 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Complete_ISO_In %u %u/%u",lVar6 + 0xcf,param_3,
                    *(undefined4 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0x28));
    }
    plVar1 = (long *)(lVar6 + 0x18);
    plVar10 = *(long **)(lVar6 + 0x18);
    iVar13 = 0;
    if (plVar10 == plVar1) {
      bVar3 = false;
      plVar12 = (long *)0x0;
    }
    else {
      do {
        bVar3 = true;
        if (plVar10 == (long *)0x0) {
          plVar12 = (long *)0x0;
          break;
        }
        if (*(int *)((long)plVar10 + 0x464) == 0) {
          plVar12 = (long *)0x0;
          break;
        }
        plVar12 = plVar10;
        if ((*(byte *)(lVar6 + 0x90) & 4) == 0) break;
        uVar9 = *(uint *)((long)plVar10 + 0x494);
        uVar8 = (ulong)uVar9;
        while ((uVar9 < *(uint *)(plVar10 + 0x92) &&
               (*(short *)((long)plVar10 + uVar8 * 8 + 0x49e) == 0))) {
          *(uint *)(plVar10 + 0x88) =
               (int)plVar10[0x88] + (uint)*(ushort *)((long)plVar10 + uVar8 * 8 + 0x49c);
          uVar8 = uVar8 + 1;
          uVar9 = (uint)uVar8;
          *(uint *)((long)plVar10 + 0x494) = uVar9;
          iVar13 = iVar13 + 1;
        }
        if ((uint)uVar8 < *(uint *)(plVar10 + 0x92)) break;
        FUN_1002c8620(param_1,lVar6);
        FUN_1002c8930(plVar10);
        plVar10 = *(long **)(lVar6 + 0x18);
        plVar12 = (long *)0x0;
        bVar3 = false;
      } while (plVar10 != plVar1);
    }
    uVar8 = 0;
    do {
      if (*(int *)(*param_2 + 4 + uVar8 * 4) < 0) {
        if (plVar12 == (long *)0x0) {
          if ((bVar3) && ((*(uint *)(lVar6 + 0x90) & 8) == 0)) {
            if (DAT_1011c568c < 2) {
              return 0;
            }
            FUN_1008e3970("","USB",0,"[%s] weak underflow at %u",lVar6 + 0xcf,param_3);
            return 0;
          }
          lVar7 = 0;
          if ((*(uint *)(lVar6 + 0x90) & 4) != 0) {
            FUN_1002ce350(param_1,param_2,param_3);
            lVar7 = 0;
          }
          do {
            uVar9 = *(uint *)(*param_2 + 4 + lVar7 * 4);
            if ((int)uVar9 < 0) {
              *(uint *)(*param_2 + 4 + lVar7 * 4) = uVar9 & 0xf000ffff;
              if ((*(byte *)(*param_2 + 5 + lVar7 * 4) & 0x80) != 0) {
                *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
              }
              puVar2 = (uint *)(*param_2 + 4 + lVar7 * 4);
              *puVar2 = *puVar2 & 0x7fffffff;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 8);
          if (DAT_1011c568c < 1) {
            return 1;
          }
          FUN_1008e3970("","USB",0,"[%s] Strong underflow at %u",lVar6 + 0xcf,param_3);
          return 1;
        }
        FUN_1002d0100(param_1,plVar12,param_2,uVar8 & 0xffffffff);
        if ((int)plVar12[0x8d] != 0) {
          puVar2 = (uint *)(*param_2 + 4 + uVar8 * 4);
          *puVar2 = *puVar2 | 0x10000000;
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 8;
        }
        if ((*(byte *)(*param_2 + 5 + uVar8 * 4) & 0x80) != 0) {
          *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
        }
        puVar2 = (uint *)(*param_2 + 4 + uVar8 * 4);
        *puVar2 = *puVar2 & 0x7fffffff;
        if (*(uint *)(plVar12 + 0x92) <= *(uint *)((long)plVar12 + 0x494)) {
          FUN_1002c8620(param_1,lVar6);
          FUN_1002c8930(plVar12);
          plVar12 = (long *)0x0;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    uVar4 = *(byte *)(lVar6 + 0xce) - 1;
    uVar9 = 0xf;
    if (uVar4 < 0x10) {
      uVar9 = uVar4;
    }
    iVar11 = 1;
    if (3 < uVar9) {
      iVar11 = 1 << ((char)uVar9 - 3U & 0x1f);
    }
    uVar9 = 0x3ff >> (*(byte *)(*(long *)(param_1 + 0x40) + 0x1020) >> 2 & 3);
    if ((*(int *)(lVar6 + 0x10) != 0) && (iVar5 = *(int *)(lVar6 + 0xc), iVar5 != param_3)) {
      if (((*(uint *)(lVar6 + 0x90) & 4) == 0) && (0 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[%s] IN Hole %u/%u",lVar6 + 0xcf,param_3,iVar5);
        iVar5 = *(int *)(lVar6 + 0xc);
      }
      if ((uint)(param_3 - iVar5) < uVar9 >> 1) {
        *(int *)(lVar6 + 0xa0) = *(int *)(lVar6 + 0xa0) + (param_3 - iVar5);
      }
    }
    *(uint *)(lVar6 + 0xc) = uVar9 & iVar11 + param_3;
    *(undefined4 *)(lVar6 + 0x10) = 1;
    if (iVar13 != 0) {
      iVar13 = FUN_1002d9440(lVar6,iVar13);
      *(int *)(lVar6 + 0xa0) = *(int *)(lVar6 + 0xa0) - iVar13;
    }
    if ((*(byte *)(lVar6 + 0x90) & 8) != 0) {
      plVar10 = (long *)*plVar1;
      if (plVar10 != plVar1) {
        do {
          if (*(int *)((long)plVar10 + 0x464) == 0) break;
          iVar13 = FUN_1002d9440(lVar6,(int)plVar10[0x92] - *(int *)((long)plVar10 + 0x494));
          iVar11 = *(int *)(lVar6 + 0xa0) - iVar13;
          if (*(int *)(lVar6 + 0xa0) < iVar13) break;
          *(int *)(lVar6 + 0xa0) = iVar11;
          if (1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[%s] skipping %u %d %u/%u",lVar6 + 0xcf,iVar13,iVar11,
                          *(undefined4 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0x28));
          }
          FUN_1002c8620(param_1,lVar6);
          FUN_1002c8930(plVar10);
          plVar10 = *(long **)(lVar6 + 0x18);
        } while (plVar10 != plVar1);
      }
      FUN_1002ce350(param_1,param_2,param_3);
    }
    if ((long *)*plVar1 == plVar1) {
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Stream ends at %u, trash=%d",lVar6 + 0xcf,param_3,
                      *(undefined4 *)(lVar6 + 0xa0));
      }
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(undefined4 *)(lVar6 + 0xa0) = 0;
    }
  }
  return 1;
}

