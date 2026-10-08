
void FUN_1006efca0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  undefined1 uVar5;
  CAppUpdateLogic *this;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(param_1 + 0x50),0));
  (**(code **)(**(long **)(param_1 + 0x50) + 0x68))
            (*(long **)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x154));
  puVar3 = PTR_m_instance_1021e1340;
  plVar1 = *(long **)(param_1 + 0x58);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  if (*(int *)(param_1 + 0x150) == 4) {
    if (*(long *)PTR_m_instance_1021e1340 == 0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar3 = this;
      DAT_102274b28 = 1;
    }
    bVar4 = CAppUpdateLogic::isOnAppStart();
    bVar4 = bVar4 ^ 1;
  }
  else {
    bVar4 = 0;
  }
  (*pcVar2)(plVar1,bVar4);
  bVar8 = *(int *)(param_1 + 0x150) == 4;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x68))
            (*(long **)(param_1 + 0x60),bVar8,extraout_RDX,bVar8);
  bVar8 = 1 < *(uint *)(param_1 + 0x150);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x68))
            (*(long **)(param_1 + 0x68),bVar8,extraout_RDX_00,bVar8);
  switch(*(undefined4 *)(param_1 + 0x150)) {
  case 1:
    lVar7 = *(long *)(param_1 + 0x28);
    bVar8 = (bool)FUN_1006eb140(lVar7);
    CProgressIndicator::toggleAnimation(bVar8);
    QTimer::start((int)*(undefined8 *)(param_1 + 0x158));
    goto LAB_1006efdec;
  case 2:
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x30);
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 0x40);
    uVar5 = FUN_1006eb140(lVar7);
    goto LAB_1006efde4;
  case 4:
    FUN_1006ebe70(*(undefined8 *)(param_1 + 0x48),param_1 + 0xd0);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x48);
    break;
  default:
    goto switchD_1006efd7a_default;
  }
  uVar5 = FUN_1006eb140(uVar6);
LAB_1006efde4:
  CProgressIndicator::toggleAnimation((bool)uVar5);
LAB_1006efdec:
  if (lVar7 != 0) {
    QStackedWidget::setCurrentWidget(*(QWidget **)(param_1 + 0x20));
    return;
  }
switchD_1006efd7a_default:
  return;
}

