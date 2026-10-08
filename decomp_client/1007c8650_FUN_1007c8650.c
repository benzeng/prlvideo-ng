
void FUN_1007c8650(QObject *param_1,int param_2)

{
  long lVar1;
  undefined1 local_20 [8];
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102209e80);
  if ((-1 < param_2) && (lVar1 != 0)) {
    FUN_10008d4c0(local_20,lVar1 + 0x38);
    FUN_1007c8390(param_1,local_20);
    FUN_10008c780(local_20);
    if ((*(int *)(*(long *)(param_1 + 0x20) + 0xc) == *(int *)(*(long *)(param_1 + 0x20) + 8)) &&
       (*(int *)(param_1 + 0x28) < 3)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      QTimer::singleShot(5000,param_1,"1updateNetworkAddresses()");
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}

