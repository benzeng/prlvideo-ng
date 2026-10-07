
undefined8
FUN_1003c9cb0(uint *param_1,int *param_2,uint *param_3,int *param_4,long param_5,long param_6,
             uint param_7,undefined4 param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  iVar3 = param_4[2];
  iVar4 = *param_4;
  if (iVar3 != iVar4) {
    iVar5 = param_4[1];
    iVar6 = param_4[3];
    if (iVar6 != iVar5) {
      uVar7 = param_3[3];
      uVar8 = param_1[3];
      lVar9 = (ulong)(iVar5 * uVar7 + (uint)(byte)(&DAT_100b3f717)[(ulong)*param_3 * 8] * iVar4) +
              *(long *)(param_3 + 4);
      lVar10 = (ulong)((uint)(byte)(&DAT_100b3f717)[(ulong)*param_1 * 8] * *param_2 +
                      param_2[1] * uVar8) + *(long *)(param_1 + 4);
      iVar11 = 0;
      do {
        lVar12 = 0;
        do {
          bVar1 = *(byte *)(lVar10 + 2 + lVar12 * 4);
          if (bVar1 != 0) {
            if (bVar1 == 0xff) {
              *(char *)(lVar9 + 2 + lVar12 * 4) = (char)((uint)param_8 >> 0x10);
            }
            else {
              bVar2 = *(byte *)(param_5 + (ulong)*(byte *)(lVar9 + 2 + lVar12 * 4));
              *(undefined1 *)(lVar9 + 2 + lVar12 * 4) =
                   *(undefined1 *)
                    (param_6 +
                    (long)((int)(((param_7 >> 0x10 & 0xff) - (uint)bVar2) * (uint)bVar1) / 0xff) +
                    (ulong)bVar2);
            }
          }
          bVar1 = *(byte *)(lVar10 + 1 + lVar12 * 4);
          if (bVar1 != 0) {
            if (bVar1 == 0xff) {
              *(char *)(lVar9 + 1 + lVar12 * 4) = (char)((uint)param_8 >> 8);
            }
            else {
              bVar2 = *(byte *)(param_5 + (ulong)*(byte *)(lVar9 + 1 + lVar12 * 4));
              *(undefined1 *)(lVar9 + 1 + lVar12 * 4) =
                   *(undefined1 *)
                    (param_6 +
                    (long)((int)(((param_7 >> 8 & 0xff) - (uint)bVar2) * (uint)bVar1) / 0xff) +
                    (ulong)bVar2);
            }
          }
          bVar1 = *(byte *)(lVar10 + lVar12 * 4);
          if (bVar1 != 0) {
            if (bVar1 == 0xff) {
              *(char *)(lVar9 + lVar12 * 4) = (char)param_8;
            }
            else {
              bVar2 = *(byte *)(param_5 + (ulong)*(byte *)(lVar9 + lVar12 * 4));
              *(undefined1 *)(lVar9 + lVar12 * 4) =
                   *(undefined1 *)
                    (param_6 +
                    (long)((int)(((param_7 & 0xff) - (uint)bVar2) * (uint)bVar1) / 0xff) +
                    (ulong)bVar2);
            }
          }
          lVar12 = lVar12 + 1;
        } while (iVar3 - iVar4 != (int)lVar12);
        lVar9 = lVar9 + (ulong)uVar7;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + (ulong)uVar8;
      } while (iVar11 != iVar6 - iVar5);
    }
  }
  return 1;
}

