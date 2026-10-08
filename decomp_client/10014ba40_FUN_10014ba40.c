
void FUN_10014ba40(QPainter *param_1,QStyleOptionViewItem *param_2,QModelIndex *param_3,long param_4
                  )

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  int extraout_EDX;
  int iVar6;
  QArrayData *local_118;
  undefined8 local_110;
  undefined8 local_108;
  QPixmap local_100 [32];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  QPixmap local_d0 [32];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  Data_conflict local_a0;
  uint local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QIcon local_80 [8];
  Data_conflict local_78;
  uint local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  Data_conflict local_58;
  uint local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar5 = *(long **)(param_4 + 0x10);
  if (plVar5 == (long *)0x0) {
    local_50 = 0x80000000;
    local_58.field7 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x90))(&local_58,plVar5,param_4,10);
    if ((local_50 & 0x3fffffff) != 0) {
      plVar5 = (long *)QApplication::style();
      iVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5,2,param_3,0);
      iVar3 = (extraout_EDX + 1) - iVar3;
      local_68 = (((*(int *)(param_3 + 0x18) + 1) - *(int *)(param_3 + 0x10)) / 2 - iVar3 / 2) +
                 *(int *)(param_3 + 0x10);
      local_64 = (((*(int *)(param_3 + 0x1c) + 1) - *(int *)(param_3 + 0x14)) / 2 - iVar3 / 2) +
                 *(int *)(param_3 + 0x14);
      local_60 = iVar3 + -1 + local_68;
      local_5c = iVar3 + -1 + local_64;
      uVar4 = QVariant::toInt((bool *)&local_58.field0);
      QItemDelegate::drawBackground(param_1,param_2,param_3);
      (**(code **)(*(long *)param_1 + 200))(param_1,param_2,param_3,&local_68,uVar4);
      goto LAB_10014be7f;
    }
  }
  plVar5 = *(long **)(param_4 + 0x10);
  if (plVar5 == (long *)0x0) {
    local_70 = 0x80000000;
    local_78.field7 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x90))(&local_78,plVar5,param_4,1);
  }
  uVar2 = local_70;
  QVariant::~QVariant((QVariant *)&local_78);
  if ((uVar2 & 0x3fffffff) == 0) {
    QItemDelegate::paint(param_1,param_2,param_3);
    goto LAB_10014be7f;
  }
  plVar5 = *(long **)(param_4 + 0x10);
  if (plVar5 == (long *)0x0) {
    local_88 = 0x80000000;
    local_90.field7 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x90))(&local_90,plVar5,param_4,1);
  }
  FUN_10014c530(local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  plVar5 = *(long **)(param_4 + 0x10);
  if (plVar5 == (long *)0x0) {
    local_98 = 0x80000000;
    local_a0.field7 = 0;
LAB_10014bda9:
    iVar3 = *(int *)(param_3 + 0x10);
    local_a4 = *(int *)(param_3 + 0x14);
    local_a8 = ((*(int *)(param_3 + 0x18) + 1) - iVar3) / 2;
    iVar6 = ((*(int *)(param_3 + 0x1c) + 1) - local_a4) / 2;
    local_b0 = iVar3 + -8 + local_a8;
    local_ac = iVar6 + -8 + local_a4;
    local_a8 = iVar3 + 7 + local_a8;
    local_a4 = iVar6 + 7 + local_a4;
    QItemDelegate::drawBackground(param_1,param_2,param_3);
    pcVar1 = *(code **)(*(long *)param_1 + 0xb8);
    local_38 = 0x1000000010;
    QIcon::pixmap(local_d0,local_80,&local_38,0,1);
    (*pcVar1)(param_1,param_2,param_3,&local_b0,local_d0);
    QPixmap::~QPixmap(local_d0);
  }
  else {
    (**(code **)(*plVar5 + 0x90))(&local_a0,plVar5,param_4,0);
    if ((local_98 & 0x3fffffff) == 0) goto LAB_10014bda9;
    local_dc = *(int *)(param_3 + 0x14);
    local_e0 = *(int *)(param_3 + 0x10) + 3;
    local_d8 = *(int *)(param_3 + 0x10) + 0x12;
    local_d4 = local_dc + 0xf;
    QItemDelegate::drawBackground(param_1,param_2,param_3);
    pcVar1 = *(code **)(*(long *)param_1 + 0xb8);
    local_40 = 0x1000000010;
    QIcon::pixmap(local_100,local_80,&local_40,0,1);
    (*pcVar1)(param_1,param_2,param_3,&local_e0,local_100);
    QPixmap::~QPixmap(local_100);
    pcVar1 = *(code **)(*(long *)param_1 + 0xb0);
    local_110 = CONCAT44(*(undefined4 *)(param_3 + 0x14),*(int *)(param_3 + 0x10) + 0x15);
    local_108 = *(undefined8 *)(param_3 + 0x18);
    QVariant::toString();
    (*pcVar1)(param_1,param_2,param_3,&local_110,&local_118);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_41 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_10014be6a;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_10014be6a:
  QVariant::~QVariant((QVariant *)&local_a0);
  QIcon::~QIcon(local_80);
LAB_10014be7f:
  QVariant::~QVariant((QVariant *)&local_58);
  return;
}

