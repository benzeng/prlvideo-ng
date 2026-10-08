
void FUN_10036e580(long param_1,ulong *param_2,char *param_3,undefined8 param_4,ulong *param_5,
                  undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int extraout_var;
  int extraout_var_00;
  CHostDesktop *this;
  long lVar5;
  int extraout_EDX;
  int iVar6;
  long extraout_RDX;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar2 = QWidget::contentsMargins();
  QWidget::contentsMargins();
  iVar2 = extraout_EDX + iVar2;
  uVar4 = QWidget::contentsMargins();
  QWidget::contentsMargins();
  uVar4 = extraout_RDX + (uVar4 & 0xffffffff00000000);
  iVar7 = (int)*param_2 + iVar2;
  iVar6 = (int)(uVar4 >> 0x20);
  *param_5 = CONCAT44(*(int *)((long)param_2 + 4) + iVar6,iVar7);
  iVar3 = QWidget::minimumSize();
  if (iVar7 < iVar3) {
    iVar3 = QWidget::minimumSize();
    *(int *)param_5 = iVar3;
  }
  iVar3 = *(int *)((long)param_5 + 4);
  QWidget::minimumSize();
  if (iVar3 < extraout_var) {
    QWidget::minimumSize();
    *(int *)((long)param_5 + 4) = extraout_var_00;
  }
  auVar9 = QWidget::frameGeometry();
  lVar5 = *(long *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar5 + 0x1c);
  iVar7 = *(int *)(lVar5 + 0x14);
  iVar8 = *(int *)(lVar5 + 0x18);
  iVar1 = *(int *)(lVar5 + 0x20);
  if (*(long *)PTR_m_instance_1021e12d8 == 0) {
    this = operator_new(0x18);
    CHostDesktop::CHostDesktop(this);
    *(CHostDesktop **)PTR_m_instance_1021e12d8 = this;
    DAT_102271140 = 1;
  }
  CHostDesktop::getScreensAvailableBoundingPolygon();
  auVar10 = QPolygon::boundingRect();
  iVar7 = ((iVar3 - iVar7) - ((auVar9._8_4_ + 1) - auVar9._0_4_)) +
          ((auVar10._8_4_ + 2) - auVar10._0_4_);
  iVar8 = ((iVar1 - iVar8) - ((auVar9._12_4_ + 1) - auVar9._4_4_)) +
          ((auVar10._12_4_ + 2) - auVar10._4_4_);
  *param_3 = iVar7 < (int)*param_5;
  iVar3 = *(int *)((long)param_5 + 4);
  *(bool *)param_4 = iVar8 < iVar3;
  if ((iVar8 < iVar3) || (*param_3 != '\0')) {
    *param_5 = *param_2;
    local_48 = CONCAT44(iVar8 - iVar6,iVar7 - iVar2);
    lVar5 = QSize::scaled(param_5,&local_48,param_6);
    *param_5 = (ulong)(uint)(iVar2 + (int)lVar5) |
               (uVar4 & 0xffffffff00000000) + lVar5 & 0xffffffff00000000;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,8,8);
  }
  return;
}

