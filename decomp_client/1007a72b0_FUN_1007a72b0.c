
void FUN_1007a72b0(QSize *param_1)

{
  QSize QVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_RDX;
  int iVar6;
  long *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  iVar2 = (**(code **)(*(long *)param_1[7] + 0x70))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar3 = (**(code **)(*(long *)param_1[7] + 0x78))();
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          local_40 = 0;
          iVar3 = (**(code **)(*(long *)param_1[7] + 0x68))(param_1[7],&local_40,iVar2,iVar6);
          if (iVar3 == 4) {
            plVar4 = operator_new(0x170);
            FUN_1007a2e20(plVar4,local_40,param_1);
            local_48 = plVar4;
            QWidget::setAttribute(plVar4,2,1);
            QWidget::setAttribute(plVar4,0x33,1);
            QGridLayout::addWidget(param_1[6],plVar4,iVar2,iVar6,0);
            (**(code **)(*plVar4 + 0x68))(plVar4,iVar6 != 0,extraout_RDX,iVar6 != 0);
            if (iVar6 == 1) {
              lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4);
              *(undefined4 *)(lVar5 + 8) = 3;
            }
            FUN_1007a8e60(param_1 + 0xe,&local_48);
          }
          iVar6 = iVar6 + 1;
          iVar3 = (**(code **)(*(long *)param_1[7] + 0x78))();
        } while (iVar6 < iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(*(long *)param_1[7] + 0x70))();
    } while (iVar2 < iVar3);
  }
  QVar1 = param_1[6];
  iVar2 = (**(code **)(*(long *)param_1[7] + 0x70))();
  QGridLayout::setRowStretch(QVar1.field0_0x0,iVar2);
  QVar1 = param_1[6];
  iVar2 = (**(code **)(*(long *)param_1[7] + 0x78))();
  QGridLayout::setColumnStretch(QVar1.field0_0x0,iVar2);
  QVar1 = param_1[5];
  local_38 = *(int *)((long)QVar1 + 0x1c) - *(int *)((long)QVar1 + 0x14);
  local_34 = *(int *)((long)QVar1 + 0x20) - *(int *)((long)QVar1 + 0x18);
  QWidget::resize(param_1);
  FUN_100862050(param_1);
  return;
}

