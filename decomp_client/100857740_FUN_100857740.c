
void FUN_100857740(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  QVariant local_20;
  
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100857850) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      puVar1 = (undefined4 *)*param_4;
      uVar2 = FUN_100737ed0(param_1);
      *puVar1 = uVar2;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100738630(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                    *(undefined4 *)param_4[3]);
      return;
    }
    if (param_3 == 1) {
      FUN_1007385c0(&local_20,param_1,*(undefined4 *)param_4[1]);
      if ((QVariant *)*param_4 != (QVariant *)0x0) {
        QVariant::operator=((QVariant *)*param_4,&local_20);
      }
      QVariant::~QVariant(&local_20);
    }
    else if (param_3 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227a60,0,(void **)0x0);
      return;
    }
  }
  return;
}

