
void FUN_1009de660(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1 == (undefined8 *)0x0) goto LAB_1009de878;
  *param_1 = 0;
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar1 = _CFRetain(param_2);
      *param_1 = uVar1;
    }
    goto LAB_1009de878;
  }
  uVar1 = _CFErrorGetCode(param_3);
  uVar2 = _CFErrorCopyDescription(param_3);
  FUN_1009dbc60(&local_40,uVar2);
  QString::toUtf8();
  pQVar4 = local_38 + *(long *)(local_38 + 0x10);
  uVar2 = _CFErrorCopyFailureReason(param_3);
  FUN_1009dbc60(&local_50,uVar2);
  QString::toUtf8();
  pQVar3 = local_48 + *(long *)(local_48 + 0x10);
  uVar2 = _CFErrorGetDomain(param_3);
  FUN_1009dbc60(&local_60,uVar2);
  QString::toUtf8();
  FUN_100df99c0("","ProxyInfo",0,"err code = %ld, msg=\'%s\', reason=\'%s\', domain=\'%s\'",uVar1,
                pQVar4,pQVar3,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de776;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1009de776:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de7a6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009de7a6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de7d6;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1009de7d6:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de806;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009de806:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de836;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1009de836:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009de878;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009de878:
  uVar1 = _CFRunLoopGetCurrent();
  _CFRunLoopStop(uVar1);
  return;
}

