
void FUN_10022d370(QObject *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  long lVar4;
  Connection local_50 [8];
  Connection local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022023a0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  uVar2 = FUN_100152280();
  pQVar3 = (QObject *)FUN_1001547d0(uVar2,param_2);
  uVar2 = 0;
  if (pQVar3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = pQVar3;
  pQVar3 = param_1 + 0x38;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(int *)(param_1 + 0x44) = param_4;
  if (param_4 == 2) {
    local_38 = 2;
    FUN_10022e120(pQVar3,&local_38);
  }
  else {
    local_3c = 1;
    FUN_10022e120(pQVar3,&local_3c);
    if (param_4 == 0) {
      local_40 = 0;
      FUN_10022e120(pQVar3,&local_40);
    }
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QObject::connect(local_48,*(long *)(param_1 + 0x30),"2afterVmAdded(const CVmWrap&)",param_1,
                     "1onAfterVmAdded(const CVmWrap&)",0);
    QMetaObject::Connection::~Connection(local_48);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
    }
    QObject::connect(local_50,uVar2,"2afterVmRemoved( const QString& )",param_1,
                     "1onAfterVmRemoved( const QString& )",0);
    QMetaObject::Connection::~Connection(local_50);
  }
  uVar2 = FUN_100370280();
  lVar4 = FUN_1003704b0(uVar2,param_1 + 0x10,DAT_100e152b8);
  param_1[0x48] = (QObject)(lVar4 != 0);
  return;
}

