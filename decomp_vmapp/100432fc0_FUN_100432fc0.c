
void FUN_100432fc0(long param_1,QString *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  QMutex::lock();
  plVar7 = *(long **)(param_1 + 0x20);
  uVar1 = *(uint *)(plVar7 + 4);
  if (uVar1 != 0) {
    uVar6 = qHash(param_2,*(uint *)((long)plVar7 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar1;
    plVar10 = *(long **)(plVar7[1] + uVar4 * 8);
    if (plVar10 != plVar7) {
      plVar13 = (long *)(plVar7[1] + uVar4 * 8);
      do {
        plVar11 = plVar10;
        plVar12 = plVar7;
        if (*(uint *)(plVar10 + 1) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(plVar10 + 2));
          plVar7 = (long *)*plVar13;
          plVar12 = *(long **)(param_1 + 0x20);
          plVar11 = plVar7;
          if (cVar5 != '\0') break;
        }
        plVar7 = plVar12;
        plVar10 = (long *)*plVar11;
        plVar12 = plVar7;
        plVar13 = plVar11;
      } while (plVar10 != plVar7);
      if (plVar7 != plVar12) {
        lVar8 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        lVar9 = (ulong)param_3 * 0x38;
        if ((*(int *)(lVar8 + 0x40 + lVar9) <= *(int *)(lVar8 + 0x48 + lVar9)) &&
           (*(int *)(lVar8 + 0x44 + lVar9) <= *(int *)(lVar8 + 0x4c + lVar9))) {
          iVar2 = *(int *)(lVar8 + 0x30 + lVar9);
          if ((iVar2 <= *(int *)(lVar8 + 0x38 + lVar9)) &&
             (iVar3 = *(int *)(lVar8 + 0x3c + lVar9), *(int *)(lVar8 + 0x34 + lVar9) <= iVar3)) {
            *(int *)(lVar8 + 0x30 + lVar9) = iVar2;
            *(int *)(lVar8 + 0x34 + lVar9) = iVar3 + 1;
          }
        }
        FUN_100436530(lVar8 + 0x18 + lVar9);
      }
    }
  }
  QMutex::unlock();
  return;
}

