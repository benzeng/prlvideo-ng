
void FUN_1000e6660(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 local_ac;
  long local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
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
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 *local_18;
  char *local_10;
  
  if (((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 4) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    local_a8 = param_1 + 0x18;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
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
    local_90 = "QList<TResolvedPath>";
    local_a0 = "QString";
    local_18 = &local_ac;
    local_10 = "PRL_RESULT";
    local_ac = param_2;
    local_98 = param_3;
    QMetaObject::invokeMethod
              (*(long *)(param_1 + 0x10),"onRecentsPathes",2,0,0,param_6,local_18,"PRL_RESULT",
               local_a8,"QString",param_3,"QList<TResolvedPath>",0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  return;
}

