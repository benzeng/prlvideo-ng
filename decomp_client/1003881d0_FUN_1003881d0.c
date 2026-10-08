
void FUN_1003881d0(long param_1,byte param_2,char param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = *(long *)(param_1 + 0x40);
  iVar11 = *(int *)(lVar2 + 0xc);
  iVar1 = *(int *)(lVar2 + 8);
  lVar10 = (long)iVar1;
  iVar9 = iVar11 - iVar1;
  if (iVar9 == 0 || iVar11 < iVar1) {
    return;
  }
  lVar5 = lVar2 + 8 + lVar10 * 8;
  lVar8 = (long)iVar11 * 8 + lVar10 * -8;
  do {
    if (lVar8 == 0) {
      return;
    }
    lVar7 = **(long **)(lVar5 + 8);
    lVar12 = 0;
    if ((lVar7 != 0) && (lVar12 = 0, *(int *)(lVar7 + 4) != 0)) {
      lVar12 = (*(long **)(lVar5 + 8))[1];
    }
    lVar7 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      lVar7 = *(long *)(param_1 + 0x50);
    }
    lVar5 = lVar5 + 8;
    lVar8 = lVar8 + -8;
  } while (lVar12 != lVar7);
  iVar11 = (int)((ulong)(lVar5 - (lVar2 + 0x10 + lVar10 * 8)) >> 3);
  if (iVar11 < 0) {
    return;
  }
  iVar11 = iVar11 + -1 + (uint)param_2 * 2;
  if (param_3 != '\0') {
    iVar11 = (iVar11 + iVar9) % iVar9;
  }
  uVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220f530);
  plVar3 = *(long **)(param_1 + 0x10);
  pcVar4 = *(code **)(*plVar3 + 0x90);
  local_80 = 0xffffffff;
  local_7c = 0xffffffff;
  local_70 = 0;
  local_78 = 0;
  (**(code **)(*plVar3 + 0x60))(local_68,plVar3,iVar11,0,&local_80);
  (*pcVar4)(&local_50,plVar3,local_68,0x100);
  QVariant::toString();
  FUN_10038aad0(uVar6,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100388357;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100388357:
  QVariant::~QVariant(&local_50);
  return;
}

