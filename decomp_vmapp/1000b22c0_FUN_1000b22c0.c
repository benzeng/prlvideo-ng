
undefined8 *
FUN_1000b22c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined8 *local_38;
  undefined1 local_29;
  
  local_38 = (undefined8 *)0x0;
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_48,"1jwwh1kjxhqw4yr83cwjehc8q4f",-1);
  iVar2 = FUN_1006140f0(&local_38,param_5,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b234e;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000b234e:
  if (iVar2 < 0) {
    FUN_1008e3970("","vm",0,"CVirtualPC::DoEncryptOp() failed to init engine (%#x)",iVar2);
    *param_1 = PTR_shared_null_100ba20d0;
    goto LAB_1000b254d;
  }
  if (local_38 == (undefined8 *)0x0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pEngine","VirtualPC.cpp",0xe8b,
                  "DoEncryptOp");
  }
  puVar1 = local_38;
  local_50 = (QArrayData *)*param_3;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  if (param_4 == '\0') {
    QByteArray::QByteArray((QByteArray *)&local_60,"837e32yxd3ix6fhwgsgjhdfjsdgfjd",-1);
    iVar2 = FUN_100614760(puVar1,&local_50,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b24b0;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
  else {
    QByteArray::QByteArray((QByteArray *)&local_58,"837e32yxd3ix6fhwgsgjhdfjsdgfjd",-1);
    iVar2 = FUN_100614750(puVar1,&local_50,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b24b0;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1000b24b0:
  (**(code **)*local_38)();
  if (iVar2 < 0) {
    pcVar3 = "decryption";
    if (param_4 != '\0') {
      pcVar3 = "encryption";
    }
    FUN_1008e3970("","vm",0,"CVirtualPC::DoEncryptOp() %s failed (%#x)",pcVar3,iVar2);
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    *param_1 = local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b254d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000b254d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return param_1;
}

