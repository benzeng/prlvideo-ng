
void FUN_10022d730(long param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  Connection local_58 [8];
  long local_50;
  Data_conflict local_48;
  undefined4 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  do {
    puVar3 = *(uint **)(param_1 + 0x38);
    uVar2 = puVar3[2];
    if (puVar3[3] == uVar2) {
      uVar7 = 0;
LAB_10022d7e7:
      FUN_10022dab0(param_1,uVar7);
      return;
    }
    if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
      uVar7 = 0x80000009;
      goto LAB_10022d7e7;
    }
    ppvVar1 = (void **)(param_1 + 0x38);
    if (*puVar3 < 2) {
      puVar4 = puVar3 + (long)(int)uVar2 * 2 + 4;
      uVar8 = **(undefined4 **)(puVar3 + (long)(int)uVar2 * 2 + 4);
    }
    else {
      FUN_10022e420(ppvVar1,puVar3[1]);
      puVar4 = *ppvVar1;
      lVar6 = (long)(int)puVar4[2];
      uVar8 = **(undefined4 **)(puVar4 + lVar6 * 2 + 4);
      if (1 < *puVar4) {
        FUN_10022e420(ppvVar1,puVar4[1]);
        puVar4 = *ppvVar1;
        if (1 < *puVar4) {
          FUN_10022e420(ppvVar1,puVar4[1]);
          puVar4 = *ppvVar1;
        }
        lVar6 = (long)(int)puVar4[2];
      }
      puVar4 = puVar4 + lVar6 * 2 + 4;
    }
    if (*(void **)puVar4 != (void *)0x0) {
      operator_delete(*(void **)puVar4);
    }
    QListData::erase(ppvVar1);
    *(undefined4 *)(param_1 + 0x40) = uVar8;
    switch(uVar8) {
    case 0:
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
      }
      local_38 = (QArrayData *)PTR_shared_null_1021e1288;
      local_40 = 0x80000000;
      local_48.field7 = 0;
      lVar6 = FUN_10015e230(uVar7,param_1 + 0x20,0,&local_38,&local_48);
      QVariant::~QVariant((QVariant *)&local_48);
      if (*(int *)local_38 == -1) goto LAB_10022d968;
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10022d968;
      }
      QArrayData::deallocate(local_38,2,8);
      goto LAB_10022d968;
    case 1:
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
      }
      lVar6 = FUN_10015cb20(uVar7,param_1 + 0x10);
      if (lVar6 != 0) {
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x30);
        }
        lVar6 = FUN_10015eed0(uVar7,lVar6);
        goto LAB_10022d968;
      }
      break;
    case 2:
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
      }
      lVar6 = FUN_10015cb20(uVar7,param_1 + 0x10);
      if (lVar6 != 0) {
        lVar6 = FUN_100193e80(lVar6);
LAB_10022d968:
        if (lVar6 == 0) {
LAB_10022d99a:
          FUN_10022dab0(param_1,0x80000009);
        }
        else {
          QObject::connect(local_58,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                           "1subTaskCompleted(PRL_RESULT)",0);
          QMetaObject::Connection::~Connection(local_58);
        }
        return;
      }
      break;
    case 3:
      pvVar5 = operator_new(0x50);
      FUN_100240130(pvVar5,param_1 + 0x10,0,1,0);
      QObject::connect(&local_50,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_50 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      CAbstractTask::execute();
      return;
    default:
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
      goto LAB_10022d99a;
    }
  } while( true );
}

