
void FUN_1003e40f0(long param_1)

{
  QString *pQVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  char *pcVar9;
  int iVar10;
  Connection local_148 [8];
  Connection local_140 [8];
  CVmConfiguration local_138 [252];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  Data *local_30;
  undefined1 local_21;
  
  FUN_1003e3340();
  FUN_1003e31a0(param_1);
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    pcVar9 = "(!)Error: Server instance is null.";
  }
  else {
    lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      local_30 = (Data *)PTR_shared_null_1021e15e8;
      local_34 = 1;
      FUN_100129840(&local_30,&local_34);
      local_38 = 4;
      FUN_100129840(&local_30,&local_38);
      local_3c = 5;
      FUN_100129840(&local_30,&local_3c);
      pvVar4 = operator_new(600);
      CVmConfiguration::CVmConfiguration(local_138,*(CVmConfiguration **)(param_1 + 0x20));
      uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
      uVar6 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      FUN_100210650(pvVar4,local_138,uVar5,&local_30,uVar6);
      CVmConfiguration::~CVmConfiguration(local_138);
      QObject::connect(local_140,pvVar4,
                       "2errorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int )",
                       *(undefined8 *)(param_1 + 0x10),
                       "2validationError( PRL_RESULT, VmEditorTypes::VmEditorItems, int )",0);
      QMetaObject::Connection::~Connection(local_140);
      QObject::connect(local_148,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                       "1onCommitTaskFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_148);
      CAbstractTask::execute();
      puVar2 = PTR_s_VmConfig_1021f1e00;
      pQVar1 = *(QString **)(param_1 + 0x10);
      iVar10 = -1;
      if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
        sVar7 = _strlen(PTR_s_VmConfig_1021f1e00);
        iVar10 = (int)sVar7;
      }
      pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar10);
      CMappingModel::startSubmit(pQVar1);
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_21 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003e42b0;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_1003e42b0:
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return;
          }
          local_21 = 0;
        }
        QListData::dispose(local_30);
      }
      return;
    }
    pcVar9 = "(!)Error: Vm instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar9);
  CMappingModel::endSubmit((int)*(undefined8 *)(param_1 + 0x10));
  return;
}

