
long FUN_1006af990(int *param_1,QString *param_2,QString *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  if (*param_1 == 2) {
    plVar6 = *(long **)(param_1 + 2);
    uVar1 = *(uint *)(plVar6 + 4);
    if (uVar1 == 0) {
      lVar11 = 0;
    }
    else {
      uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
      uVar3 = (ulong)uVar5 % (ulong)uVar1;
      plVar9 = *(long **)(plVar6[1] + uVar3 * 8);
      if (plVar9 == plVar6) {
        lVar11 = 0;
      }
      else {
        plVar12 = (long *)(plVar6[1] + uVar3 * 8);
        do {
          plVar7 = plVar6;
          plVar10 = plVar9;
          if (*(uint *)(plVar9 + 1) == uVar5) {
            cVar4 = operator==(param_2,(QString *)(plVar9 + 2));
            plVar6 = (long *)*plVar12;
            plVar7 = *(long **)(param_1 + 2);
            plVar10 = plVar6;
            if (cVar4 != '\0') break;
          }
          plVar6 = plVar7;
          plVar9 = (long *)*plVar10;
          plVar7 = plVar6;
          plVar12 = plVar10;
        } while (plVar9 != plVar6);
        if (plVar6 == plVar7) {
          lVar11 = 0;
        }
        else {
          plVar6 = (long *)FUN_1006b16c0(param_1 + 2,param_2);
          lVar2 = *(long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x80) + 0x10);
          lVar11 = 0;
          if (lVar2 != 0) {
            do {
              while (lVar8 = lVar2, cVar4 = operator<((QString *)(lVar8 + 0x18),param_3),
                    cVar4 == '\0') {
                lVar2 = *(long *)(lVar8 + 8);
                lVar11 = lVar8;
                if (*(long *)(lVar8 + 8) == 0) goto LAB_1006afad3;
              }
              lVar2 = *(long *)(lVar8 + 0x10);
            } while (*(long *)(lVar8 + 0x10) != 0);
            lVar8 = lVar11;
            if (lVar11 == 0) {
              return 0;
            }
LAB_1006afad3:
            cVar4 = operator<(param_3,(QString *)(lVar8 + 0x18));
            if (cVar4 == '\0') {
              lVar11 = 0;
              if (*plVar6 != 0) {
                lVar11 = *(long *)(*plVar6 + 0x10);
              }
              FUN_1006b1a80(lVar11 + 0x80,param_3);
              FUN_1006af8d0();
              lVar11 = 1;
            }
            else {
              lVar11 = 0;
            }
          }
        }
      }
    }
  }
  else {
    lVar11 = 0;
    FUN_1008e3970("","KeyValueDataParser",0,"Error: can\'t remove line with not read/write mode");
  }
  return lVar11;
}

