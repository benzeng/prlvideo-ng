
long * FUN_1003e6af0(long *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (DAT_102273f08 == 0) {
    DAT_102273f08 = FUN_1003e6cb0("QList<int >",0xffffffffffffffff,1);
  }
  uVar4 = DAT_102273f08;
  uVar6 = QVariant::userType();
  puVar3 = PTR_shared_null_1021e15e8;
  if (uVar4 == uVar6) {
    plVar7 = (long *)QVariant::constData();
    piVar1 = (int *)*plVar7;
    *param_1 = (long)piVar1;
    if (*piVar1 != -1) {
      if (*piVar1 == 0) {
        QListData::detach((int)param_1);
        lVar2 = *param_1;
        lVar8 = (long)*(int *)(lVar2 + 8);
        lVar9 = *plVar7;
        if ((lVar9 + (long)*(int *)(lVar9 + 8) * 8 != lVar2 + lVar8 * 8) &&
           (lVar10 = *(int *)(lVar2 + 0xc) - lVar8, lVar10 != 0 && lVar8 <= *(int *)(lVar2 + 0xc)))
        {
          _memcpy((void *)(lVar2 + 0x10 + lVar8 * 8),
                  (void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8),lVar10 * 8);
        }
      }
      else {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
    }
  }
  else {
    cVar5 = QVariant::convert(param_2,(void *)(ulong)uVar4);
    if (cVar5 == '\0') {
      *param_1 = (long)puVar3;
    }
    else {
      *param_1 = (long)puVar3;
      if (*(int *)puVar3 != -1) {
        if (*(int *)puVar3 == 0) {
          QListData::detach((int)param_1);
          lVar2 = *param_1;
          lVar9 = (long)*(int *)(lVar2 + 8);
          if ((puVar3 + (long)*(int *)(puVar3 + 8) * 8 != (undefined *)(lVar2 + lVar9 * 8)) &&
             (lVar8 = *(int *)(lVar2 + 0xc) - lVar9, lVar8 != 0 && lVar9 <= *(int *)(lVar2 + 0xc)))
          {
            _memcpy((void *)(lVar2 + 0x10 + lVar9 * 8),
                    puVar3 + (long)*(int *)(puVar3 + 8) * 8 + 0x10,lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)puVar3 = *(int *)puVar3 + 1;
          UNLOCK();
        }
      }
    }
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (*(int *)puVar3 != 0) {
          return param_1;
        }
      }
      QListData::dispose((Data *)puVar3);
    }
  }
  return param_1;
}

