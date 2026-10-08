
void FUN_1001d4100(QObject *param_1,QEvent *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  undefined1 *local_30;
  char *local_28;
  
  if ((((param_2 != (QEvent *)0x0) && (*(ushort *)(param_3 + 0x10) - 0x11 < 3)) &&
      ((*(byte *)(*(long *)(param_2 + 8) + 0x20) & 1) != 0)) &&
     ((*(byte *)(*(long *)(param_2 + 0x28) + 0xc) & 1) != 0)) {
    local_c9 = 0;
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
    local_c8 = 0;
    uStack_c0 = 0;
    local_30 = &local_c9;
    local_28 = "bool";
    QMetaObject::invokeMethod
              (param_1,"updateAppUIOptions",2,0,0,param_6,local_30,"bool",0,0,0,0,0,0,0,0,0,0,0,0,0,
               0,0,0,0,0);
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

