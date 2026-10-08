
void FUN_1000caf00(long *param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  QArrayData *local_38;
  
  cVar1 = FUN_100105850(param_1[0x1f],param_2 + 0x10,param_2 + 8);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      return;
    }
    FUN_1000d7d50(param_1,param_2,param_4);
    return;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,"application %s isn\'t allowed by Parental Control",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        local_68 = CONCAT71(local_68._1_7_,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_1000cafad;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1000cafad:
  uStack_50 = 0;
  local_48 = 0;
  uStack_60 = 0x2000000000;
  local_68 = 0x20000006b;
  _local_58 = CONCAT44(param_3,0x10);
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e85b0(uVar2,&local_68);
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x40;
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar1 != '\0') {
    FUN_10004d550(param_1[0x1e],param_2 + 0x10,param_4);
  }
  return;
}

