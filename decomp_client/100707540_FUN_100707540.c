
long FUN_100707540(long param_1,long *param_2,QString *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Data *pDVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  QKeySequence *this;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  Data *local_40;
  undefined1 local_32;
  
  plVar7 = (long *)*param_2;
  if ((*(int *)((long)plVar7 + 0x14) != 0) && (uVar1 = *(uint *)(plVar7 + 4), uVar1 != 0)) {
    uVar6 = qHash(param_3,*(uint *)((long)plVar7 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar8 = *(long **)(plVar7[1] + uVar3 * 8);
    if (plVar8 != plVar7) {
      plVar10 = (long *)(plVar7[1] + uVar3 * 8);
      do {
        plVar9 = plVar8;
        plVar12 = plVar7;
        if (*(uint *)(plVar8 + 1) == uVar6) {
          cVar5 = operator==(param_3,(QString *)(plVar8 + 2));
          plVar7 = (long *)*plVar10;
          plVar9 = plVar7;
          plVar12 = (long *)*param_2;
          if (cVar5 != '\0') break;
        }
        plVar7 = plVar12;
        plVar8 = (long *)*plVar9;
        plVar10 = plVar9;
        plVar12 = plVar7;
      } while (plVar8 != plVar7);
      if (plVar7 != plVar12) {
        FUN_1005607f0(param_1,plVar7 + 3);
        *(int *)(param_1 + 8) = (int)plVar7[4];
        return param_1;
      }
    }
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(param_1,&local_40,2);
  pDVar4 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_32 = 0;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      this = (QKeySequence *)(local_40 + (long)iVar2 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return param_1;
}

