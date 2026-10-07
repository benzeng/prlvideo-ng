
undefined8
FUN_10045b450(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             int param_8)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar8 = 0xffffffe3;
  if (param_2 - 1U < 4) {
    *param_1 = param_2;
    iVar5 = 0xff;
    if (param_3 != 0) {
      iVar5 = param_3;
    }
    uVar8 = 0xffffffde;
    if ((0 < iVar5) && (uVar8 = 0xffffffdb, iVar5 < 0x100)) {
      param_1[1] = iVar5;
      iVar3 = -1;
      do {
        iVar3 = iVar3 + 1;
      } while (1 << ((byte)iVar3 & 0x1f) <= iVar5);
      iVar4 = 8;
      if (7 < iVar3) {
        iVar4 = iVar3;
      }
      param_1[2] = (iVar4 + iVar3) * 2;
      uVar8 = 0xffffffd2;
      if (-1 < param_4) {
        uVar8 = 0xffffffd0;
        if ((param_4 <= (iVar5 + 1) / 2) && (uVar8 = 0xffffffce, param_4 < 0x100)) {
          param_1[3] = param_4;
          iVar3 = (iVar5 + param_4 * 2) / (param_4 * 2 + 1);
          param_1[4] = iVar3 + 1;
          iVar4 = -1;
          do {
            iVar4 = iVar4 + 1;
          } while (1 << ((byte)iVar4 & 0x1f) <= iVar3);
          param_1[5] = iVar4;
          param_1[6] = param_5;
          param_1[7] = param_6;
          param_1[8] = param_7;
          if (iVar5 < 0x80) {
            iVar9 = (int)(0x100 / (long)(iVar5 + 1));
            iVar4 = param_4 * 3 + (int)(3 / (long)iVar9);
            iVar3 = 2;
            if (1 < iVar4) {
              iVar3 = iVar4;
            }
            iVar4 = param_4 * 5 + (int)(7 / (long)iVar9);
            if (iVar4 < 3) {
              iVar4 = 3;
            }
            iVar6 = param_4 * 7 + (int)(0x15 / (long)iVar9);
            iVar9 = 4;
            if (3 < iVar6) {
              iVar9 = iVar6;
            }
          }
          else {
            iVar9 = 0x10;
            if (iVar5 < 0xfff) {
              iVar9 = (int)(iVar5 + 0x80 + ((uint)(iVar5 + 0x80 >> 0x1f) >> 0x18)) >> 8;
            }
            iVar3 = iVar9 + 2 + param_4 * 3;
            iVar4 = param_4 * 5 + 3 + iVar9 * 4;
            iVar9 = param_4 * 7 + 4 + iVar9 * 0x11;
          }
          iVar7 = param_4 + 1;
          iVar6 = iVar3;
          if (iVar5 < iVar3) {
            iVar6 = iVar7;
          }
          if (iVar3 < iVar7) {
            iVar6 = iVar7;
          }
          iVar3 = iVar4;
          if (iVar4 < iVar6) {
            iVar3 = iVar6;
          }
          if (iVar5 < iVar4) {
            iVar3 = iVar6;
          }
          iVar4 = iVar9;
          if (iVar9 < iVar3) {
            iVar4 = iVar3;
          }
          if (iVar5 < iVar9) {
            iVar4 = iVar3;
          }
          if (param_5 == 0) {
            param_1[6] = iVar6;
          }
          else {
            if (param_5 <= param_4) {
              return 0xffffffa3;
            }
            iVar6 = param_5;
            if (iVar5 < param_5) {
              return 0xffffffa3;
            }
          }
          if (param_6 == 0) {
            param_1[7] = iVar3;
          }
          else {
            if (iVar5 < param_6) {
              return 0xffffff9f;
            }
            iVar3 = param_6;
            if (param_6 < iVar6) {
              return 0xffffff9f;
            }
          }
          if (param_7 == 0) {
            param_1[8] = iVar4;
          }
          else {
            if (iVar5 < param_7) {
              return 0xffffff9b;
            }
            iVar4 = param_7;
            if (param_7 < iVar3) {
              return 0xffffff9b;
            }
          }
          iVar5 = 0x40;
          if ((param_8 == 0) ||
             ((uVar8 = 0xffffff96, 2 < param_8 &&
              (uVar8 = 0xffffff94, iVar5 = param_8, param_8 < 0x100)))) {
            param_1[9] = iVar5;
            piVar2 = param_1 + 0x5d1;
            iVar5 = -0x100;
            if (iVar4 < 0x101) {
              iVar3 = -0x101;
              do {
                iVar5 = iVar3;
                *(undefined1 *)piVar2 = 0xfc;
                piVar2 = (int *)((long)piVar2 + 1);
                iVar3 = iVar5 + 1;
              } while (iVar3 < -param_1[8]);
              iVar5 = iVar5 + 2;
              iVar3 = param_1[7];
            }
            iVar4 = iVar5;
            if (iVar5 <= -iVar3) {
              do {
                *(undefined1 *)piVar2 = 0xfd;
                piVar2 = (int *)((long)piVar2 + 1);
                iVar5 = iVar4 + 1;
                bVar1 = iVar4 < -param_1[7];
                iVar4 = iVar5;
              } while (bVar1);
            }
            iVar3 = iVar5;
            if (iVar5 <= -param_1[6]) {
              do {
                *(undefined1 *)piVar2 = 0xfe;
                piVar2 = (int *)((long)piVar2 + 1);
                iVar5 = iVar3 + 1;
                bVar1 = iVar3 < -param_1[6];
                iVar3 = iVar5;
              } while (bVar1);
            }
            for (; iVar5 < -param_1[3]; iVar5 = iVar5 + 1) {
              *(undefined1 *)piVar2 = 0xff;
              piVar2 = (int *)((long)piVar2 + 1);
            }
            iVar3 = iVar5;
            if (iVar5 <= param_1[3]) {
              do {
                *(undefined1 *)piVar2 = 0;
                piVar2 = (int *)((long)piVar2 + 1);
                iVar5 = iVar3 + 1;
                bVar1 = iVar3 < param_1[3];
                iVar3 = iVar5;
              } while (bVar1);
            }
            for (; iVar5 < param_1[6]; iVar5 = iVar5 + 1) {
              *(undefined1 *)piVar2 = 1;
              piVar2 = (int *)((long)piVar2 + 1);
            }
            for (; iVar5 < param_1[7]; iVar5 = iVar5 + 1) {
              *(undefined1 *)piVar2 = 2;
              piVar2 = (int *)((long)piVar2 + 1);
            }
            for (; iVar5 < param_1[8]; iVar5 = iVar5 + 1) {
              *(undefined1 *)piVar2 = 3;
              piVar2 = (int *)((long)piVar2 + 1);
            }
            uVar8 = 0;
            if (iVar5 < 0x100) {
              _memset(piVar2,4,(ulong)(0xff - iVar5) + 1);
            }
          }
        }
      }
    }
  }
  return uVar8;
}

