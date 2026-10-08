
void FUN_100530b90(undefined8 param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  QArrayData *local_70;
  QVariant local_68;
  QString local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QAbstractItemView::model();
  plVar5 = (long *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13f8);
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0;
  local_48 = 0;
  iVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,&local_50);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      plVar6 = (long *)QStandardItemModel::item((int)plVar5,iVar2);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(&local_68,plVar6,0x101);
        QVariant::toString();
        cVar1 = operator==(&local_58,param_2);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100530c7e;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100530c7e:
        QVariant::~QVariant(&local_68);
        if (cVar1 != '\0') {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      local_50 = 0xffffffff;
      local_4c = 0xffffffff;
      local_40 = 0;
      local_48 = 0;
      iVar3 = (**(code **)(*plVar5 + 0x78))(plVar5,&local_50);
    } while (iVar2 < iVar3);
  }
  uVar7 = FUN_100152280();
  lVar8 = FUN_100154930(uVar7,param_2 + 1);
  if (((lVar8 != 0) && (cVar1 = FUN_10018c770(lVar8), cVar1 == '\0')) &&
     (iVar2 = FUN_10018bce0(lVar8), iVar2 == 0)) {
    uVar4 = FUN_10018f890(lVar8);
    FUN_10018d830(&local_70,lVar8);
    FUN_100530180(4,plVar5,param_2,uVar4,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  return;
}

