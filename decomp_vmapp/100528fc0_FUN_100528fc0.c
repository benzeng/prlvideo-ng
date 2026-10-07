
void FUN_100528fc0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long *local_38;
  
  plVar8 = *(long **)(param_1 + 8);
  plVar2 = plVar8;
  if (plVar8 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 8);
  }
  else {
    do {
      plVar5 = plVar2;
      if ((int)plVar5[1] == -1) {
        return;
      }
      plVar2 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  lVar10 = 0;
  do {
    while (local_38 = plVar8, plVar8 == (long *)0x0) {
      if (lVar10 + 1 == 0x100) {
        uStack_50 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_68 = 0xffffffff;
        local_58 = 4;
        local_40 = param_2;
        local_3c = param_3;
        FUN_1005274c0(param_1,&local_68,0,0,0,0,plVar5);
        bVar3 = FUN_100527c70(param_1,&local_68,1);
        *(byte *)(param_1 + 0x820) = *(byte *)(param_1 + 0x820) | bVar3;
        return;
      }
      plVar8 = *(long **)(param_1 + 0x10 + lVar10 * 8);
      lVar10 = lVar10 + 1;
    }
    FUN_1004dc0c0(param_1 + 0x828,plVar8 + 1,&local_68);
    FUN_100529630(param_1 + 0x830,&local_38);
    FUN_100529630(param_1 + 0x838,&local_38);
    FUN_100529630(param_1 + 0x840,&local_38);
    uVar7 = *(uint *)(param_1 + 0x818);
    if ((ulong)uVar7 != 0) {
      lVar1 = plVar8[1];
      uVar6 = 0;
      piVar9 = *(int **)(param_1 + 0x810);
      do {
        if (*piVar9 == (int)lVar1) {
          if ((int)uVar6 != uVar7 - 1) {
            uVar4 = (int)uVar6 + 1;
            _memmove(piVar9,*(int **)(param_1 + 0x810) + uVar4,(ulong)(uVar7 - uVar4) << 2);
            uVar7 = *(uint *)(param_1 + 0x818);
          }
          *(uint *)(param_1 + 0x818) = uVar7 - 1;
          if (*(int *)(param_1 + 0x808) == (int)lVar1) {
            *(undefined4 *)(param_1 + 0x808) = 0;
            *(undefined4 *)(param_1 + 0x824) = 0;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar6 < uVar7);
    }
    FUN_100528500(param_1,plVar8);
    *(long *)(param_1 + 8 + lVar10 * 8) = *plVar8;
    _free(plVar8);
    plVar8 = *(long **)(param_1 + 8 + lVar10 * 8);
  } while( true );
}

