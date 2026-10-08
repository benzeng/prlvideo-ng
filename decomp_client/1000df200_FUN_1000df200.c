
undefined8 FUN_1000df200(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to get bundle path for helper with psn={%u, %u}",*param_3,
                  param_3[1]);
    return 0xffffffff;
  }
  QMutex::lock();
  uVar3 = FUN_100047b40(*(undefined8 *)(param_1 + 0xf0),param_2);
  uVar5 = 0;
  if (uVar3 < 2) goto LAB_1000df4c9;
  if (uVar3 == 0xffffffff) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: helper with psn={%u, %u} (bundlePath=\"%s\") is broken",uVar1,uVar2,
                  local_40 + *(long *)(local_40 + 0x10));
    uVar5 = 0xffffffff;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1000df4c9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_1000df4c9;
  }
  if ((uVar3 == 2) && (1 < DAT_10230ffd0)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,
                  "Helper with psn={%u, %u} (bundlePath=\"%s\") must be patched",uVar1,uVar2,
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) goto LAB_1000df3ac;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1000df3ac:
  iVar4 = FUN_1000495e0(*(undefined8 *)(param_1 + 0xf0),param_2,0);
  if (iVar4 == -1) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: failed to patch helper bundle with psn={%u, %u} (bundlePath=\"%s\")",uVar1
                  ,uVar2,local_50 + *(long *)(local_50 + 0x10));
    uVar5 = 0xfffffffe;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) goto LAB_1000df4c9;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    uVar5 = 1;
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",2,"Helper bundle \"%s\" was poorly patched",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_1000df4c9;
        }
        QArrayData::deallocate(local_58,1,8);
      }
    }
  }
LAB_1000df4c9:
  QMutex::unlock();
  return uVar5;
}

