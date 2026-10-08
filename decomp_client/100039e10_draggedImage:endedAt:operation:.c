
/* Function Stack Size: 0x30 bytes */

void __thiscall
CMacDragSource::draggedImage_endedAt_operation_
          (CMacDragSource *this,ID param_1,SEL param_2,ID param_3,CGPoint param_4,
          unsigned_long_long param_5)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int extraout_var;
  int extraout_var_00;
  double local_40;
  double local_38;
  
  lVar1 = *(long *)(this + m_manager);
  *(undefined1 *)(lVar1 + 0x5a) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  iVar4 = QApplication::desktop();
  QDesktopWidget::screenGeometry(iVar4);
  local_40 = (double)(int)param_4.field0_0x0;
  local_38 = (double)(((1 - (int)param_4.field1_0x8) + extraout_var_00) - extraout_var);
  cVar3 = FUN_10037b880(uVar2,&local_40);
  if (cVar3 != '\0') {
    FUN_100091580(lVar1);
  }
  *(bool *)(lVar1 + 0x59) = cVar3 != '\0';
  if (param_3 == 0x20) {
    FUN_100039f70();
  }
  else {
    *(undefined1 *)(*(long *)(this + m_manager) + 0x58) = 0;
  }
  return;
}

