
undefined1 FUN_100432e30(long param_1,QString *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  QMutex::lock();
  plVar8 = *(long **)(param_1 + 0x20);
  uVar3 = *(uint *)(plVar8 + 4);
  if (uVar3 != 0) {
    uVar7 = qHash(param_2,*(uint *)((long)plVar8 + 0x24));
    uVar5 = (ulong)uVar7 % (ulong)uVar3;
    plVar12 = *(long **)(plVar8[1] + uVar5 * 8);
    if (plVar12 != plVar8) {
      plVar15 = (long *)(plVar8[1] + uVar5 * 8);
      do {
        plVar13 = plVar12;
        plVar14 = plVar8;
        if (*(uint *)(plVar12 + 1) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(plVar12 + 2));
          plVar8 = (long *)*plVar15;
          plVar14 = *(long **)(param_1 + 0x20);
          plVar13 = plVar8;
          if (cVar6 != '\0') break;
        }
        plVar8 = plVar14;
        plVar12 = (long *)*plVar13;
        plVar14 = plVar8;
        plVar15 = plVar13;
      } while (plVar12 != plVar8);
      if (plVar8 != plVar14) {
        lVar9 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        lVar10 = (ulong)param_3 * 0x38;
        if ((((*(int *)(*(long *)(lVar9 + 0x18 + lVar10) + 4) == 0) &&
             (*(int *)(lVar9 + 0x40 + lVar10) <= *(int *)(lVar9 + 0x48 + lVar10))) &&
            (*(int *)(lVar9 + 0x44 + lVar10) <= *(int *)(lVar9 + 0x4c + lVar10))) &&
           (((*(int *)(lVar9 + 0x20 + lVar10) <= *(int *)(lVar9 + 0x28 + lVar10) &&
             (*(int *)(lVar9 + 0x24 + lVar10) <= *(int *)(lVar9 + 0x2c + lVar10))) &&
            ((*(int *)(lVar9 + 0x38 + lVar10) < *(int *)(lVar9 + 0x30 + lVar10) ||
             (*(int *)(lVar9 + 0x3c + lVar10) < *(int *)(lVar9 + 0x34 + lVar10))))))) {
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar10);
          puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar10);
          uVar4 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar4;
          *(undefined4 *)(lVar9 + 0x20 + lVar10) = 0;
          *(undefined4 *)(lVar9 + 0x24 + lVar10) = 0;
          *(undefined4 *)(lVar9 + 0x28 + lVar10) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0x2c + lVar10) = 0xffffffff;
          uVar11 = 1;
          goto LAB_100432f7c;
        }
      }
    }
  }
  uVar11 = 0;
LAB_100432f7c:
  QMutex::unlock();
  return uVar11;
}

