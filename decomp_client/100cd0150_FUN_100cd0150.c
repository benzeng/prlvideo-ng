
void FUN_100cd0150(QObject *param_1,long param_2,uint param_3)

{
  QObject *this;
  QTimer *this_00;
  _Unwind_Exception *exception_object;
  undefined8 extraout_RAX;
  QString QVar1;
  Connection local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102259920;
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  this = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(long *)(param_1 + 0x60) = param_2;
  param_1[0x68] = (QObject)0x1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_38.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Fresh constructed action",0x18)
  ;
  QString::operator=((QString *)this,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cd0232;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100cd0232:
  if (param_2 != 0) {
    this_00 = operator_new(0x20);
    QTimer::QTimer(this_00,param_1);
    *(QTimer **)(param_1 + 0x50) = this_00;
    QObject::connect(local_40,this_00,"2timeout()",param_1,"1recodeTimerEvent()",0);
    QMetaObject::Connection::~Connection(local_40);
    return;
  }
  FUN_100df99c0("","hid",0,"[CKeyActionBase::CKeyActionBase] Sender is NULL");
  exception_object = (_Unwind_Exception *)___cxa_rethrow();
  do {
    QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)this;
    if (*(int *)QVar1.field0_0x0 != -1) {
      if (*(int *)QVar1.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
        local_29 = *(int *)QVar1.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100cd0317;
        QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)this;
      }
      QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
    }
LAB_100cd0317:
    QObject::~QObject(param_1);
    __Unwind_Resume(exception_object);
    exception_object = (_Unwind_Exception *)FUN_100014b50(extraout_RAX);
    operator_delete((void *)(ulong)param_3);
  } while( true );
}

