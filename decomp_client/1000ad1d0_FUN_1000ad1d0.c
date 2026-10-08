
undefined1
FUN_1000ad1d0(undefined8 param_1,QString *param_2,QString *param_3,undefined8 param_4,code *param_5,
             long param_6)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 local_68 [8];
  QString QStack_60;
  QArrayData *local_58;
  int *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_2);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ad2fd;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1000ad2fd:
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_1000a9690(param_2);
    if ((lVar4 == 0) || (cVar1 = FUN_1000b7b40(lVar4), cVar1 == '\0')) {
      uVar3 = FUN_100370280();
      FUN_100370e30(&local_50,uVar3,param_2,DAT_100e152b8);
      if ((local_50 == (int *)0x0) || ((local_50[1] == 0 || (local_48 == 0)))) {
        cVar1 = FUN_1000a6280(param_2);
        if (local_50 != (int *)0x0) goto LAB_1000ad316;
      }
      else {
        cVar1 = '\0';
LAB_1000ad316:
        LOCK();
        *local_50 = *local_50 + -1;
        local_31 = *local_50 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_50 != (int *)0x0)) {
          operator_delete(local_50);
        }
      }
      cVar2 = FUN_1000a8370(param_1,param_2,cVar1);
      uVar6 = 1;
      if (cVar2 == '\0') {
        QString::toUtf8();
        pcVar5 = "false";
        if (cVar1 != '\0') {
          pcVar5 = "true";
        }
        FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to vmStartByUuid(\"%s\", %s)",
                      local_58 + *(long *)(local_58 + 0x10),pcVar5);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            UNLOCK();
            if (*(int *)local_58 != 0) {
              return 0;
            }
            local_31 = 0;
          }
          QArrayData::deallocate(local_58,1,8);
        }
        return 0;
      }
    }
    else {
      if (((ulong)param_5 & 1) != 0) {
        param_5 = *(code **)(param_5 + *(long *)(lVar4 + param_6) + -1);
      }
      cVar1 = (*param_5)((long *)(lVar4 + param_6),param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar6 = 0;
    }
  }
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_68 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  QString::operator=((QString *)local_68,param_2);
  QString::operator=((QString *)(local_68 + 8),param_3);
  FUN_1000b45f0(param_4,local_68);
  if (*(int *)QStack_60.field0_0x0 != -1) {
    if (*(int *)QStack_60.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_60.field0_0x0 = *(int *)QStack_60.field0_0x0 + -1;
      local_31 = *(int *)QStack_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad3b3;
    }
    QArrayData::deallocate((QArrayData *)QStack_60.field0_0x0,2,8);
  }
LAB_1000ad3b3:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68,2,8);
  }
  return uVar6;
}

