
/* WARNING: Removing unreachable block (ram,0x0001007eaa87) */

undefined1 FUN_1007eaa60(void)

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
    if ((void *)0x1 < DAT_1011c04d0) goto LAB_1007eaad0;
  } while (DAT_1011c04d0 != (void *)0x0);
  LOCK();
  DAT_1011c04d0 = (void *)0x1;
  UNLOCK();
  pvVar4 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar4 == (void *)0x0) {
    DAT_1011c04d0 = (void *)0x0;
    uVar10 = 0;
  }
  else {
    FUN_1007eaeb0(pvVar4);
    DAT_1011c04d0 = pvVar4;
LAB_1007eaad0:
    FUN_1007eaef0(DAT_1011c04d0);
    iVar3 = DAT_1011c04d8 + 1;
    uVar10 = 1;
    bVar1 = DAT_1011c04d8 < 1;
    DAT_1011c04d8 = iVar3;
    if (bVar1) {
      iVar3 = FUN_10081cdd0();
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
      puVar7 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar7 == (ulong *)0x0) {
        DAT_1011c04e0 = (ulong *)0x0;
        FUN_10081d530(0);
        FUN_10081d3d0(0);
        FUN_1008d1540();
        FUN_100890b70();
        FUN_100879960();
        FUN_10081f560(*(undefined8 *)PTR____stderrp_100ba2328);
        FUN_10081f810();
        FUN_100888f30(0);
        FUN_100887c70();
        lVar9 = (long)DAT_1011c04e0;
        if (DAT_1011c04e0 != (ulong *)0x0) {
          pvVar4 = (void *)((long)DAT_1011c04e0 + -8);
          if (*(long *)((long)DAT_1011c04e0 + -8) != 0) {
            lVar8 = *(long *)((long)DAT_1011c04e0 + -8) << 6;
            do {
              FUN_1007eaed0(lVar9 + -0x40 + lVar8);
              lVar8 = lVar8 + -0x40;
            } while (lVar8 != 0);
          }
          operator_delete__(pvVar4);
        }
        DAT_1011c04e0 = (ulong *)0x0;
        uVar10 = 0;
      }
      else {
        *puVar7 = uVar11;
        if (iVar3 != 0) {
          lVar9 = 0;
          do {
            FUN_1007eaeb0((long)puVar7 + lVar9 + 8);
            lVar9 = lVar9 + 0x40;
          } while (uVar11 * 0x40 != lVar9);
        }
        DAT_1011c04e0 = puVar7 + 1;
        FUN_10081d530(FUN_1007ead10);
        FUN_10081d3d0(FUN_1007ead20);
        FUN_1008b06a0("default");
        FUN_10081aaf0();
        FUN_100811ca0();
      }
    }
    FUN_1007eaf00(DAT_1011c04d0);
  }
  return uVar10;
}

