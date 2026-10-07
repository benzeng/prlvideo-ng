
ulong FUN_100334df0(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  
  if (*(ulong *)(param_1 + 0xbbf8) <= param_2) {
    if (param_2 + 0xc <= *(ulong *)(param_1 + 0xbc00)) {
      uVar3 = *(ushort *)(param_2 + 10);
      uVar2 = param_2 + 0xc + (ulong)uVar3 * 4;
      if (uVar2 <= *(ulong *)(param_1 + 0xbc00)) {
        if (*(long **)(param_1 + 0xbbd0) != (long *)0x0) {
          plVar8 = *(long **)(param_1 + 0xbbd0);
          plVar10 = (long *)(param_1 + 0xbbd0);
          do {
            while (plVar12 = plVar8, *(uint *)(plVar12 + 4) < *(uint *)(param_2 + 4)) {
              plVar1 = plVar12 + 1;
              plVar12 = plVar10;
              plVar8 = (long *)*plVar1;
              if ((long *)*plVar1 == (long *)0x0) goto LAB_100334e80;
            }
            plVar8 = (long *)*plVar12;
            plVar10 = plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
LAB_100334e80:
          if ((plVar12 != (long *)(param_1 + 0xbbd0)) &&
             (*(uint *)(plVar12 + 4) <= *(uint *)(param_2 + 4))) {
            lVar5 = plVar12[5];
            uVar4 = *(uint *)(lVar5 + 0x408);
            if (uVar4 != 0) {
              for (puVar11 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                                       (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
                  puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 4)) {
                if (*puVar11 == uVar4) {
                  lVar6 = *(long *)(puVar11 + 2);
                  if (lVar6 == 0) {
                    return uVar2;
                  }
                  lVar7 = *(long *)(lVar6 + 8);
                  if ((*(ushort *)(lVar7 + 0xb0) & 1) == 0) {
                    return uVar2;
                  }
                  FUN_100380220(lVar5,param_2 + 0xc,*(undefined2 *)(param_2 + 8),(ulong)uVar3,
                                *(undefined1 *)(lVar7 + 0x88),*(undefined4 *)(lVar7 + 0x8c));
                  FUN_1003620b0(*(undefined8 *)(param_1 + 48000),lVar5,*(undefined8 *)(lVar6 + 8));
                  return uVar2;
                }
              }
            }
          }
        }
        return uVar2;
      }
      puVar9 = (ulong *)___cxa_allocate_exception(0x10);
      *puVar9 = param_2;
      *(uint *)(puVar9 + 1) = (uint)uVar3 * 4 + 0xc;
      goto LAB_100334f65;
    }
  }
  puVar9 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar9 = param_2;
  *(undefined4 *)(puVar9 + 1) = 0xc;
LAB_100334f65:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar9,&PTR_vtable_101117a68,0);
}

