
void FUN_10039b170(QObject *param_1,int *param_2,undefined8 *param_3,QImage *param_4)

{
  undefined8 uVar1;
  int iVar2;
  QObject *this;
  long lVar3;
  QTimer *this_00;
  Data *pDVar4;
  QObject *local_98;
  QVariant local_90;
  QImage local_80 [32];
  Data *local_60;
  Connection local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QWidget::QWidget((QWidget *)param_1,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10220ffb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102210160;
  QWidget::setMinimumSize((int)param_1,(param_2[2] + 1) - *param_2);
  *(undefined ***)param_1 = &PTR_FUN_102273c10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102273dc0;
  this = operator_new(0x70);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f1ad0;
  *(undefined **)(this + 0x10) = PTR_shared_null_1021e15e8;
  QImage::QImage((QImage *)(this + 0x18),param_4);
  uVar1 = *param_3;
  *(undefined8 *)(this + 0x40) = param_3[1];
  *(undefined8 *)(this + 0x38) = uVar1;
  this_00 = (QTimer *)(this + 0x48);
  QTimer::QTimer(this_00,(QObject *)0x0);
  *(undefined4 *)(this + 0x68) = 0;
  QObject::installEventFilter(param_1);
  QObject::connect(local_48,this_00,"2timeout()",param_1,"1update()",0);
  QMetaObject::Connection::~Connection(local_48);
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  FUN_10039b9d0(local_80,this);
  FUN_10039b640(this + 0x10,local_80);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10039b33d;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_60 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10039b33d:
  QImage::~QImage(local_80);
  QTimer::start((int)this_00);
  iVar2 = DAT_102312298;
  local_98 = this;
  if (DAT_102312298 == 0) {
    QMetaObject::normalizedType((char *)&local_40);
    iVar2 = QMetaType::registerNormalizedType
                      (&local_40,FUN_10039d6e0,FUN_10039d6f0,8,0x10c,&DAT_1021f1b48);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10039b3d5;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_10039b3d5:
  DAT_102312298 = iVar2;
  QVariant::QVariant(&local_90,DAT_102312298,&local_98,1);
  QObject::setProperty((char *)param_1,(QVariant *)"imp");
  QVariant::~QVariant(&local_90);
  return;
}

