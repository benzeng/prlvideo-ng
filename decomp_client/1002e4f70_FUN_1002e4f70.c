
void FUN_1002e4f70(QObject *param_1,QEvent *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  QEvent *pQVar2;
  undefined4 local_cc;
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
  undefined4 *local_30;
  char *local_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  pQVar2 = (QEvent *)0x0;
  if ((lVar1 != 0) && (pQVar2 = (QEvent *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar2 = *(QEvent **)(*(long *)(param_1 + 0x18) + 0x58);
  }
  if ((pQVar2 == param_2) && (*(short *)(param_3 + 0x10) == 0x13)) {
    local_cc = 0;
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
    local_30 = &local_cc;
    local_28 = "PRL_RESULT";
    QMetaObject::invokeMethod
              (param_1,"subTaskCompleted",2,0,0,param_6,local_30,"PRL_RESULT",0,0,0,0,0,0,0,0,0,0,0,
               0,0,0,0,0,0,0);
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

