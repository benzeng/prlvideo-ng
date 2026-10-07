
undefined1 FUN_1007c1250(long param_1,long param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  QString *this;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  }
  if (lVar5 == param_2) {
    return 1;
  }
  QMutex::lock();
  plVar6 = *(long **)(param_1 + 0xa0);
  uVar1 = *(uint *)(plVar6 + 4);
  if (uVar1 != 0) {
    uVar4 = qHash(param_3,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar9 = *(long **)(plVar6[1] + uVar2 * 8);
    if (plVar9 != plVar6) {
      plVar11 = (long *)(plVar6[1] + uVar2 * 8);
      do {
        plVar8 = plVar6;
        plVar10 = plVar9;
        if (*(uint *)(plVar9 + 1) == uVar4) {
          cVar3 = operator==(param_3,(QString *)(plVar9 + 2));
          plVar6 = (long *)*plVar11;
          plVar8 = *(long **)(param_1 + 0xa0);
          plVar10 = plVar6;
          if (cVar3 != '\0') break;
        }
        plVar6 = plVar8;
        plVar9 = (long *)*plVar10;
        plVar8 = plVar6;
        plVar11 = plVar10;
      } while (plVar9 != plVar6);
      if (plVar6 != plVar8) {
        uVar7 = 0;
        goto LAB_1007c131f;
      }
    }
  }
  this = (QString *)FUN_100479340((undefined8 *)(param_1 + 0xa0),param_3);
  uVar7 = 1;
  QString::operator=(this,param_3);
LAB_1007c131f:
  QMutex::unlock();
  return uVar7;
}

