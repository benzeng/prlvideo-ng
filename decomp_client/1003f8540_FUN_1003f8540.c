
void FUN_1003f8540(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  CVmConfiguration *pCVar5;
  QString QVar6;
  void *pvVar7;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  undefined4 local_168;
  undefined4 local_164;
  Data *local_160;
  CVmConfiguration local_158 [248];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_44 [4];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 != 1) goto LAB_1003f88f4;
  QVariant::toString();
  uVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  plVar3 = (long *)FUN_1003f8370(&local_40,uVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f85b9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003f85b9:
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(&local_58,plVar3);
    (**(code **)(*plVar3 + 0xa8))(&local_60,plVar3);
    cVar1 = FUN_1001b0280(&local_58,&local_60,local_44,&local_50);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f863c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1003f863c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f866c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1003f866c:
    if (cVar1 != '\0') {
      uVar2 = FUN_100152280();
      lVar4 = FUN_1001548f0(uVar2,&local_50);
      if (lVar4 != 0) {
        pCVar5 = (CVmConfiguration *)FUN_10018c2b0(lVar4);
        CVmConfiguration::CVmConfiguration(local_158,pCVar5);
        local_160 = (Data *)PTR_shared_null_1021e15e8;
        local_164 = 4;
        FUN_100129840(&local_160,&local_164);
        local_168 = 5;
        FUN_100129840(&local_160,&local_168);
        CVmConfiguration::getVmSettings();
        QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmStartupOptions();
        local_170 = (QArrayData *)PTR_shared_null_1021e1288;
        CVmStartupOptionsBase::setExternalDeviceSystemName(QVar6);
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f8757;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_1003f8757:
        pvVar7 = operator_new(600);
        FUN_100210650(pvVar7,local_158,lVar4,&local_160,0);
        CAbstractTask::execute();
        (**(code **)(*plVar3 + 0xb8))(&local_178,plVar3);
        (**(code **)(*plVar3 + 0xa8))(&local_180,plVar3);
        FUN_100188480(&local_188,lVar4);
        FUN_1001af310(&local_178,&local_180,&local_188);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f8815;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_1003f8815:
        if (*(int *)local_180 != -1) {
          if (*(int *)local_180 != 0) {
            LOCK();
            *(int *)local_180 = *(int *)local_180 + -1;
            local_31 = *(int *)local_180 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f884b;
          }
          QArrayData::deallocate(local_180,2,8);
        }
LAB_1003f884b:
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            local_31 = *(int *)local_178 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f8881;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_1003f8881:
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003f88ad;
          }
          QListData::dispose(local_160);
        }
LAB_1003f88ad:
        CVmConfiguration::~CVmConfiguration(local_158);
      }
    }
  }
  FUN_1003f7e20(param_1,plVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f88f4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003f88f4:
  CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  return;
}

