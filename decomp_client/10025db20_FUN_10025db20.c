
void FUN_10025db20(long param_1,QWidget *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_R9;
  undefined1 local_c9;
  QSize local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_20;
  char *local_18;
  
  if (param_2 != (QWidget *)0x0) {
    if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
       (*(long *)(param_1 + 0x40) == 0)) {
      local_c0 = 0;
    }
    else {
      local_c0 = QWidget::pos();
    }
    local_c8.field0_0x0 = 0xffffffff;
    local_c8.field1_0x4 = 0xffffffff;
    WidgetUtils::showWindow(param_2,(QPoint *)&local_c0,&local_c8);
    lVar2 = FUN_10036ab70(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_10037a2c0(lVar2);
      if (lVar3 != 0) {
        uVar4 = FUN_10037a2c0(lVar2);
        cVar1 = FUN_10037da90(uVar4);
        if (cVar1 != '\0') {
          local_c9 = 1;
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_20 = &local_c9;
          local_18 = "bool";
          local_38 = 0;
          uStack_30 = 0;
          QMetaObject::invokeMethod
                    (lVar2,"onOverlayVisibilityChanged",0,0,0,in_R9,local_20,"bool",0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0);
        }
      }
    }
  }
  return;
}

