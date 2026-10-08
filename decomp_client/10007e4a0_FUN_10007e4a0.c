
void FUN_10007e4a0(QWidget *param_1)

{
  QObject *this;
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QWidget::QWidget(param_1,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10222fa60;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222fc20;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222fc70;
  CWindowInterface::CWindowInterface((CWindowInterface *)(param_1 + 0x30),param_1,0);
  *(undefined ***)param_1 = &PTR_FUN_10222fa60;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222fc20;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222fc70;
  this = operator_new(0x40);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021ed9d0;
  *(QWidget **)(this + 0x10) = param_1;
  this[0x38] = (QObject)0x0;
  *(QObject **)(param_1 + 0x40) = this;
  FUN_10007dee0();
  FUN_10007be10(*(undefined8 *)(param_1 + 0x40));
  pvVar1 = operator_new(0x18);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),PTR_s_vmList_102269ef0);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_storage_102269f20);
  FUN_1000804c0(pvVar1,uVar2);
  lVar3 = *(long *)(param_1 + 0x40);
  *(void **)(lVar3 + 0x28) = pvVar1;
  pvVar1 = operator_new(0x18);
  FUN_100086510(pvVar1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x18),
                *(undefined8 *)(lVar3 + 0x20),param_1);
  lVar3 = *(long *)(param_1 + 0x40);
  *(void **)(lVar3 + 0x30) = pvVar1;
  FUN_100080650(*(undefined8 *)(lVar3 + 0x28));
  FUN_10007bc70(*(undefined8 *)(param_1 + 0x40));
  QObject::property((char *)&local_50);
  QVariant::toString();
  if (*(int *)(local_40 + 4) == 0) {
    lVar3 = FUN_100080600(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28),0);
    if (lVar3 == 0) {
      bVar4 = false;
    }
    else {
      uVar2 = FUN_100080600(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28),0);
      lVar3 = FUN_10008b940(uVar2);
      bVar4 = lVar3 != 0;
    }
  }
  else {
    bVar4 = false;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007e65d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10007e65d:
  QVariant::~QVariant(&local_50);
  if (bVar4) {
    uVar2 = FUN_100080600(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28),0);
    FUN_10008ba40(&local_68,uVar2);
    QVariant::QVariant(&local_60,&local_68);
    QObject::setProperty((char *)param_1,(QVariant *)"vmUuid");
    QVariant::~QVariant(&local_60);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_68.field0_0x0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
  return;
}

