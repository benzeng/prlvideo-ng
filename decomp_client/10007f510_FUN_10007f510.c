
void FUN_10007f510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  lVar3 = FUN_10008b9a0(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FUN_10008bad0(param_2);
  if (lVar3 == 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar1,PTR_s_addData_restoringPosition__102269f40,uVar4,1);
  }
  else {
    lVar3 = FUN_10008b9a0(param_2);
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar1,PTR_s_insertData_atIndex__102269f38,uVar4,(long)*(int *)(lVar3 + 0x18))
    ;
  }
  lVar3 = FUN_10008b940(param_2);
  if (lVar3 != 0) {
    FUN_10008bf60(param_2,param_1 + 0x28);
  }
  FUN_100080f80(param_1 + 0x20,uVar2,&local_38);
  FUN_1008675e0(*(undefined8 *)(param_1 + 0x10),param_2);
  QObject::connect(&local_40,param_2,"2dataChanged()",param_1,"1onVmDataChanged()",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

