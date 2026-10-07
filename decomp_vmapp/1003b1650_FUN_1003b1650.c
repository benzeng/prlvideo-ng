
undefined8 FUN_1003b1650(long param_1)

{
  ushort uVar1;
  short sVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x120);
LAB_1003b16b3:
  while( true ) {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (lVar9 == 0) break;
    lVar12 = *(long *)(*(long *)(lVar9 + 0x28) + 0x28);
    if (*(short *)(lVar12 + 0x4c) == 5) {
      uVar14 = (ulong)*(uint *)(*(long *)(lVar12 + 0x40) + 0x68);
    }
    else {
      uVar14 = 0xffffffff;
      if (*(short *)(lVar12 + 0x4c) == 4) {
        uVar14 = (ulong)*(uint *)(*(long *)(lVar12 + 0x40) + 0x28);
      }
    }
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 8) + uVar14 * 8);
    puVar7 = operator_new(0x10);
    lVar12 = *(long *)(lVar9 + 0x40);
    *puVar7 = *(undefined8 *)(lVar12 + 0x38);
    puVar7[1] = lVar9;
    *(undefined8 **)(lVar12 + 0x38) = puVar7;
    plVar8 = (long *)plVar8[2];
  }
  lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
  if (lVar9 == 0) goto LAB_1003b21a0;
  lVar12 = *(long *)(lVar9 + 0x28);
  uVar1 = *(ushort *)(lVar12 + 0x4c);
  uVar6 = (uint)uVar1;
  if (uVar1 < 0x12) {
    if (8 < uVar6) goto LAB_1003b1dd7;
    if ((0xcU >> (uVar6 & 0x1f) & 1) != 0) {
      if ((uVar6 == 3) && (**(long **)(lVar12 + 8) != 0)) {
        lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
        puVar7 = *(undefined8 **)(lVar12 + 0x38);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar9) goto LAB_1003b19d9;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar9;
        *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b19d9:
        puVar7 = *(undefined8 **)(lVar9 + 0x40);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar12) goto LAB_1003b1a19;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar12;
        *(undefined8 **)(lVar9 + 0x40) = puVar10;
      }
LAB_1003b1a19:
      lVar12 = *(long *)(lVar9 + 0x28);
      iVar15 = 0;
LAB_1003b1a20:
      do {
        lVar12 = **(long **)(lVar12 + 8);
        if (lVar12 == 0) break;
        uVar1 = *(ushort *)(lVar12 + 0x4c);
        if (uVar1 < 0x30) {
          if (uVar1 == 0x16) {
            if ((iVar15 == 0) &&
               (plVar3 = (long *)**(long **)(*(long *)(lVar12 + 0x38) + 0x10), plVar3 != (long *)0x0
               )) {
              lVar11 = (**(code **)(*plVar3 + 0x20))();
              puVar7 = *(undefined8 **)(lVar11 + 0x38);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar9) goto LAB_1003b1aac;
              }
              puVar10 = operator_new(0x10);
              *puVar10 = puVar7;
              puVar10[1] = lVar9;
              *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b1aac:
              puVar7 = *(undefined8 **)(lVar9 + 0x40);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar11) goto LAB_1003b1b80;
              }
LAB_1003b1b60:
              puVar10 = operator_new(0x10);
              *puVar10 = puVar7;
              puVar10[1] = lVar11;
              *(undefined8 **)(lVar9 + 0x40) = puVar10;
            }
          }
          else {
            if (uVar1 != 0x17) goto LAB_1003b1a20;
            if (iVar15 == 0) {
              lVar11 = *(long *)(lVar12 + 0x38);
              puVar7 = *(undefined8 **)(lVar11 + 0x38);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar9) goto LAB_1003b1b46;
              }
              puVar10 = operator_new(0x10);
              *puVar10 = puVar7;
              puVar10[1] = lVar9;
              *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b1b46:
              puVar7 = *(undefined8 **)(lVar9 + 0x40);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar11) goto LAB_1003b1b80;
              }
              goto LAB_1003b1b60;
            }
          }
