
void FUN_1002b53b0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 local_20 [8];
  
  lVar2 = QObject::sender();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&DAT_10226d110,0);
  }
  FUN_1000f1440(local_20,lVar3 + 0x10);
  FUN_1002b50c0(param_1,local_20);
  FUN_100039a80(local_20);
  cVar1 = FUN_1002b5450(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

