
QPixmap * FUN_1007a5210(QPixmap *param_1,long param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  plVar5 = *(long **)(param_2 + 0xc0);
  puVar9 = (undefined8 *)(param_2 + 0xc0);
  uVar1 = *(uint *)(plVar5 + 4);
  if (uVar1 != 0) {
    uVar4 = qHash(param_3,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar7 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar7 != plVar5) {
      plVar10 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar6 = plVar5;
        plVar8 = plVar7;
        if (*(uint *)(plVar7 + 1) == uVar4) {
          cVar3 = operator==(param_3,(QString *)(plVar7 + 2));
          plVar5 = (long *)*plVar10;
          plVar6 = (long *)*puVar9;
          plVar8 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar6;
        plVar7 = (long *)*plVar8;
        plVar6 = plVar5;
        plVar10 = plVar8;
      } while (plVar7 != plVar5);
      if (plVar5 != plVar6) {
        if (*(int *)((long)plVar6 + 0x14) != 0) {
          uVar1 = *(uint *)(plVar6 + 4);
          plVar5 = plVar6;
          if (uVar1 != 0) {
            uVar4 = qHash(param_3,*(uint *)((long)plVar6 + 0x24));
            uVar2 = (ulong)uVar4 % (ulong)uVar1;
            plVar7 = *(long **)(plVar6[1] + uVar2 * 8);
            if (plVar7 != plVar6) {
              plVar10 = (long *)(plVar6[1] + uVar2 * 8);
              do {
                plVar5 = plVar6;
                plVar8 = plVar7;
                if (*(uint *)(plVar7 + 1) == uVar4) {
                  cVar3 = operator==(param_3,(QString *)(plVar7 + 2));
                  plVar6 = (long *)*plVar10;
                  plVar5 = (long *)*puVar9;
                  plVar8 = plVar6;
                  if (cVar3 != '\0') break;
                }
                plVar6 = plVar5;
                plVar7 = (long *)*plVar8;
                plVar5 = plVar6;
                plVar10 = plVar8;
              } while (plVar7 != plVar6);
            }
          }
          if (plVar6 != plVar5) {
            QPixmap::QPixmap(param_1,(QPixmap *)(plVar6 + 3));
            return param_1;
          }
        }
        QPixmap::QPixmap(param_1);
        return param_1;
      }
    }
  }
  QPixmap::QPixmap(param_1,param_3,0,0);
  FUN_1007a69f0(puVar9,param_3,param_1);
  return param_1;
}