LAB_1003b1b80:
          iVar15 = iVar15 + -1;
        }
        else {
          if ((uVar1 != 0x30) && (uVar1 != 0x4c)) goto LAB_1003b1a20;
          iVar15 = iVar15 + 1;
        }
      } while (-1 < iVar15);
      goto LAB_1003b21a0;
    }
    if ((0x30U >> (uVar6 & 0x1f) & 1) == 0) {
      if ((0x180U >> (uVar6 & 0x1f) & 1) == 0) goto LAB_1003b1dd7;
LAB_1003b1ba7:
      if (((uVar6 == 8) || (uVar6 == 0x16)) && (**(long **)(lVar12 + 8) != 0)) {
        lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
        puVar7 = *(undefined8 **)(lVar12 + 0x38);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar9) goto LAB_1003b1c09;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar9;
        *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b1c09:
        puVar7 = *(undefined8 **)(lVar9 + 0x40);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar12) goto LAB_1003b1c49;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar12;
        *(undefined8 **)(lVar9 + 0x40) = puVar10;
      }
LAB_1003b1c49:
      lVar12 = *(long *)(lVar9 + 0x28);
      iVar15 = 0;
LAB_1003b1c70:
      do {
        lVar12 = **(long **)(lVar12 + 0x10);
        if (lVar12 == 0) break;
        if (*(short *)(lVar12 + 0x4c) == 0x30) {
          if (iVar15 == 0) {
            lVar11 = *(long *)(lVar12 + 0x38);
            puVar7 = *(undefined8 **)(lVar11 + 0x38);
            for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
              if (puVar10[1] == lVar9) goto LAB_1003b1cdc;
            }
            puVar10 = operator_new(0x10);
            *puVar10 = puVar7;
            puVar10[1] = lVar9;
            *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b1cdc:
            puVar7 = *(undefined8 **)(lVar9 + 0x40);
            for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
              if (puVar10[1] == lVar11) goto LAB_1003b1d1b;
            }
            puVar10 = operator_new(0x10);
            *puVar10 = puVar7;
            puVar10[1] = lVar11;
            *(undefined8 **)(lVar9 + 0x40) = puVar10;
          }
LAB_1003b1d1b:
          iVar15 = iVar15 + -1;
        }
        else {
          if (*(short *)(lVar12 + 0x4c) != 0x16) goto LAB_1003b1c70;
          iVar15 = iVar15 + 1;
        }
      } while (-1 < iVar15);
      goto LAB_1003b21a0;
    }
    if ((uVar6 != 5) || (**(long **)(lVar12 + 8) == 0)) goto LAB_1003b21a0;
    lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
    puVar7 = *(undefined8 **)(lVar12 + 0x38);
    for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10[1] == lVar9) goto LAB_1003b1799;
    }
    puVar10 = operator_new(0x10);
    *puVar10 = puVar7;
    puVar10[1] = lVar9;
    *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b1799:
    puVar7 = *(undefined8 **)(lVar9 + 0x40);
    for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10[1] == lVar12) goto LAB_1003b21a0;
    }
  }
  else {
    if (uVar1 < 0x4c) {
      if (uVar6 == 0x15 || uVar1 < 0x15) {
        if (uVar6 != 0x12) goto LAB_1003b1dd7;
        iVar15 = 0;
LAB_1003b1820:
        do {
          lVar12 = **(long **)(lVar12 + 8);
          if (lVar12 == 0) break;
          if (*(short *)(lVar12 + 0x4c) == 0x15) {
            if (iVar15 == 0) {
              lVar11 = *(long *)(lVar12 + 0x38);
              puVar7 = *(undefined8 **)(lVar11 + 0x38);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar9) goto LAB_1003b188c;
              }
              puVar10 = operator_new(0x10);
              *puVar10 = puVar7;
              puVar10[1] = lVar9;
              *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b188c:
              puVar7 = *(undefined8 **)(lVar9 + 0x40);
              for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10)
              {
                if (puVar10[1] == lVar11) goto LAB_1003b18cb;
              }
              puVar10 = operator_new(0x10);
              *puVar10 = puVar7;
              puVar10[1] = lVar11;
              *(undefined8 **)(lVar9 + 0x40) = puVar10;
            }
LAB_1003b18cb:
            iVar15 = iVar15 + -1;
          }
          else {
            if (*(short *)(lVar12 + 0x4c) != 0x1f) goto LAB_1003b1820;
            iVar15 = iVar15 + 1;
          }
        } while (-1 < iVar15);
      }
      else if (uVar1 - 0x3e < 2) {
        if ((uVar6 == 0x3f) && (**(long **)(lVar12 + 8) != 0)) {
          lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
          puVar7 = *(undefined8 **)(lVar12 + 0x38);
          for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
            if (puVar10[1] == lVar9) goto LAB_1003b1959;
          }
          puVar10 = operator_new(0x10);
          *puVar10 = puVar7;
          puVar10[1] = lVar9;
          *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b1959:
          puVar7 = *(undefined8 **)(lVar9 + 0x40);
          for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
            if (puVar10[1] == lVar12) goto LAB_1003b21a0;
          }
          goto LAB_1003b1e52;
        }
      }
      else {
        if (uVar6 == 0x16) goto LAB_1003b1ba7;
        if (uVar6 != 0x1f) goto LAB_1003b1dd7;
        if (**(long **)(lVar12 + 8) != 0) {
          lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
          puVar7 = *(undefined8 **)(lVar12 + 0x38);
          for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
            if (puVar10[1] == lVar9) goto LAB_1003b1d89;
          }
          puVar10 = operator_new(0x10);
          *puVar10 = puVar7;
          puVar10[1] = lVar9;
          *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b1d89:
          puVar7 = *(undefined8 **)(lVar9 + 0x40);
          for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
            if (puVar10[1] == lVar12) goto LAB_1003b201b;
          }
          puVar10 = operator_new(0x10);
          *puVar10 = puVar7;
          puVar10[1] = lVar12;
          *(undefined8 **)(lVar9 + 0x40) = puVar10;
        }
