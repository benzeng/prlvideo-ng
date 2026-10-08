
void FUN_10013f4c0(QWidget *param_1,QObject *param_2,QObject *param_3,long param_4)

{
  QTimer *this;
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar4 = 0;
  QWidget::QWidget(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fb7a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb950;
  if (param_2 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(QObject **)(param_1 + 0x38) = param_2;
  uVar4 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(QObject **)(param_1 + 0x48) = param_3;
  this = (QTimer *)(param_1 + 0x50);
  QTimer::QTimer(this,(QObject *)0x0);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar2 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_10013f61b:
    *(undefined **)(param_1 + 0x90) = puVar2;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      goto LAB_10013f61b;
    }
    uVar4 = QMapDataBase::createData();
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    if (*(long *)(puVar2 + 0x10) != 0) {
      puVar5 = (ulong *)FUN_1001411c0(*(long *)(puVar2 + 0x10),uVar4);
      lVar1 = *(long *)(param_1 + 0x90);
      *(ulong **)(lVar1 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | lVar1 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013f662;
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10013f662:
  if ((param_2 != (QObject *)0x0) && (param_3 != (QObject *)0x0)) {
    if (param_4 != 0) {
      CMemorySlider::setRecommendedFrame((CRecommendedMemoryFrame *)param_2);
    }
    QObject::connect(&local_40,param_2,"2destroyed()",this,"1stop()",0);
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,param_2,"2memoryValueChanged(int)",param_1,"1onSliderValueChanged()",
                     0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_48 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_2,"2sliderReleased()",param_1,"1onEditFinished()",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_50 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,param_3,"2destroyed()",this,"1stop()",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_58 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,param_3,"2valueChanged(int)",param_1,"1onSpinValueChanged()",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_60 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,param_3,"2editingFinished()",param_1,"1onEditFinished()",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_68 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,this,"2timeout()",param_1,"1onEditFinished()",0);
    if ((cVar3 != '\0') && (local_70 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
  }
  return;
}

