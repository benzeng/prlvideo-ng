
undefined8 FUN_100686810(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  
  cVar2 = (**(code **)(*param_1 + 0x150))();
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Disk \"%s\" is not opened, can\'t get plain disk parameters. [%p]",
                  local_28 + *(long *)(local_28 + 0x10),param_1[1]);
    uVar3 = 0x80021021;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0x80021021;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  else {
    lVar1 = param_1[4];
    param_2[1] = param_1[5];
    *param_2 = lVar1;
    QString::operator=((QString *)(param_2 + 2),(QString *)(param_1 + 6));
    param_2[3] = param_1[7];
    uVar3 = 0;
  }
  return uVar3;
}

