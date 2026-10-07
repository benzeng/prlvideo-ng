
undefined4 FUN_100330900(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  undefined4 uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  int local_40;
  long local_38;
  
  puVar11 = (uint *)FUN_1002a6010(param_2);
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  uVar7 = puVar11[4];
  uVar10 = 0;
  if ((uVar3 & 2) != 0) {
    local_40 = 0;
    lVar12 = FUN_1002a6120(param_2,0,0);
    puVar16 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
    if (lVar12 != 0) {
      uVar13 = (ulong)*(uint *)(lVar12 + 8);
      plVar1 = (long *)(param_1 + 0x40);
      lVar14 = *(long *)(param_1 + 0x40);
      if ((ulong)(*(long *)(param_1 + 0x48) - lVar14) < uVar13) {
        FUN_1003324b0(plVar1);
        lVar14 = *plVar1;
        uVar13 = (ulong)*(uint *)(lVar12 + 8);
      }
      FUN_1002a5990(lVar12,0,lVar14,uVar13);
      puVar16 = (undefined4 *)*plVar1;
      puVar18 = (undefined4 *)((ulong)*(uint *)(lVar12 + 8) + (long)puVar16);
    }
    local_38 = param_2;
    if (((uVar3 & 1) != 0) && (*(short *)(param_2 + 0x16) == 1)) {
      FUN_1002a5590(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x70));
      local_40 = -1;
      local_38 = 0;
    }
    if (puVar16 < puVar18) {
      plVar1 = (long *)(param_1 + 0x28);
      bVar8 = true;
      do {
        switch(*puVar16) {
        case 0:
          uVar10 = 0xf0000003;
          if (puVar16[1] == 0x1c) {
            uVar10 = 0;
            if ((long *)*plVar1 != (long *)0x0) {
              plVar9 = (long *)*plVar1;
              plVar17 = plVar1;
              do {
                while (plVar15 = plVar9, (ulong)plVar15[4] < *(ulong *)(puVar16 + 2)) {
                  plVar2 = plVar15 + 1;
                  plVar9 = (long *)*plVar2;
                  plVar15 = plVar17;
                  if ((long *)*plVar2 == (long *)0x0) goto LAB_100330bbf;
                }
                plVar9 = (long *)*plVar15;
                plVar17 = plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
LAB_100330bbf:
              if ((plVar15 != plVar1) && ((ulong)plVar15[4] <= *(ulong *)(puVar16 + 2))) {
                if (plVar15[5] != 0) {
                  FUN_100359800();
                }
                uVar10 = 0;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 1:
          uVar10 = 0xf0000003;
          if (puVar16[1] == 0x1c) {
            uVar10 = 0;
            if ((long *)*plVar1 != (long *)0x0) {
              plVar9 = (long *)*plVar1;
              plVar17 = plVar1;
              do {
                while (plVar15 = plVar9, (ulong)plVar15[4] < *(ulong *)(puVar16 + 2)) {
                  plVar2 = plVar15 + 1;
                  plVar9 = (long *)*plVar2;
                  plVar15 = plVar17;
                  if ((long *)*plVar2 == (long *)0x0) goto LAB_100330be8;
                }
                plVar9 = (long *)*plVar15;
                plVar17 = plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
LAB_100330be8:
              if ((plVar15 != plVar1) && ((ulong)plVar15[4] <= *(ulong *)(puVar16 + 2))) {
                if (plVar15[5] != 0) {
                  FUN_100359600();
                }
                uVar10 = 0;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        default:
          *(undefined4 *)(param_1 + 0x70) = 0xf0000003;
          bVar8 = false;
          break;
        case 4:
          uVar10 = FUN_100331540(param_1,local_38,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 5:
          uVar10 = FUN_1003317d0(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 6:
          uVar10 = 0xf0000003;
          if ((0x14 < (ulong)(uint)puVar16[1]) &&
             ((ulong)(uint)puVar16[1] == (ulong)(uint)puVar16[6] * 4 + 0x14)) {
            uVar10 = 0;
            if ((long *)*plVar1 != (long *)0x0) {
              plVar9 = (long *)*plVar1;
              plVar17 = plVar1;
              do {
                while (plVar15 = plVar9, (ulong)plVar15[4] < *(ulong *)(puVar16 + 2)) {
                  plVar2 = plVar15 + 1;
                  plVar9 = (long *)*plVar2;
                  plVar15 = plVar17;
                  if ((long *)*plVar2 == (long *)0x0) goto LAB_100330c11;
                }
                plVar9 = (long *)*plVar15;
                plVar17 = plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
LAB_100330c11:
              if ((plVar15 != plVar1) && ((ulong)plVar15[4] <= *(ulong *)(puVar16 + 2))) {
                if (plVar15[5] != 0) {
                  FUN_10035a4a0(plVar15[5],puVar16 + 7);
                }
                uVar10 = 0;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 7:
          uVar10 = FUN_100331950(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 8:
          uVar10 = FUN_100331c90(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 9:
          uVar10 = FUN_100331ed0(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 10:
          uVar10 = FUN_100331fa0(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 0xc:
          uVar10 = FUN_100332080(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 0xe:
          uVar10 = FUN_100332150(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          break;
        case 0xf:
          uVar10 = FUN_100331a20(param_1,puVar16 + 2,puVar16[1]);
          *(undefined4 *)(param_1 + 0x70) = uVar10;
        }
        puVar16 = (undefined4 *)((ulong)(uint)puVar16[1] + 8 + (long)puVar16);
      } while ((puVar16 < puVar18) && (bVar8));
    }
    uVar10 = 0xffffffff;
    if (local_40 != -1) {
      uVar10 = *(undefined4 *)(param_1 + 0x70);
    }
  }
  if (((uVar6 == 1) && (uVar7 == 4)) && (uVar5 < *(uint *)(*(long *)(param_1 + 0x10) + 0x928))) {
    *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) + (ulong)uVar5) = uVar4;
  }
  return uVar10;
}

