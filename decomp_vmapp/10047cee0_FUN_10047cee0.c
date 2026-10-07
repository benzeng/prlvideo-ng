
void FUN_10047cee0(QObject *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc2170;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc2200;
  QMutex::QMutex((QMutex *)(param_1 + 0x38),0);
  auVar2._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar2._0_8_ = PTR_shared_null_100ba2188;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar2;
  DAT_100bf915d = DAT_100bf915d | 1;
  DAT_100bf9144 = param_1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0x100;
  FUN_1004c0790(param_1 + 0x10,0x8210,0x8211);
  QObject::connect(local_40,DAT_1011c3698 + 0x10840,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onTISRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",1);
  bVar1 = 1;
  if (local_40[0] != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  if (bVar1 != 0) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to connect TISHost signals and slots");
  }
  FUN_100495a10(&DAT_1011cc7d0,param_1);
  return;
}

