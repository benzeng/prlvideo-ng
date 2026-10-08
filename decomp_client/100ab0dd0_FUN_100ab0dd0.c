
undefined1 FUN_100ab0dd0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 local_68 [64];
  long *local_28;
  ulong local_20;
  
  local_28 = param_2;
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  local_20 = (ulong)uVar1;
  FUN_100aafe50(local_68,param_1 + 200);
  if (*(char *)(param_1 + 0xf0) == '\0') {
    uVar9 = 0;
  }
  else {
    if ((uVar1 & 4) == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      lVar7 = *(long *)(param_1 + 0x20);
      lVar5 = 0;
      if (lVar7 - lVar2 != 0) {
        lVar5 = (lVar7 - lVar2) * 0x20 + -1;
      }
      lVar8 = *(long *)(param_1 + 0x30);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar5 - lVar8 == lVar6) {
        FUN_100ab3100();
        lVar6 = *(long *)(param_1 + 0x38);
        lVar8 = *(long *)(param_1 + 0x30);
        lVar2 = *(long *)(param_1 + 0x18);
        lVar7 = *(long *)(param_1 + 0x20);
      }
      puVar11 = (undefined8 *)0x0;
      if (lVar7 != lVar2) {
        puVar11 = (undefined8 *)
                  ((lVar6 + lVar8 & 0xffU) * 0x10 +
                  *(long *)(lVar2 + ((ulong)(lVar6 + lVar8) >> 8) * 8));
      }
      puVar11[1] = local_20;
      *puVar11 = local_28;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      uVar4 = *(ulong *)(param_1 + 0x30) >> 8;
      plVar10 = (long *)(lVar2 + uVar4 * 8);
      lVar7 = 0;
      if (*(long *)(param_1 + 0x20) != lVar2) {
        lVar7 = (*(ulong *)(param_1 + 0x30) & 0xff) * 0x10 + *plVar10;
      }
      if ((uVar1 & 1) == 0) {
        lVar5 = (long)*(int *)(param_1 + 0xe8);
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        if (lVar5 != 0) {
          lVar8 = lVar7 - *plVar10 >> 4;
          lVar7 = lVar8 + lVar5;
          if (lVar7 == 0 || SCARRY8(lVar8,lVar5) != lVar7 < 0) {
            lVar7 = 0xff - lVar7;
            uVar3 = ((ulong)(lVar7 >> 0x3f) >> 0x38) + lVar7;
            lVar5 = uVar4 - ((long)uVar3 >> 8);
            plVar10 = (long *)(lVar2 + lVar5 * 8);
            lVar7 = (0xff - (lVar7 - (uVar3 & 0xfffffffffffff00))) * 0x10 +
                    *(long *)(lVar2 + lVar5 * 8);
          }
          else {
            uVar3 = ((ulong)(lVar7 >> 0x3f) >> 0x38) + lVar7;
            lVar5 = ((long)uVar3 >> 8) + uVar4;
            plVar10 = (long *)(lVar2 + lVar5 * 8);
            lVar7 = (lVar7 - (uVar3 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar2 + lVar5 * 8);
          }
        }
        FUN_100ab22a0(param_1 + 0x10,plVar10,lVar7,&local_28);
      }
      else {
        lVar5 = (long)*(int *)(param_1 + 0xe4);
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
        if (lVar5 != 0) {
          lVar8 = lVar7 - *plVar10 >> 4;
          lVar7 = lVar8 + lVar5;
          if (lVar7 == 0 || SCARRY8(lVar8,lVar5) != lVar7 < 0) {
            lVar7 = 0xff - lVar7;
            uVar3 = ((ulong)(lVar7 >> 0x3f) >> 0x38) + lVar7;
            lVar5 = uVar4 - ((long)uVar3 >> 8);
            plVar10 = (long *)(lVar2 + lVar5 * 8);
            lVar7 = (0xff - (lVar7 - (uVar3 & 0xfffffffffffff00))) * 0x10 +
                    *(long *)(lVar2 + lVar5 * 8);
          }
          else {
            uVar3 = ((ulong)(lVar7 >> 0x3f) >> 0x38) + lVar7;
            lVar5 = ((long)uVar3 >> 8) + uVar4;
            plVar10 = (long *)(lVar2 + lVar5 * 8);
            lVar7 = (lVar7 - (uVar3 & 0xfffffffffffff00)) * 0x10 + *(long *)(lVar2 + lVar5 * 8);
          }
        }
        FUN_100ab22a0(param_1 + 0x10,plVar10,lVar7,&local_28);
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      }
    }
    (**(code **)*local_28)();
    if (*(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0x38)) {
      uVar9 = 1;
      if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd4)) {
        FUN_100ab10b0(param_1);
      }
    }
    else {
      uVar9 = 1;
      FUN_100aaf7b0(param_1 + 0x40,1);
    }
  }
  FUN_100aafde0(local_68);
  return uVar9;
}

