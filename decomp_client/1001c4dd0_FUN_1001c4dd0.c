
bool FUN_1001c4dd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar6 = FUN_1001d50a0();
  cVar3 = FUN_1001d50e0(uVar6);
  if (cVar3 == '\0') {
    bVar12 = false;
    goto LAB_1001c4f45;
  }
  uVar6 = FUN_100060bb0();
  lVar7 = FUN_1000609c0(uVar6);
  if (lVar7 == 0) {
    bVar12 = false;
    goto LAB_1001c4f45;
  }
  QObject::property((char *)&local_58);
  QVariant::toString();
  QString::operator=(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c4e77;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001c4e77:
  QVariant::~QVariant(&local_58);
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    bVar12 = false;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x10);
    uVar1 = *(uint *)(plVar8 + 4);
    if (uVar1 == 0) {
      bVar12 = false;
    }
    else {
      uVar4 = qHash(&local_40,*(uint *)((long)plVar8 + 0x24));
      uVar2 = (ulong)uVar4 % (ulong)uVar1;
      plVar10 = *(long **)(plVar8[1] + uVar2 * 8);
      if (plVar10 == plVar8) {
        bVar12 = false;
      }
      else {
        plVar9 = (long *)(plVar8[1] + uVar2 * 8);
        do {
          plVar11 = plVar8;
          if (*(uint *)(plVar10 + 1) == uVar4) {
            cVar3 = operator==(&local_40,(QString *)(plVar10 + 2));
            plVar8 = (long *)*plVar9;
            plVar10 = plVar8;
            plVar11 = *(long **)(param_1 + 0x10);
            if (cVar3 != '\0') break;
          }
          plVar8 = plVar11;
          plVar9 = plVar10;
          plVar10 = (long *)*plVar9;
          plVar11 = plVar8;
        } while (plVar10 != plVar8);
        if (plVar8 == plVar11) {
          bVar12 = false;
        }
        else {
          uVar6 = FUN_100152280();
          lVar7 = FUN_1001548f0(uVar6,&local_40);
          if (lVar7 == 0) {
            bVar12 = false;
          }
          else {
            iVar5 = FUN_10018a9d0(lVar7);
            bVar12 = iVar5 == 0x30000004;
          }
        }
      }
    }
  }
LAB_1001c4f45:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return bVar12;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return bVar12;
}

