
undefined8 FUN_1002e3d20(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  
  lVar18 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(lVar18 + 0x40 + (ulong)(*(uint *)(param_2 + 0x44c) & 0xff) * 8);
  if (lVar6 == 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s:%02x:%02x] can\'t submit io-pkt sz = %d  ep = %p",
                    (&PTR_s_UNK_101117020)[*(uint *)(*(long *)(lVar18 + 0x28) + 0x1490)],
                    *(undefined4 *)(lVar18 + 0x1c),*(uint *)(param_2 + 0x44c),
                    *(undefined4 *)(param_2 + 0x43c),0);
    }
    *(undefined4 *)(param_2 + 0x468) = 7;
    uVar15 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x454) = 0;
    iVar10 = 1;
    if ((*(uint *)(param_2 + 0x470) & 1) != 0) {
      iVar10 = 8;
    }
    if (*(int *)(param_2 + 0x490) != 0) {
      uVar14 = iVar10 * *(int *)(param_1 + 0x80);
      puVar17 = (undefined1 *)(param_2 + 0x4d8);
      lVar18 = 0;
      do {
        uVar3 = *(ushort *)(param_2 + 0x49c + lVar18 * 8);
        iVar10 = (**(code **)(**(long **)(param_1 + 0x88) + 0x50))();
        if ((iVar10 != 0) ||
           (iVar10 = 0, *(long *)(param_1 + 0x78) + (ulong)uVar14 <= *(ulong *)(param_1 + 0x70))) {
          iVar10 = (**(code **)(**(long **)(param_1 + 0x88) + 0x50))();
          if (iVar10 == 0) {
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
            (**(code **)(**(long **)(param_1 + 0x88) + 0x30))();
            plVar2 = (long *)(*(long *)(param_1 + 0x98) + 0xf0);
            *plVar2 = *plVar2 + 1;
          }
          cVar9 = (**(code **)(**(long **)(param_1 + 0x88) + 0x58))();
          iVar10 = 0;
          if (cVar9 != '\0') {
            *puVar17 = 2;
            puVar17[1] = *(undefined1 *)(param_1 + 0x84);
            iVar10 = (**(code **)(**(long **)(param_1 + 0x88) + 0x40))
                               (*(long **)(param_1 + 0x88),puVar17 + 2,uVar3 - 2);
            if (iVar10 == 0) {
              (**(code **)(**(long **)(param_1 + 0x88) + 0x38))();
              *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) ^ 1;
            }
            iVar10 = iVar10 + 2;
            plVar2 = (long *)(*(long *)(param_1 + 0xa8) + 0xf0);
            *plVar2 = *plVar2 + 1;
          }
        }
        uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
        *(short *)(param_2 + 0x49e + lVar18 * 8) = (short)iVar10;
        *(int *)(param_2 + 0x454) = *(int *)(param_2 + 0x454) + iVar10;
        if (2 < DAT_1011c568c) {
          lVar7 = *(long *)(param_1 + 0x70);
          puVar8 = (&PTR_s_UNK_101117020)
                   [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)];
          uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c);
          uVar5 = *(undefined4 *)(param_2 + 0x44c);
          uVar11 = 0x2d;
          lVar16 = 0;
          if (iVar10 != 0) {
            uVar11 = 0x42;
            if (*(char *)(param_1 + 0x84) == '\0') {
              uVar11 = 0x41;
            }
            lVar16 = lVar7 - *(long *)(param_1 + 0x78);
          }
          uVar12 = (**(code **)(**(long **)(param_1 + 0x88) + 0x50))();
          uVar13 = (**(code **)(**(long **)(param_1 + 0x88) + 0x48))();
          in_stack_ffffffffffffff48 = CONCAT44(uVar19,iVar10);
          FUN_1008e3970("","USB",0,
                        "[%s:%02x:%02x]  ISO_FRAME[%5lld] %4d/%4d  V_FRAME[%c%03lld] %5d/%5d (%d)",
                        puVar8,uVar4,uVar5,lVar7,in_stack_ffffffffffffff48,uVar3,uVar11,lVar16,
                        uVar12,uVar13,uVar14);
        }
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
        puVar17 = puVar17 + uVar3;
        plVar2 = (long *)(*(long *)(param_1 + 0xa0) + 0xf0);
        *plVar2 = *plVar2 + 1;
        lVar18 = lVar18 + 1;
      } while ((uint)lVar18 < *(uint *)(param_2 + 0x490));
    }
    *(undefined4 *)(param_2 + 0x468) = 0;
    if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar14 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar6 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + -1;
    UNLOCK();
    uVar15 = 1;
    if ((uVar14 & 4) != 0) {
      FUN_1002c9070(param_2);
    }
  }
  return uVar15;
}

