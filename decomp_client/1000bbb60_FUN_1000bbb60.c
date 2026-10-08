
undefined8 FUN_1000bbb60(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  QArrayData *local_198;
  QArrayData *local_190;
  CVmTools local_188 [367];
  undefined1 local_19;
  
  CVmTools::CVmTools(local_188);
  cVar1 = FUN_1000bc260(param_1,local_188);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",0,
                  "Error: failed to get Vm Tools configuration for Vm with vmUuid=\"%s\"",
                  local_190 + *(long *)(local_190 + 0x10));
    uVar3 = 0xfffffffe;
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_19 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000bbcc3;
      }
      QArrayData::deallocate(local_190,1,8);
    }
  }
  else {
    bVar2 = (bool)CVmTools::getVmSharedApplications();
    CVmSharedApplications::setMacToWin(bVar2);
    cVar1 = FUN_1000bc670(param_1,local_188);
    uVar3 = 3;
    if (cVar1 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("SGAA","prl_client_app",0,
                    "Error: failed to commit Vm Shared Applications configuration for Vm with vmUuid=\"%s\""
                    ,local_198 + *(long *)(local_198 + 0x10));
      uVar3 = 0xfffffffe;
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_19 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000bbcc3;
        }
        QArrayData::deallocate(local_198,1,8);
      }
    }
  }
LAB_1000bbcc3:
  CVmTools::~CVmTools(local_188);
  return uVar3;
}