LAB_1003b201b:
        puVar7 = (undefined8 *)(lVar9 + 0x40);
        iVar15 = 0;
        for (lVar12 = **(long **)(*(long *)(lVar9 + 0x28) + 8); lVar12 != 0;
            lVar12 = **(long **)(lVar12 + 8)) {
          sVar2 = *(short *)(lVar12 + 0x4c);
          if (sVar2 == 0x12) {
            if (iVar15 == 0) {
              plVar3 = (long *)**(long **)(*(long *)(lVar12 + 0x38) + 0x10);
              iVar15 = 0;
              if (plVar3 != (long *)0x0) {
                lVar12 = (**(code **)(*plVar3 + 0x20))();
                puVar10 = *(undefined8 **)(lVar12 + 0x38);
                puVar13 = puVar10;
                goto joined_r0x0001003b2134;
              }
            }
          }
          else {
            if (sVar2 == 0x15) {
              if (iVar15 == 0) {
                lVar11 = *(long *)(lVar12 + 0x38);
                puVar10 = *(undefined8 **)(lVar11 + 0x38);
                for (puVar13 = puVar10; puVar13 != (undefined8 *)0x0;
                    puVar13 = (undefined8 *)*puVar13) {
                  if (puVar13[1] == lVar9) goto LAB_1003b20bb;
                }
                puVar13 = operator_new(0x10);
                *puVar13 = puVar10;
                puVar13[1] = lVar9;
                *(undefined8 **)(lVar11 + 0x38) = puVar13;
LAB_1003b20bb:
                puVar10 = (undefined8 *)*puVar7;
                for (puVar13 = puVar10; puVar13 != (undefined8 *)0x0;
                    puVar13 = (undefined8 *)*puVar13) {
                  if (puVar13[1] == lVar11) goto LAB_1003b20f8;
                }
                puVar13 = operator_new(0x10);
                *puVar13 = puVar10;
                puVar13[1] = lVar11;
                *puVar7 = puVar13;
              }
LAB_1003b20f8:
              iVar15 = iVar15 + -1;
            }
            else {
              if (sVar2 != 0x1f) goto LAB_1003b2030;
              iVar15 = iVar15 + 1;
            }
            if (iVar15 < 0) break;
          }
LAB_1003b2030:
        }
      }
      goto LAB_1003b21a0;
    }
    if (uVar6 == 0x4c) {
      bVar4 = false;
LAB_1003b1e90:
      do {
        iVar15 = 0;
LAB_1003b1f60:
        do {
          lVar12 = **(long **)(lVar12 + 8);
          if (lVar12 == 0) goto LAB_1003b21a0;
          uVar1 = *(ushort *)(lVar12 + 0x4c);
          if (0x16 < uVar1) {
            if (uVar1 == 0x17) {
              if ((iVar15 == 0) && (!bVar4)) {
                lVar11 = *(long *)(lVar12 + 0x38);
                puVar7 = *(undefined8 **)(lVar11 + 0x38);
                for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0;
                    puVar10 = (undefined8 *)*puVar10) {
                  if (puVar10[1] == lVar9) goto LAB_1003b1ef8;
                }
                puVar10 = operator_new(0x10);
                *puVar10 = puVar7;
                puVar10[1] = lVar9;
                *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b1ef8:
                puVar7 = *(undefined8 **)(lVar9 + 0x40);
                for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0;
                    puVar10 = (undefined8 *)*puVar10) {
                  if (puVar10[1] == lVar11) goto LAB_1003b1f3b;
                }
                puVar10 = operator_new(0x10);
                *puVar10 = puVar7;
                puVar10[1] = lVar11;
                *(undefined8 **)(lVar9 + 0x40) = puVar10;
              }
LAB_1003b1f3b:
              iVar15 = iVar15 + -1;
            }
            else {
              if (uVar1 != 0x4c) goto LAB_1003b1f60;
              iVar15 = iVar15 + 1;
            }
            if (iVar15 < 0) goto LAB_1003b21a0;
            goto LAB_1003b1f60;
          }
          bVar5 = bVar4;
          if (uVar1 != 6) {
            if (uVar1 != 10) goto LAB_1003b1f60;
            bVar5 = true;
            if (iVar15 != 0) {
              bVar5 = bVar4;
            }
          }
          bVar4 = bVar5;
        } while (iVar15 != 0);
        lVar11 = *(long *)(lVar12 + 0x38);
        puVar7 = *(undefined8 **)(lVar11 + 0x38);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar9) goto LAB_1003b1fe9;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar9;
        *(undefined8 **)(lVar11 + 0x38) = puVar10;
