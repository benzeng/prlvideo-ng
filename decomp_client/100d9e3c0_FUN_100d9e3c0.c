
undefined4
FUN_100d9e3c0(QString *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *local_40;
  QFileInfo local_38 [8];
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  FUN_100d9e550(&local_30,param_3,param_4);
  QFileInfo::QFileInfo(local_38,param_1);
  cVar2 = QFileInfo::exists();
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"%s: file does not exists (path=%s)","SetSimplePermissionsToFile"
                  ,local_40 + *(long *)(local_40 + 0x10));
    uVar3 = 0x80000010;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d9e487;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    uVar3 = FUN_100d9e640(local_38,param_2,&local_30,param_5);
  }
LAB_100d9e487:
  QFileInfo::~QFileInfo(local_38);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar3;
      }
    }
    QHashData::free_helper(local_30);
  }
  return uVar3;
}

