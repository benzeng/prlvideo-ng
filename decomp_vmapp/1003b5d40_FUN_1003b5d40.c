
void FUN_1003b5d40(long param_1)

{
  void *pvVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long local_38;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x108);
  do {
    lVar5 = *plVar8;
    if (lVar5 == 0) {
      return;
    }
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    lVar12 = **(long **)(lVar5 + 0x68);
    if (lVar12 != 0) {
      bVar7 = false;
      local_38 = lVar5;
      do {
        cVar3 = *(char *)(lVar12 + 0x38);
        if (cVar3 == '\x03') {
          plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
          if (plVar8 != (long *)0x0) {
            do {
              if ((*(int *)(lVar12 + 0x2c) == *(int *)((long)plVar8 + 0xc)) &&
                 ((*(byte *)(lVar12 + 0x30) & *(byte *)(plVar8 + 2)) != 0)) {
                plVar8[3] = *(long *)(lVar12 + 8);
                break;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
        else if (cVar3 == '\b') {
          uVar4 = *(uint *)(lVar12 + 0x2c);
          uVar11 = (ulong)(uVar4 >> 5);
          uVar9 = (long)pvStack_50 - (long)local_58 >> 2;
          if (uVar11 < uVar9) {
            if ((*(uint *)((long)local_58 + uVar11 * 4) >> (uVar4 & 0x1f) & 1) != 0)
            goto LAB_1003b5f30;
          }
          else {
            uVar10 = (ulong)((uVar4 >> 5) + 1);
            if (uVar9 < uVar10) {
              FUN_10032f560(&local_58);
            }
            else if ((uVar10 < uVar9) &&
                    (pvVar1 = (void *)((long)local_58 + uVar10 * 4), pvStack_50 != pvVar1)) {
              pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU
                                    ) + (long)pvStack_50);
            }
          }
          puVar2 = (uint *)((long)local_58 + uVar11 * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
          lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x88) +
                           (ulong)*(uint *)(lVar12 + 0x2c) * 8);
          if (*(long **)(lVar6 + 0x28) == *(long **)(lVar6 + 0x30)) {
            FUN_1003c6530(lVar6 + 0x20,&local_38);
          }
          else {
            **(long **)(lVar6 + 0x28) = lVar5;
            *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + 8;
          }
        }
        else if ((cVar3 == '\t') && (!bVar7)) {
          lVar6 = *(long *)(param_1 + 0x18);
          if (*(long **)(lVar6 + 0x160) == *(long **)(lVar6 + 0x168)) {
            bVar7 = true;
            FUN_1003c6530(lVar6 + 0x158,&local_38);
          }
          else {
            **(long **)(lVar6 + 0x160) = lVar5;
            *(long *)(lVar6 + 0x160) = *(long *)(lVar6 + 0x160) + 8;
            bVar7 = true;
          }
        }
LAB_1003b5f30:
        lVar12 = **(long **)(lVar12 + 0x18);
      } while (lVar12 != 0);
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
    }
    plVar8 = *(long **)(lVar5 + 8);
  } while( true );
}

