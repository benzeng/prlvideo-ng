
undefined2 * FUN_10084efa0(undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  iVar5 = FUN_10084b410();
  iVar2 = (iVar5 * 3) / 10;
  iVar3 = (iVar5 * 3) / 1000;
  iVar5 = iVar3 + 2 + iVar2;
  puVar6 = (undefined8 *)
           FUN_10081ddd0(((uint)((ulong)((long)iVar5 * 0x6bca1af3) >> 0x23) - (iVar5 >> 0x1f)) * 8 +
                         8,"bn_print.c",0x7c);
  iVar2 = iVar3 + 5 + iVar2;
  puVar7 = (undefined2 *)FUN_10081ddd0(iVar2,"bn_print.c",0x7d);
  if ((puVar6 == (undefined8 *)0x0) || (puVar7 == (undefined2 *)0x0)) {
    FUN_100887ce0(3,0x68,0x41,"bn_print.c",0x7f);
    bVar4 = false;
    lVar12 = 0;
  }
  else {
    lVar8 = FUN_10084b840(param_1);
    bVar4 = false;
    lVar12 = 0;
    if (lVar8 != 0) {
      lVar12 = lVar8;
      if (*(int *)(lVar8 + 8) == 0) {
        *puVar7 = 0x30;
        bVar4 = true;
      }
      else {
        puVar13 = puVar6;
        puVar10 = puVar7;
        if (*(int *)(lVar8 + 0x10) == 0) goto LAB_10084f0b0;
        puVar10 = (undefined2 *)((long)puVar7 + 1);
        *(undefined1 *)puVar7 = 0x2d;
        iVar5 = *(int *)(lVar8 + 8);
        while (iVar5 != 0) {
LAB_10084f0b0:
          uVar9 = FUN_100850640(lVar8,10000000000000000000);
          *puVar13 = uVar9;
          puVar13 = puVar13 + 1;
          iVar5 = *(int *)(lVar8 + 8);
        }
        FUN_1008823b0(puVar10,(undefined1 *)((long)puVar7 + ((long)iVar2 - (long)puVar10)),"%lu",
                      puVar13[-1]);
        puVar11 = (undefined1 *)((long)puVar10 + -1);
        do {
          pcVar1 = puVar11 + 1;
          puVar11 = puVar11 + 1;
          puVar14 = puVar13 + -1;
        } while (*pcVar1 != '\0');
        while (puVar15 = puVar14, puVar15 != puVar6) {
          puVar14 = puVar13 + -2;
          FUN_1008823b0(puVar11,(undefined1 *)((long)puVar7 + ((long)iVar2 - (long)puVar11)),
                        "%019lu",puVar13[-2]);
          puVar11 = puVar11 + -1;
          do {
            pcVar1 = puVar11 + 1;
            puVar11 = puVar11 + 1;
            puVar13 = puVar15;
          } while (*pcVar1 != '\0');
        }
        bVar4 = true;
      }
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_10081e1a0(puVar6);
  }
  if (lVar12 != 0) {
    FUN_10084b4b0(lVar12);
  }
  if ((puVar7 != (undefined2 *)0x0) && (!bVar4)) {
    FUN_10081e1a0(puVar7);
    puVar7 = (undefined2 *)0x0;
  }
  return puVar7;
}

