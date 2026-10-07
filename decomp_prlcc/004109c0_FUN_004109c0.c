
void * FUN_004109c0(long *param_1,size_t *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  size_t __size;
  size_t __size_00;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  
  __size = *param_2;
  bVar3 = true;
  if (*(char *)*param_1 != -2) {
    if (*(char *)*param_1 != -1) {
      return (void *)0x0;
    }
    bVar3 = false;
  }
  uVar11 = 2;
  pvVar5 = malloc(__size);
  __size_00 = 0;
  uVar8 = *param_2 - 1;
  if (uVar8 < 3) {
LAB_00410bbe:
    *param_2 = __size_00;
    pvVar5 = realloc(pvVar5,__size_00);
    *param_1 = (long)pvVar5;
    return pvVar5;
  }
  __size_00 = 0;
  if (!bVar3) goto LAB_00410afd;
  do {
    lVar9 = *param_1;
    uVar1 = CONCAT11(*(undefined1 *)(lVar9 + uVar11),*(undefined1 *)(lVar9 + 1 + uVar11));
    sVar12 = __size_00;
    while( true ) {
      uVar10 = (ulong)(int)(uint)uVar1;
      if ((uVar10 - 0xd800 < 0x800) && (uVar11 = uVar11 + 2, uVar11 < uVar8)) {
        if (bVar3) {
          uVar2 = CONCAT11(*(undefined1 *)(lVar9 + uVar11),*(undefined1 *)(lVar9 + 1 + uVar11));
        }
        else {
          uVar2 = CONCAT11(*(undefined1 *)(lVar9 + 1 + uVar11),*(undefined1 *)(lVar9 + uVar11));
        }
        uVar10 = ((ulong)(uVar2 & 0x3ff) | (ulong)(uVar1 & 0x3ff) << 10) + 0x10000;
      }
      while (__size < sVar12 + 6) {
        __size = __size + 0x400;
        pvVar5 = realloc(pvVar5,__size);
      }
      uVar8 = uVar10;
      iVar4 = 0;
      if (uVar10 < 0x80) {
        __size_00 = sVar12 + 1;
        *(char *)(sVar12 + (long)pvVar5) = (char)uVar10;
      }
      else {
        do {
          iVar7 = iVar4;
          uVar8 = (long)uVar8 / 2;
          iVar4 = iVar7 + 1;
        } while (uVar8 != 0);
        __size_00 = sVar12 + 1;
        iVar4 = (iVar7 + -1) / 5;
        iVar7 = iVar4 * 6;
        *(byte *)(sVar12 + (long)pvVar5) =
             (byte)((long)uVar10 >> ((byte)iVar7 & 0x3f)) |
             (byte)(0xff << (7U - (char)iVar4 & 0x1f));
        if (iVar4 != 0) {
          lVar9 = (long)pvVar5 + sVar12;
          iVar6 = iVar4;
          do {
            iVar7 = iVar7 + -6;
            *(byte *)(lVar9 + 1) = (byte)((long)uVar10 >> ((byte)iVar7 & 0x3f)) & 0x3f | 0x80;
            lVar9 = lVar9 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          __size_00 = sVar12 + 2 + (ulong)(iVar4 - 1);
        }
      }
      uVar11 = uVar11 + 2;
      uVar8 = *param_2 - 1;
      if (uVar8 <= uVar11) goto LAB_00410bbe;
      if (bVar3) break;
LAB_00410afd:
      lVar9 = *param_1;
      uVar1 = CONCAT11(*(undefined1 *)(lVar9 + 1 + uVar11),*(undefined1 *)(lVar9 + uVar11));
      sVar12 = __size_00;
    }
  } while( true );
}

