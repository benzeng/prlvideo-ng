
undefined1 FUN_100433250(long param_1,QString *param_2,uint param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  undefined1 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  QMutex::lock();
  plVar7 = *(long **)(param_1 + 0x20);
  uVar2 = *(uint *)(plVar7 + 4);
  if (uVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar6 = qHash(param_2,*(uint *)((long)plVar7 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    plVar11 = *(long **)(plVar7[1] + uVar4 * 8);
    if (plVar11 != plVar7) {
      plVar13 = (long *)(plVar7[1] + uVar4 * 8);
      do {
        plVar12 = plVar11;
        plVar14 = plVar7;
        if (*(uint *)(plVar11 + 1) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(plVar11 + 2));
          plVar7 = (long *)*plVar13;
          plVar14 = *(long **)(param_1 + 0x20);
          plVar12 = plVar7;
          if (cVar5 != '\0') break;
        }
        plVar7 = plVar14;
        plVar11 = (long *)*plVar12;
        plVar13 = plVar12;
        plVar14 = plVar7;
      } while (plVar11 != plVar7);
      if (plVar7 != plVar14) {
        lVar8 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        lVar3 = *(long *)(lVar8 + 0x18 + (ulong)param_3 * 0x38);
        if (*(int *)(lVar3 + 4) < 1) {
          uVar10 = 0;
        }
        else {
          puVar1 = (undefined8 *)(lVar8 + 0x18 + (ulong)param_3 * 0x38);
          FUN_100438760(puVar1,lVar3 + *(long *)(lVar3 + 0x10),lVar3 + 8 + *(long *)(lVar3 + 0x10));
          puVar9 = (uint *)*puVar1;
          if (puVar9[1] == 0) {
            uVar10 = 0;
          }
          else {
            if (1 < *puVar9) {
              if ((puVar9[2] & 0x7fffffff) == 0) {
                puVar9 = (uint *)QArrayData::allocate(8,8,0,2);
                *puVar1 = puVar9;
              }
              else {
                FUN_1004384f0(puVar1,puVar9[1],puVar9[2] & 0x7fffffff,0);
                puVar9 = (uint *)*puVar1;
              }
            }
            lVar3 = *(long *)((long)puVar9 + *(long *)(puVar9 + 4));
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            plVar7 = (long *)*param_4;
            *param_4 = lVar3;
            uVar10 = 1;
            if (plVar7 != (long *)0x0) {
              LOCK();
              plVar11 = plVar7 + 1;
              lVar3 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)(*plVar7 + 0x10))();
              }
            }
          }
        }
        goto LAB_1004333c3;
      }
    }
    uVar10 = 0;
  }
LAB_1004333c3:
  QMutex::unlock();
  return uVar10;
}

