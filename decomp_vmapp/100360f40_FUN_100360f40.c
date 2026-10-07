
undefined8 FUN_100360f40(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_2 + 0xbb60) == 0) {
    lVar7 = *(long *)(param_1 + 0x98);
    uVar5 = (*(uint *)(lVar7 + 0x220) | *(uint *)(param_2 + 0x14)) & 0xffff;
    if (uVar5 != 0) {
      uVar4 = 0;
      do {
        if ((uVar5 & 1) != 0) {
          lVar8 = uVar4 * 0x10;
          puVar6 = (uint *)(lVar7 + 0x120 + lVar8);
          if (*(char *)(param_2 + 0x2c + uVar4 * 0x14) == '\0') {
            uVar1 = *(uint *)(param_2 + 0x30 + uVar4 * 0x14);
            if (uVar1 != *puVar6) {
              if (uVar1 != 0) {
                for (puVar3 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                                        (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8)
                    ; puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
                  if (*puVar3 == uVar1) {
                    if (((*(long *)(puVar3 + 2) != 0) &&
                        (lVar2 = *(long *)(*(long *)(puVar3 + 2) + 8), lVar2 != 0)) &&
                       ((*(ushort *)(lVar2 + 0xb0) & 0x80) != 0)) {
                      *(long *)(lVar7 + 0x128 + lVar8) = lVar2;
                      *puVar6 = uVar1;
                      goto LAB_100361080;
                    }
                    break;
                  }
                }
              }
              *(undefined8 *)(lVar7 + 0x128 + lVar8) = 0;
              *puVar6 = 0;
            }
          }
          else {
            *puVar6 = 0;
            *(undefined8 *)(lVar7 + 0x128 + lVar8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10068);
          }
        }
LAB_100361080:
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar5 = uVar5 >> 1;
      } while (uVar5 != 0);
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(lVar7 + 0x220) = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x98);
    *(undefined4 *)(lVar7 + 0x120) = 0;
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10068);
  }
  uVar5 = *(uint *)(param_2 + 0x1c);
  uVar4 = (ulong)uVar5;
  if ((uVar5 != *(uint *)(lVar7 + 0x228)) || (*(int *)(lVar7 + 0x238) != *(int *)(param_2 + 0x18)))
  {
    if (uVar5 != 0) {
      for (puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                              (ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) * 8);
          puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
        if (*puVar6 == uVar5) {
          if (((*(long *)(puVar6 + 2) != 0) &&
              (lVar8 = *(long *)(*(long *)(puVar6 + 2) + 8), lVar8 != 0)) &&
             ((*(ushort *)(lVar8 + 0xb0) & 0x100) != 0)) {
            *(long *)(lVar7 + 0x230) = lVar8;
            *(uint *)(lVar7 + 0x228) = uVar5;
            uVar4 = (ulong)*(uint *)(param_2 + 0x18);
            *(uint *)(lVar7 + 0x238) = *(uint *)(param_2 + 0x18);
            goto LAB_10036112c;
          }
          break;
        }
      }
    }
    *(undefined8 *)(lVar7 + 0x230) = 0;
    *(undefined4 *)(lVar7 + 0x228) = 0;
    *(undefined4 *)(lVar7 + 0x238) = 0;
  }
LAB_10036112c:
  return CONCAT71((int7)(uVar4 >> 8),1);
}

