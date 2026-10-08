
long FUN_100cad270(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  char cVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  long local_50;
  
  lVar4 = FUN_100c57ec0();
  lVar15 = -1;
  if (lVar4 != 0) {
    iVar1 = FUN_100c60800(*(undefined8 *)(param_2 + 2));
    lVar15 = 0;
    if (0 < iVar1) {
      iVar3 = *param_2;
      lVar5 = (long)iVar3;
      uVar14 = 0;
      if (iVar3 < 1) {
        lVar9 = 0;
        do {
          FUN_100c60820(*(undefined8 *)(param_2 + 2),uVar14 & 0xffffffff);
          iVar3 = FUN_100c58060(lVar4,lVar5);
          lVar15 = -1;
          if (iVar3 == 0) break;
          lVar16 = *(long *)(lVar4 + 8);
          *(undefined1 *)(lVar16 + -1) = 10;
          uVar13 = lVar16 - *(long *)(lVar4 + 8);
          iVar3 = FUN_100c58980(param_1,*(long *)(lVar4 + 8),uVar13 & 0xffffffff);
          if ((long)iVar3 != uVar13) break;
          lVar9 = lVar9 + uVar13;
          uVar14 = uVar14 + 1;
          lVar15 = lVar9;
        } while ((long)uVar14 < (long)iVar1);
      }
      else {
        lVar9 = 0;
        local_50 = 0;
        do {
          puVar6 = (undefined8 *)FUN_100c60820(*(undefined8 *)(param_2 + 2),lVar9);
          lVar16 = 0;
          puVar12 = puVar6;
          lVar15 = lVar5;
          do {
            if ((char *)*puVar12 != (char *)0x0) {
              sVar7 = _strlen((char *)*puVar12);
              lVar16 = lVar16 + sVar7;
            }
            puVar12 = puVar12 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          iVar2 = FUN_100c58060(lVar4,(long)((int)lVar16 * 2 + iVar3));
          lVar15 = -1;
          if (iVar2 == 0) break;
          lVar16 = 0;
          pcVar10 = *(char **)(lVar4 + 8);
          do {
            pcVar8 = pcVar10;
            pcVar10 = (char *)puVar6[lVar16];
            if (pcVar10 != (char *)0x0) {
              for (; cVar11 = *pcVar10, cVar11 != '\0'; pcVar10 = pcVar10 + 1) {
                if (cVar11 == '\t') {
                  *pcVar8 = '\\';
                  pcVar8 = pcVar8 + 1;
                  cVar11 = *pcVar10;
                }
                *pcVar8 = cVar11;
                pcVar8 = pcVar8 + 1;
              }
            }
            *pcVar8 = '\t';
            bVar17 = lVar16 != lVar5 + -1;
            lVar16 = lVar16 + 1;
            pcVar10 = pcVar8 + 1;
          } while (bVar17);
          *pcVar8 = '\n';
          uVar14 = (long)(pcVar8 + 1) - *(long *)(lVar4 + 8);
          iVar2 = FUN_100c58980(param_1,*(long *)(lVar4 + 8),uVar14 & 0xffffffff);
          if ((long)iVar2 != uVar14) break;
          lVar15 = local_50 + uVar14;
          lVar9 = lVar9 + 1;
          local_50 = lVar15;
        } while (lVar9 < iVar1);
      }
    }
    FUN_100c57f20(lVar4);
  }
  return lVar15;
}

