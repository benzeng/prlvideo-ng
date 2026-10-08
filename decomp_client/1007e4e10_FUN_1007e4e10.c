
void FUN_1007e4e10(QObject *param_1,QEvent *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  QEvent *pQVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 local_e1;
  undefined4 local_e0 [2];
  undefined1 *local_d8;
  char *pcStack_d0;
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
  undefined4 *local_48;
  char *pcStack_40;
  
  pQVar1 = (QEvent *)QAbstractScrollArea::viewport();
  if ((((pQVar1 == param_2) && (*(short *)(param_3 + 0x10) == 3)) &&
      (*(long *)(param_1 + 0x78) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x78) + 4) != 0 && (*(long *)(param_1 + 0x80) != 0)))) {
    uVar2 = FUN_10018c280();
    uVar2 = FUN_100319d20(uVar2);
    local_e0[0] = 2;
    local_e1 = 1;
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
    local_d8 = &local_e1;
    pcStack_d0 = "bool";
    local_48 = local_e0;
    pcStack_40 = "CrystalIndicator::Indicators";
    QMetaObject::invokeMethod
              (uVar2,"hideIndicators",2,0,0,param_6,local_48,"CrystalIndicator::Indicators",local_d8
               ,"bool",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if (DAT_1023109b8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100759600(pvVar3);
      DAT_102271308 = 1;
      DAT_1023109b8 = pvVar3;
    }
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
    local_d8 = (undefined1 *)0x0;
    pcStack_d0 = (char *)0x0;
    local_48 = (undefined4 *)0x0;
    pcStack_40 = (char *)0x0;
    QMetaObject::invokeMethod
              (DAT_1023109b8,"showMenu",2,0,0,param_6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

