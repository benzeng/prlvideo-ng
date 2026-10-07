
undefined8 FUN_1002ca810(long param_1,long *param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  lVar6 = FUN_1002c8420(param_1,*(uint *)(*param_2 + 8) >> 8 & 0x7f,
                        *(uint *)(*param_2 + 8) >> 0xf & 0xf | 0x80);
  if (lVar6 == 0) {
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x7ff;
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x400000;
    uVar4 = *(uint *)(param_1 + 0x470);
    if ((*(byte *)(*param_2 + 7) & 1) != 0) {
      uVar4 = uVar4 | 4;
      *(uint *)(param_1 + 0x470) = uVar4;
    }
    *(uint *)(param_1 + 0x470) = uVar4 | 0x10;
    *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
    return 1;
  }
  lVar2 = *(long *)(lVar6 + 0x18);
  if (lVar2 != lVar6 + 0x18) {
    iVar5 = *(int *)(lVar2 + 0x464);
    *(undefined4 *)(lVar6 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
    if ((lVar2 != 0) && (iVar5 != 0)) {
      uVar1 = *(ushort *)(lVar2 + 0x49c + (ulong)*(uint *)(lVar2 + 0x494) * 8);
      lVar3 = *param_2;
      uVar4 = (*(uint *)(lVar3 + 8) >> 0x15) + 1 & 0x7ff;
      uVar7 = (uint)*(ushort *)(lVar2 + 0x49e + (ulong)*(uint *)(lVar2 + 0x494) * 8);
      if (uVar7 < uVar4) {
        uVar4 = uVar7;
      }
      *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) & 0xfffff800 | uVar4 + 0x7ff & 0x7ff;
      lVar3 = *param_2;
      uVar7 = *(uint *)(lVar3 + 4);
      if ((uVar7 & 0x1000000) != 0) {
        *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
        uVar7 = *(uint *)(lVar3 + 4);
      }
      if (((uVar7 & 0x20000000) != 0) && (uVar4 < ((*(uint *)(lVar3 + 8) >> 0x15) + 1 & 0x7ff))) {
        *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 8;
      }
      if ((uVar4 != 0) && (*(int *)(lVar3 + 0xc) != 0)) {
        FUN_10008c9b0(DAT_1011c3688,*(int *)(lVar3 + 0xc),
                      lVar2 + 0x4d8 + (ulong)*(uint *)(lVar2 + 0x440),uVar4);
      }
      *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
      *(int *)(lVar2 + 0x494) = *(int *)(lVar2 + 0x494) + 1;
      *(int *)(lVar2 + 0x440) = *(int *)(lVar2 + 0x440) + (uint)uVar1;
      if ((*(int *)(lVar6 + 0x10) != 0) && (iVar5 = *(int *)(lVar6 + 0xc), iVar5 != param_3)) {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] IN Hole %u/%u trash %d",lVar6 + 0xcf,param_3,iVar5,
                        *(undefined4 *)(lVar6 + 0xa0));
          iVar5 = *(int *)(lVar6 + 0xc);
        }
        if ((uint)(param_3 - iVar5) < 0x1ff) {
          *(int *)(lVar6 + 0xa0) = *(int *)(lVar6 + 0xa0) + (param_3 - iVar5);
        }
      }
      *(uint *)(lVar6 + 0xc) = (1 << (*(char *)(lVar6 + 0xce) - 1U & 0x1f)) + param_3 & 0x3ff;
      *(undefined4 *)(lVar6 + 0x10) = 1;
      if (*(uint *)(lVar2 + 0x490) <= *(uint *)(lVar2 + 0x494)) {
        FUN_1002c8620(param_1,lVar6);
        FUN_1002c8930(lVar2);
      }
      if (*(int *)(lVar6 + 0x28) != 0) {
        return 1;
      }
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] stream ends at %u, trash=%d",lVar6 + 0xcf,param_3,
                      *(undefined4 *)(lVar6 + 0xa0));
      }
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(undefined4 *)(lVar6 + 0xa0) = 0;
      return 1;
    }
    if ((*(byte *)(lVar6 + 0x90) & 8) == 0) {
      if (DAT_1011c568c < 2) {
        return 0;
      }
      pcVar8 = "[%s] weak underflow at %u";
      uVar9 = 0;
      goto LAB_1002cab5a;
    }
  }
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x7ff;
  if ((*(byte *)(*param_2 + 7) & 1) != 0) {
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
  }
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
  uVar9 = 1;
  if (DAT_1011c568c < 1) {
    return 1;
  }
  pcVar8 = "[%s] strong underflow at %u";
LAB_1002cab5a:
  FUN_1008e3970("","USB",0,pcVar8,lVar6 + 0xcf,param_3);
  return uVar9;
}

