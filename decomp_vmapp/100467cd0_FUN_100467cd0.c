
undefined4 FUN_100467cd0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  bool bVar10;
  undefined4 uVar11;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(ushort *)(param_2 + 0x14) < 0xc) {
    return 0xf0000002;
  }
  piVar6 = (int *)FUN_1002a6010(param_2);
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000002;
  }
  lVar7 = FUN_1002a6120(param_2,0,0);
  if (lVar7 == 0) {
    return 0xf0000002;
  }
  pvVar8 = operator_new__((ulong)(uint)piVar6[2]);
  plVar9 = operator_new(0x18);
  *(undefined4 *)(plVar9 + 1) = 1;
  plVar9[2] = (long)pvVar8;
  *plVar9 = (long)&PTR_FUN_100bef320;
  iVar5 = FUN_1002a5990(lVar7,0,pvVar8,piVar6[2]);
  uVar11 = 0xf000001c;
  if (iVar5 != piVar6[2]) goto LAB_100467f26;
  QMutex::lock();
  bVar10 = true;
  uVar11 = 0xf000001c;
  if (*(char *)(param_1 + 0x58) != '\0') {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    if (*piVar6 == 4) {
      if (*(int *)(*(long *)(param_1 + 0x60) + 0xc) != *(int *)(*(long *)(param_1 + 0x60) + 8)) {
        FUN_100058900(&local_48,param_1 + 0x60);
        QString::operator=(&local_40,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100467e1b;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
        goto LAB_100467e1b;
      }
      uVar11 = 0xf000001c;
    }
    else {
LAB_100467e1b:
      QMutex::unlock();
      iVar5 = *piVar6;
      if (iVar5 == 2) {
        QMutex::lock();
        QString::operator=(&local_40,(QString *)(param_1 + 0x70));
        QMutex::unlock();
        iVar5 = *piVar6;
      }
      lVar7 = plVar9[2];
      iVar2 = piVar6[2];
      local_50 = (QArrayData *)local_40.field0_0x0;
      iVar3 = *(int *)local_40.field0_0x0;
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      cVar4 = FUN_100466fb0(iVar3 + 1U,iVar5,lVar7,iVar2,&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100467ec9;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100467ec9:
      bVar10 = false;
      uVar11 = 0xf000001c;
      if (cVar4 != '\0') {
        uVar11 = 0;
      }
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100467f0a;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100467f0a:
  if (bVar10) {
    QMutex::unlock();
  }
LAB_100467f26:
  LOCK();
  plVar1 = plVar9 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 == 1) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return uVar11;
}

