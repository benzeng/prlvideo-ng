
void FUN_100adb7f0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  uVar4 = param_2 >> 0x10 ^ param_2;
  uVar6 = (ulong)((uVar4 >> 8 ^ uVar4) & 0xff);
  plVar1 = *(long **)(param_1 + uVar6 * 8);
  if (plVar1 != (long *)0x0) {
    plVar7 = (long *)(param_1 + uVar6 * 8);
    do {
      plVar5 = plVar1;
      if (*(uint *)(plVar5 + 1) == param_2) {
        uVar4 = *(uint *)(plVar5 + 3) & 0x40;
        if ((int)plVar5[5] < (int)plVar5[6]) {
          bVar3 = *(int *)((long)plVar5 + 0x2c) < *(int *)((long)plVar5 + 0x34);
        }
        else {
          bVar3 = false;
        }
        uVar8 = *(uint *)(plVar5 + 3) & 1;
        plVar5[6] = param_3[5];
        plVar5[5] = param_3[4];
        plVar5[4] = param_3[3];
        plVar5[3] = param_3[2];
        lVar2 = *param_3;
        plVar5[2] = param_3[1];
        plVar5[1] = lVar2;
        if ((uVar4 != 0) && ((*(uint *)(*plVar7 + 0x18) >> 6 & 1) != uVar4 >> 6)) {
          *(undefined1 *)(*plVar7 + 0x54) = 1;
        }
        lVar2 = *plVar7;
        if ((uVar8 != 0) && ((*(uint *)(lVar2 + 0x18) & 1) != uVar8)) {
          *(undefined1 *)(lVar2 + 0x55) = 1;
        }
        if (*(int *)(lVar2 + 0x30) <= *(int *)(lVar2 + 0x28)) {
          return;
        }
        if (bVar3 || *(int *)(lVar2 + 0x34) <= *(int *)(lVar2 + 0x2c)) {
          return;
        }
        if ((*(byte *)(lVar2 + 0x18) & 0x40) != 0) {
          return;
        }
        *(undefined1 *)(lVar2 + 0x54) = 1;
        return;
      }
      plVar1 = (long *)*plVar5;
      plVar7 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  return;
}

