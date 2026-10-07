
void FUN_100432bf0(long param_1,QString *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

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
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  QArrayData *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  plVar8 = *(long **)(param_1 + 0x20);
  uVar3 = *(uint *)(plVar8 + 4);
  if (uVar3 != 0) {
    uVar7 = qHash(param_2,*(uint *)((long)plVar8 + 0x24));
    uVar5 = (ulong)uVar7 % (ulong)uVar3;
    plVar10 = *(long **)(plVar8[1] + uVar5 * 8);
    if (plVar10 != plVar8) {
      plVar14 = (long *)(plVar8[1] + uVar5 * 8);
      do {
        plVar11 = plVar10;
        plVar12 = plVar8;
        if (*(uint *)(plVar10 + 1) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(plVar10 + 2));
          plVar8 = (long *)*plVar14;
          plVar12 = *(long **)(param_1 + 0x20);
          plVar11 = plVar8;
          if (cVar6 != '\0') break;
        }
        plVar8 = plVar12;
        plVar10 = (long *)*plVar11;
        plVar12 = plVar8;
        plVar14 = plVar11;
      } while (plVar10 != plVar8);
      if (plVar8 != plVar12) {
        lVar9 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        lVar13 = (ulong)param_3 * 0x38;
        plVar8 = (long *)(lVar9 + 0x18 + lVar13);
        cVar6 = FUN_100431570(plVar8,param_4,param_5);
        if (((((cVar6 != '\0') && (*(int *)(*plVar8 + 4) == 0)) &&
             (*(int *)(lVar9 + 0x40 + lVar13) <= *(int *)(lVar9 + 0x48 + lVar13))) &&
            ((*(int *)(lVar9 + 0x44 + lVar13) <= *(int *)(lVar9 + 0x4c + lVar13) &&
             (*(int *)(lVar9 + 0x20 + lVar13) <= *(int *)(lVar9 + 0x28 + lVar13))))) &&
           ((*(int *)(lVar9 + 0x24 + lVar13) <= *(int *)(lVar9 + 0x2c + lVar13) &&
            ((*(int *)(lVar9 + 0x38 + lVar13) < *(int *)(lVar9 + 0x30 + lVar13) ||
             (*(int *)(lVar9 + 0x3c + lVar13) < *(int *)(lVar9 + 0x34 + lVar13))))))) {
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
          puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar13);
          uVar4 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar4;
          *(undefined4 *)(lVar9 + 0x20 + lVar13) = 0;
          *(undefined4 *)(lVar9 + 0x24 + lVar13) = 0;
          *(undefined4 *)(lVar9 + 0x28 + lVar13) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0x2c + lVar13) = 0xffffffff;
          local_40 = (QArrayData *)param_2->field0_0x0;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_33 = *(int *)local_40 != 0;
            UNLOCK();
          }
          FUN_100439860(param_1,&local_40,param_3);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              UNLOCK();
              if (*(int *)local_40 != 0) {
                return;
              }
              local_32 = 0;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
      }
    }
  }
  return;
}

