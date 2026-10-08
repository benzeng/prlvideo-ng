
ulong FUN_100ba20d0(long param_1,long param_2,uint param_3,long param_4,long *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  int local_6c;
  
  uVar20 = 0;
  if ((int)param_3 < 1) {
LAB_100ba2707:
    if ((int)param_3 < (int)uVar20) {
      uVar20 = param_3;
    }
    return (ulong)uVar20;
  }
  lVar15 = (long)(int)param_3;
  uVar20 = 0;
  local_6c = -1;
LAB_100ba214a:
  for (uVar13 = (ulong)(int)uVar20;
      (((ulong)*(byte *)(param_2 + uVar13) < 0x3e &&
       ((0x2000000100000200U >> ((ulong)*(byte *)(param_2 + uVar13) & 0x3f) & 1) != 0)) &&
      ((long)uVar13 < lVar15)); uVar13 = uVar13 + 1) {
  }
  iVar14 = (int)uVar13;
  if (iVar14 < 0) {
    return uVar13 & 0xffffffff;
  }
  if ((int)param_3 <= iVar14) {
    return uVar13 & 0xffffffff;
  }
  uVar12 = (ulong)iVar14;
  for (uVar22 = uVar12;
      ((0x3d < (ulong)*(byte *)(param_2 + uVar22) ||
       ((0x2000000100000200U >> ((ulong)*(byte *)(param_2 + uVar22) & 0x3f) & 1) == 0)) &&
      ((long)uVar22 < lVar15)); uVar22 = uVar22 + 1) {
  }
  iVar21 = (int)uVar22;
  if (iVar21 < 0) {
    return uVar22 & 0xffffffff;
  }
  if ((int)param_3 <= iVar21) {
    return uVar22 & 0xffffffff;
  }
  lVar17 = (long)iVar21;
  if (*(char *)(param_2 + lVar17) == '=') {
    iVar18 = local_6c;
    if (param_4 == 0) {
LAB_100ba2381:
      local_6c = iVar18;
      bVar5 = 0x3d;
      if (-1 < local_6c) {
        for (; ((bVar5 < 0x3e && ((0x2000000100000200U >> ((ulong)bVar5 & 0x3f) & 1) != 0)) &&
               (lVar17 < lVar15)); lVar17 = lVar17 + 1) {
          bVar5 = *(byte *)(param_2 + 1 + lVar17);
        }
        uVar20 = (uint)lVar17;
        if (uVar20 == param_3) {
          return 0xfffffffe;
        }
        bVar3 = false;
        uVar13 = (long)(int)uVar20;
        do {
          cVar1 = *(char *)(param_2 + uVar13);
          bVar4 = bVar3;
          if ((cVar1 == '\t') || (cVar1 == ' ')) {
            if ((lVar15 <= (long)uVar13) || (!bVar3)) goto LAB_100ba265c;
          }
          else {
            if ((lVar15 <= (long)uVar13) || (!bVar3 && cVar1 == '=')) goto LAB_100ba265c;
            if (((cVar1 == '\"') && (*(char *)(param_2 + -1 + uVar13) != '\\')) &&
               (bVar4 = true, bVar3)) goto LAB_100ba2665;
          }
          bVar3 = bVar4;
          uVar13 = uVar13 + 1;
        } while( true );
      }
    }
    else {
      pcVar16 = (char *)*param_5;
      local_6c = -3;
      if (pcVar16 != (char *)0x0) {
        iVar18 = 0;
        plVar9 = param_5;
        do {
          plVar9 = plVar9 + 5;
          sVar7 = _strlen(pcVar16);
          if (((long)(iVar21 - iVar14) == sVar7) &&
             (iVar6 = _memcmp(pcVar16,(void *)(param_2 + uVar12),(long)(iVar21 - iVar14)),
             iVar6 == 0)) goto LAB_100ba2381;
          iVar18 = iVar18 + 1;
          pcVar16 = (char *)*plVar9;
        } while (pcVar16 != (char *)0x0);
      }
    }
    plVar9 = _malloc(0x20);
    if (plVar9 == (long *)0x0) {
      return 0xfffffffc;
    }
    plVar9[3] = 0;
    plVar9[2] = 0;
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar9[1] = (long)plVar9;
    *plVar9 = (long)plVar9;
    iVar21 = iVar21 - iVar14;
    pvVar10 = _malloc((long)(iVar21 + 1));
    if (pvVar10 == (void *)0x0) {
      _free(plVar9);
      return 0xfffffffc;
    }
    _memcpy(pvVar10,(void *)(uVar12 + param_2),(long)iVar21);
    *(undefined1 *)((long)pvVar10 + (long)iVar21) = 0;
    plVar9[2] = (long)pvVar10;
    for (; (((ulong)*(byte *)(param_2 + lVar17) < 0x3e &&
            ((0x2000000100000200U >> ((ulong)*(byte *)(param_2 + lVar17) & 0x3f) & 1) != 0)) &&
           (lVar17 < lVar15)); lVar17 = lVar17 + 1) {
    }
    uVar20 = (uint)lVar17;
    if (uVar20 == param_3) {
      _free(pvVar10);
      if ((void *)plVar9[3] != (void *)0x0) {
        _free((void *)plVar9[3]);
      }
      _free(plVar9);
      return 0xfffffffe;
    }
    bVar3 = false;
    uVar13 = (long)(int)uVar20;
    do {
      cVar1 = *(char *)(param_2 + uVar13);
      bVar4 = bVar3;
      if ((cVar1 == '\t') || (cVar1 == ' ')) {
        if ((lVar15 <= (long)uVar13) || (!bVar3)) goto LAB_100ba25b0;
      }
      else {
        if ((lVar15 <= (long)uVar13) || (!bVar3 && cVar1 == '=')) goto LAB_100ba25b0;
        if (((cVar1 == '\"') && (*(char *)(param_2 + -1 + uVar13) != '\\')) && (bVar4 = true, bVar3)
           ) goto LAB_100ba25bd;
      }
      bVar3 = bVar4;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  if (param_4 == 0) {
    return uVar13 & 0xffffffff;
  }
  plVar9 = _malloc(0x28);
  if (plVar9 == (long *)0x0) {
    return 0xfffffffc;
  }
  plVar8 = plVar9 + 3;
  plVar9[4] = (long)plVar8;
  plVar9[3] = (long)plVar8;
  plVar9[1] = (long)plVar9;
  *plVar9 = (long)plVar9;
  iVar14 = iVar21 - iVar14;
  pvVar10 = _malloc((long)(iVar14 + 1));
  if (pvVar10 == (void *)0x0) {
    _free(plVar9);
    return 0xfffffffc;
  }
  _memcpy(pvVar10,(void *)(uVar12 + param_2),(long)iVar14);
  *(undefined1 *)((long)pvVar10 + (long)iVar14) = 0;
  plVar9[2] = (long)pvVar10;
  puVar2 = *(undefined8 **)(param_4 + 0x2a8);
  plVar9[1] = (long)puVar2;
  *plVar9 = param_4 + 0x2a0;
  *puVar2 = plVar9;
  *(long **)(param_4 + 0x2a8) = plVar9;
  iVar14 = FUN_100ba20d0(plVar8,lVar17 + 1 + param_2,(param_3 - 1) - iVar21,0,0);
  uVar13 = (ulong)(uint)(iVar14 + iVar21);
  goto LAB_100ba26e9;
LAB_100ba265c:
  if (bVar3) {
    return 0xfffffffe;
  }
LAB_100ba2665:
  if ((int)uVar13 < 0) {
    return uVar13 & 0xffffffff;
  }
  iVar14 = (*(char *)(param_2 + (int)uVar20) == '\"') + uVar20;
  uVar20 = (*(code *)param_5[(long)local_6c * 5 + 3])
                     ((int)param_5[(long)local_6c * 5 + 1] + param_4,param_2 + iVar14,
                      (int)uVar13 - iVar14);
  if ((int)uVar20 < 0) {
    return (ulong)uVar20;
  }
  *(ulong *)(param_4 + 0x18) = *(ulong *)(param_4 + 0x18) | 1L << ((byte)local_6c & 0x3f);
  iVar14 = uVar20 + iVar14;
LAB_100ba26f7:
  uVar20 = iVar14 + 1;
  if ((int)param_3 <= (int)uVar20) goto LAB_100ba2707;
  goto LAB_100ba214a;
LAB_100ba25b0:
  uVar19 = 0xfffffffe;
  if (!bVar3) {
LAB_100ba25bd:
    uVar19 = (uint)uVar13;
    if (-1 < (int)uVar19) {
      iVar21 = (*(char *)(param_2 + (int)uVar20) == '\"') + uVar20;
      iVar14 = uVar19 - iVar21;
      pvVar11 = _malloc((long)(iVar14 + 1));
      if (pvVar11 == (void *)0x0) {
        plVar9[3] = 0;
        _free(pvVar10);
        if ((void *)plVar9[3] != (void *)0x0) {
          _free((void *)plVar9[3]);
        }
        _free(plVar9);
        return 0xfffffffc;
      }
      _memcpy(pvVar11,(void *)(iVar21 + param_2),(long)iVar14);
      *(undefined1 *)((long)pvVar11 + (long)iVar14) = 0;
      plVar9[3] = (long)pvVar11;
      iVar14 = FUN_100b9a230(plVar9[2]);
      if (iVar14 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 8);
        plVar9[1] = (long)puVar2;
        *plVar9 = param_1;
        *puVar2 = plVar9;
        *(long **)(param_1 + 8) = plVar9;
      }
      else {
        if ((void *)plVar9[2] != (void *)0x0) {
          _free((void *)plVar9[2]);
        }
        if ((void *)plVar9[3] != (void *)0x0) {
          _free((void *)plVar9[3]);
        }
        _free(plVar9);
      }
LAB_100ba26e9:
      iVar14 = (int)uVar13;
      goto LAB_100ba26f7;
    }
  }
  _free(pvVar10);
  if ((void *)plVar9[3] != (void *)0x0) {
    _free((void *)plVar9[3]);
  }
  _free(plVar9);
  return (ulong)uVar19;
}

