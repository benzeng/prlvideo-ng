
void FUN_100532430(undefined8 param_1,uint param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  Data_conflict local_e0;
  undefined4 local_d8;
  QString local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 local_31;
  
  local_50 = 0xffffffffffffffff;
  local_40 = (long *)0x0;
  local_48 = 0;
  if (param_2 < 4) {
    plVar4 = (long *)QAbstractItemView::model();
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_70 = 0;
    local_78 = 0;
    (**(code **)(*plVar4 + 0x60))(&local_68,plVar4,param_2,0,&local_80);
    local_40 = local_58;
    local_50 = local_68;
    local_48 = local_60;
  }
  else if (param_2 == 4) {
    if (*(int *)(param_3->field0_0x0 + 4) == 0) {
      return;
    }
    plVar4 = (long *)QAbstractItemView::model();
    local_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_88 = 0;
    local_90 = 0;
    iVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,&local_98);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        plVar4 = (long *)QAbstractItemView::model();
        local_c8 = 0xffffffff;
        local_c4 = 0xffffffff;
        local_b8 = 0;
        local_c0 = 0;
        (**(code **)(*plVar4 + 0x60))(&local_b0,plVar4,iVar2,0,&local_c8);
        if (local_a0 == (long *)0x0) {
          local_d8 = 0x80000000;
          local_e0.field7 = 0;
        }
        else {
          (**(code **)(*local_a0 + 0x90))(&local_e0,local_a0,&local_b0,0x101);
        }
        QVariant::toString();
        cVar1 = operator==(&local_d0,param_3);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100532664;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_100532664:
        QVariant::~QVariant((QVariant *)&local_e0);
        if (cVar1 != '\0') {
          local_40 = local_a0;
          local_50 = local_b0;
          local_48 = local_a8;
          break;
        }
        iVar2 = iVar2 + 1;
        plVar4 = (long *)QAbstractItemView::model();
        local_98 = 0xffffffff;
        local_94 = 0xffffffff;
        local_88 = 0;
        local_90 = 0;
        iVar3 = (**(code **)(*plVar4 + 0x78))(plVar4,&local_98);
      } while (iVar2 < iVar3);
    }
  }
  if ((-1 < (int)((uint)((ulong)local_50 >> 0x20) | (uint)local_50)) && (local_40 != (long *)0x0)) {
    QAbstractItemView::selectionModel();
    QItemSelectionModel::clearSelection();
    plVar4 = (long *)QAbstractItemView::selectionModel();
    local_f8 = 0xffffffff;
    local_f4 = 0xffffffff;
    local_e8 = 0;
    local_f0 = 0;
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_f8,0x22);
    plVar4 = (long *)QAbstractItemView::selectionModel();
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_50,0x22);
  }
  return;
}