LAB_1003b1fe9:
        puVar7 = *(undefined8 **)(lVar9 + 0x40);
        for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10[1] == lVar11) goto LAB_1003b1e90;
        }
        puVar10 = operator_new(0x10);
        *puVar10 = puVar7;
        puVar10[1] = lVar11;
        *(undefined8 **)(lVar9 + 0x40) = puVar10;
      } while( true );
    }
LAB_1003b1dd7:
    if (**(long **)(lVar12 + 8) == 0) {
LAB_1003b21a0:
      plVar8 = (long *)plVar8[2];
      goto LAB_1003b16b3;
    }
    lVar12 = *(long *)(**(long **)(lVar12 + 8) + 0x38);
    puVar7 = *(undefined8 **)(lVar12 + 0x38);
    for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10[1] == lVar9) goto LAB_1003b1e29;
    }
    puVar10 = operator_new(0x10);
    *puVar10 = puVar7;
    puVar10[1] = lVar9;
    *(undefined8 **)(lVar12 + 0x38) = puVar10;
LAB_1003b1e29:
    puVar7 = *(undefined8 **)(lVar9 + 0x40);
    for (puVar10 = puVar7; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10[1] == lVar12) goto LAB_1003b21a0;
    }
  }
LAB_1003b1e52:
  puVar10 = operator_new(0x10);
  *puVar10 = puVar7;
  puVar10[1] = lVar12;
  *(undefined8 **)(lVar9 + 0x40) = puVar10;
  plVar8 = (long *)plVar8[2];
  goto LAB_1003b16b3;
joined_r0x0001003b2134:
  if (puVar13 == (undefined8 *)0x0) goto LAB_1003b2144;
  if (puVar13[1] == lVar9) goto LAB_1003b215d;
  puVar13 = (undefined8 *)*puVar13;
  goto joined_r0x0001003b2134;
LAB_1003b2144:
  puVar13 = operator_new(0x10);
  *puVar13 = puVar10;
  puVar13[1] = lVar9;
  *(undefined8 **)(lVar12 + 0x38) = puVar13;
LAB_1003b215d:
  puVar10 = (undefined8 *)*puVar7;
  for (puVar13 = puVar10; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
    if (puVar13[1] == lVar12) goto LAB_1003b21a0;
  }
  puVar13 = operator_new(0x10);
  *puVar13 = puVar10;
  puVar13[1] = lVar12;
  *puVar7 = puVar13;
  plVar8 = (long *)plVar8[2];
  goto LAB_1003b16b3;
}

