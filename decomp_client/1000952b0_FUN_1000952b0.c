
void FUN_1000952b0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 local_ad;
  undefined4 local_ac;
  undefined1 *local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  long local_88;
  char *local_80;
  long local_78;
  char *local_70;
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
  
  local_ad = 0;
  local_88 = param_1 + 0x10;
  local_78 = param_1 + 0x18;
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
  local_70 = "QString";
  local_80 = "ULONG64";
  local_90 = "QList<TResolvedPath>";
  local_a8 = &local_ad;
  local_a0 = "bool";
  local_18 = &local_ac;
  local_10 = "PRL_RESULT";
  local_ac = param_2;
  local_98 = param_3;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 8),"onDragWithPathes",2,0,0,param_6,local_18,"PRL_RESULT",
             local_a8,"bool",param_3,"QList<TResolvedPath>",local_88,"ULONG64",local_78,"QString",0,
             0,0,0,0,0,0,0,0,0);
  return;
}

