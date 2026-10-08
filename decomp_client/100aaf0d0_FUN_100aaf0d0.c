
/* WARNING: Removing unreachable block (ram,0x000100aaf0f7) */

undefined1 FUN_100aaf0d0(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  
  do {
    if ((void *)0x1 < DAT_102313a68) goto LAB_100aaf140;
  } while (DAT_102313a68 != (void *)0x0);
  LOCK();
  DAT_102313a68 = (void *)0x1;
  UNLOCK();
  pvVar4 = operator_new(0x40,(nothrow_t *)PTR_nothrow_1021e1620);
  if (pvVar4 == (void *)0x0) {
    DAT_102313a68 = (void *)0x0;
    uVar10 = 0;
  }
  else {
    FUN_100ab0360(pvVar4);
    DAT_102313a68 = pvVar4;
LAB_100aaf140:
    FUN_100ab03a0(DAT_102313a68);
    iVar3 = DAT_102313a70 + 1;
    uVar10 = 1;
    bVar1 = DAT_102313a70 < 1;
    DAT_102313a70 = iVar3;
    if (bVar1) {
      iVar3 = FUN_100bf2540();
      uVar11 = (ulong)iVar3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar5 = SUB168(auVar2 * ZEXT816(0x40),0);
      uVar6 = uVar5 + 8;
      if (0xfffffffffffffff7 < uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      uVar5 = 0xffffffffffffffff;
      if (SUB168(auVar2 * ZEXT816(0x40),8) == 0) {
        uVar5 = uVar6;
      }
      puVar7 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_1021e1620);
      if (puVar7 == (ulong *)0x0) {
        DAT_102313a78 = (ulong *)0x0;
        FUN_100bf2ca0(0);
        FUN_100bf2b40(0);
        FUN_100cacac0();
        FUN_100c6bd70();
        FUN_100c54b60();
        FUN_100bf4cd0(*(undefined8 *)PTR____stderrp_1021e1848);
        FUN_100bf4f80();
        FUN_100c64130(0);
        FUN_100c62e70();
        lVar9 = (long)DAT_102313a78;
        if (DAT_102313a78 != (ulong *)0x0) {
          pvVar4 = (void *)((long)DAT_102313a78 + -8);
          if (*(long *)((long)DAT_102313a78 + -8) != 0) {
            lVar8 = *(long *)((long)DAT_102313a78 + -8) << 6;
            do {
              FUN_100ab0380(lVar9 + -0x40 + lVar8);
              lVar8 = lVar8 + -0x40;
            } while (lVar8 != 0);
          }
          operator_delete__(pvVar4);
        }
        DAT_102313a78 = (ulong *)0x0;
        uVar10 = 0;
      }
      else {
        *puVar7 = uVar11;
        if (iVar3 != 0) {
          lVar9 = 0;
          do {
            FUN_100ab0360((long)puVar7 + lVar9 + 8);
            lVar9 = lVar9 + 0x40;
          } while (uVar11 * 0x40 != lVar9);
        }
        DAT_102313a78 = puVar7 + 1;
        FUN_100bf2ca0(FUN_100aaf380);
        FUN_100bf2b40(FUN_100aaf390);
        FUN_100c8bc20("default");
        FUN_100bf0260();
        FUN_100be7410();
      }
    }
    FUN_100ab03b0(DAT_102313a68);
  }
  return uVar10;
}

