
bool FUN_1007054c0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  QString local_40;
  undefined1 local_32;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_1006946e0(&local_40);
  plVar6 = *(long **)(lVar2 + 0x30);
  uVar1 = *(uint *)(plVar6 + 4);
  plVar9 = plVar6;
  if (uVar1 != 0) {
    uVar5 = qHash(&local_40,*(uint *)((long)plVar6 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar1;
    plVar7 = *(long **)(plVar6[1] + uVar3 * 8);
    if (plVar7 != plVar6) {
      plVar10 = (long *)(plVar6[1] + uVar3 * 8);
      do {
        plVar8 = plVar7;
        plVar9 = plVar6;
        if (*(uint *)(plVar7 + 1) == uVar5) {
          cVar4 = operator==(&local_40,(QString *)(plVar7 + 2));
          plVar6 = (long *)*plVar10;
          plVar9 = *(long **)(lVar2 + 0x30);
          plVar8 = plVar6;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar9;
        plVar7 = (long *)*plVar8;
        plVar9 = plVar6;
        plVar10 = plVar8;
      } while (plVar7 != plVar6);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) goto LAB_10070557a;
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10070557a:
  return plVar6 != plVar9;
}

