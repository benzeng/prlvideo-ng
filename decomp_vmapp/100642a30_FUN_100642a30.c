
undefined8 FUN_100642a30(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x22) != '\0') {
    return 0;
  }
  if (*(char *)(lVar1 + 0x21) != '\0') {
    QObject::connect(&local_20,lVar1,"2finished(const QString&)",param_1,"1deleteLater()",0);
    if (local_20 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_20);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      if (cVar2 != '\0') goto LAB_100642ae4;
    }
    FUN_1008e3970("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "CInstalledSoftwareCollector.cpp",0x239,"start");
  }
LAB_100642ae4:
  uVar3 = FUN_1006420b0(*(undefined8 *)(param_1 + 0x10));
  *(char *)(*(long *)(param_1 + 0x10) + 0x22) = (char)uVar3;
  return uVar3;
}

