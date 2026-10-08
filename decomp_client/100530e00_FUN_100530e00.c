
void FUN_100530e00(long param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  QObject *pQVar13;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  QVariant local_68;
  QString local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QAbstractItemView::model();
  plVar7 = (long *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13f8);
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0;
  local_48 = 0;
  iVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_50);
  if (iVar4 < 1) {
    return;
  }
  iVar4 = 0;
  do {
    plVar8 = (long *)QStandardItemModel::item((int)plVar7,iVar4);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(&local_68,plVar8,0x101);
      QVariant::toString();
      cVar3 = operator==(&local_58,param_2);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100530eee;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100530eee:
      QVariant::~QVariant(&local_68);
      if (cVar3 != '\0') {
        plVar8 = *(long **)(param_1 + 0x20);
        pQVar13 = (QObject *)0x0;
        if (*(int *)((long)plVar8 + 0x14) == 0) goto LAB_100530fe1;
        uVar1 = *(uint *)(plVar8 + 4);
        pQVar13 = (QObject *)0x0;
        if (uVar1 == 0) goto LAB_100530fe1;
        uVar6 = qHash(param_2,*(uint *)((long)plVar8 + 0x24));
        uVar2 = (ulong)uVar6 % (ulong)uVar1;
        plVar9 = *(long **)(plVar8[1] + uVar2 * 8);
        pQVar13 = (QObject *)0x0;
        if (plVar9 == plVar8) goto LAB_100530fe1;
        plVar12 = (long *)(plVar8[1] + uVar2 * 8);
        break;
      }
    }
    iVar4 = iVar4 + 1;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_40 = 0;
    local_48 = 0;
    iVar5 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_50);
    if (iVar5 <= iVar4) {
      return;
    }
  } while( true );
  do {
    plVar10 = plVar9;
    plVar11 = plVar8;
    if (*(uint *)(plVar9 + 1) == uVar6) {
      cVar3 = operator==(param_2,(QString *)(plVar9 + 2));
      plVar8 = (long *)*plVar12;
      plVar11 = *(long **)(param_1 + 0x20);
      plVar10 = plVar8;
      if (cVar3 != '\0') break;
    }
    plVar8 = plVar11;
    plVar9 = (long *)*plVar10;
    plVar11 = plVar8;
    plVar12 = plVar10;
  } while (plVar9 != plVar8);
  pQVar13 = (QObject *)0x0;
  if (plVar8 != plVar11) {
    pQVar13 = (QObject *)plVar8[3];
  }
LAB_100530fe1:
  CWidgetMapper::removeMapping(*(QWidget **)(*(long *)(param_1 + 0x10) + 0x38));
  QObject::disconnect(pQVar13,"2dataChanged()",*(QObject **)(*(long *)(param_1 + 0x10) + 0x38),
                      "1onPreprocessedValueChanged()");
  local_80 = 0xffffffff;
  local_7c = 0xffffffff;
  local_70 = 0;
  local_78 = 0;
  (**(code **)(*plVar7 + 0x100))(plVar7,iVar4,1,&local_80);
  QStackedWidget::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
  if (pQVar13 != (QObject *)0x0) {
    (**(code **)(*(long *)pQVar13 + 0x20))(pQVar13);
  }
  FUN_100533230((undefined8 *)(param_1 + 0x20),param_2);
  FUN_1005310f0(param_1);
  return;
}

