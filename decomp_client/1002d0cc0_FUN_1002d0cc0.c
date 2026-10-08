
undefined8 FUN_1002d0cc0(long param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  CVmConfiguration *pCVar4;
  long lVar5;
  QVariant *pQVar6;
  void *pvVar7;
  int *piVar8;
  undefined8 uVar9;
  QVariant QVar10;
  long local_188;
  undefined4 local_180;
  undefined4 local_17c;
  Data *local_178;
  QVariant local_170;
  QArrayData *local_160;
  int *local_158;
  int *local_150;
  int *local_148;
  int *local_140;
  int local_138;
  CVmConfiguration local_130 [255];
  undefined1 local_31;
  
  cVar3 = FUN_1002d01d0();
  if (cVar3 == '\0') {
    return 0x3bfa;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  pCVar4 = (CVmConfiguration *)FUN_10018c2b0(uVar9);
  CVmConfiguration::CVmConfiguration(local_130,pCVar4);
  FUN_100221b80(&local_158,param_1 + 0x30);
  local_150 = local_158;
  if (*local_158 != -1) {
    if (*local_158 == 0) {
      QListData::detach((int)&local_150);
      iVar1 = local_150[2];
      if (iVar1 != local_150[3]) {
        local_158 = local_158 + (long)local_158[2] * 2 + 4;
        piVar8 = local_150 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_150[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_158;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_158 = local_158 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_158 = *local_158 + 1;
      local_31 = *local_158 != 0;
      UNLOCK();
    }
  }
  local_148 = local_150 + (long)local_150[2] * 2 + 4;
  local_140 = local_150 + (long)local_150[3] * 2 + 4;
  local_138 = 1;
  FUN_100039a80(&local_158);
  if ((local_138 != 0) && (local_148 != local_140)) {
    do {
      local_160 = *(QArrayData **)local_148;
      if (1 < *(int *)local_160 + 1U) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + 1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
      }
      pQVar6 = (QVariant *)FUN_10008c590(param_1 + 0x30);
      QVariant::QVariant(&local_170,pQVar6);
      QVar10.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)&local_170;
      QVar10.field0_0x0.field0_0x0.field15 = (QObject *)&local_160;
      CVmConfiguration::setPropertyValue
                ((QTypedArrayData<unsigned_short> *)local_130,QVar10,(bool *)0x0);
      QVariant::~QVariant(&local_170);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d0ebc;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1002d0ebc:
      local_148 = local_148 + 2;
      local_138 = 1;
    } while (local_148 != local_140);
  }
  FUN_100039a80(&local_150);
  local_178 = (Data *)PTR_shared_null_1021e15e8;
  local_17c = 4;
  FUN_100129840(&local_178,&local_17c);
  local_180 = 5;
  FUN_100129840(&local_178,&local_180);
  pvVar7 = operator_new(600);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100210650(pvVar7,local_130,uVar9,&local_178,0);
  QObject::connect(&local_188,pvVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_188 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_188);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d0ff7;
    }
    QListData::dispose(local_178);
  }
LAB_1002d0ff7:
  CVmConfiguration::~CVmConfiguration(local_130);
  return 0;
}

