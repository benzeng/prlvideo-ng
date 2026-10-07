
void FUN_100333e10(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  byte bVar12;
  
  if (*(long **)(param_1 + 0xbb40) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0xbb40);
    plVar8 = (long *)(param_1 + 0xbb40);
    do {
      while (plVar5 = plVar4, *(uint *)(plVar5 + 4) < param_2) {
        plVar1 = plVar5 + 1;
        plVar5 = plVar8;
        plVar4 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100333e60;
      }
      plVar4 = (long *)*plVar5;
      plVar8 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_100333e60:
    if (((plVar5 != (long *)(param_1 + 0xbb40)) && (*(uint *)(plVar5 + 4) <= param_2)) &&
       (plVar4 = (long *)plVar5[5], plVar4 != (long *)0x0)) {
      bVar2 = *(byte *)(param_1 + 0xbb6c);
      *(undefined4 *)(param_1 + 0xbb6c) = 0;
      *(undefined4 *)(param_1 + 0xbb70) = 0;
      lVar9 = *plVar4;
      iVar7 = (int)((ulong)(plVar4[1] - lVar9) >> 3);
      if (iVar7 == 0) {
        bVar12 = 0;
      }
      else {
        bVar12 = 0;
        lVar6 = 0;
        while( true ) {
          switch(*(undefined1 *)(lVar9 + 6 + lVar6 * 8)) {
          case 0:
            bVar12 = bVar12 | 2;
            *(byte *)(param_1 + 0xbb6c) = bVar12;
            break;
          case 1:
            uVar10 = (ulong)*(byte *)(lVar9 + 4 + lVar6 * 8);
            uVar11 = 0;
            if (uVar10 < 0x11) {
              uVar11 = *(undefined4 *)(&DAT_100b3b540 + uVar10 * 4);
            }
            *(undefined4 *)(param_1 + 0xbb70) = uVar11;
            break;
          case 3:
            bVar12 = bVar12 | 0x10;
            *(byte *)(param_1 + 0xbb6c) = bVar12;
            break;
          case 4:
            bVar12 = bVar12 | 0x20;
            *(byte *)(param_1 + 0xbb6c) = bVar12;
            break;
          case 9:
            bVar12 = bVar12 | 1;
            *(byte *)(param_1 + 0xbb6c) = bVar12;
            break;
          case 10:
            cVar3 = *(char *)(lVar9 + 7 + lVar6 * 8);
            if (cVar3 == '\x01') {
              bVar12 = bVar12 | 8;
              *(byte *)(param_1 + 0xbb6c) = bVar12;
            }
            else if (cVar3 == '\0') {
              bVar12 = bVar12 | 4;
              *(byte *)(param_1 + 0xbb6c) = bVar12;
            }
            break;
          case 0xb:
            bVar12 = bVar12 | 0x40;
            *(byte *)(param_1 + 0xbb6c) = bVar12;
          }
          if (iVar7 + -1 == (int)lVar6) break;
          lVar6 = lVar6 + 1;
          lVar9 = *plVar4;
        }
      }
      if (((bVar12 ^ bVar2) & 1) != 0) {
        *(ulong *)(param_1 + 0x188) =
             *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3078);
      }
    }
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}

