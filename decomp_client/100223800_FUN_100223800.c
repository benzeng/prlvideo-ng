
void FUN_100223800(long *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QString local_48;
  QString local_40 [4];
  undefined1 local_19;
  
  if (param_2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002238e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  QObject::sender();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206c80);
  FUN_100293130(local_40,uVar2);
  cVar1 = QImage::save(local_40,(char *)(param_1 + 6),0x1dbf6fd);
  uVar3 = 0;
  uVar2 = 0x80000009;
  if ((cVar1 != '\0') && (uVar2 = uVar3, (char)param_1[7] != '\0')) {
    FUN_100d8c060(&local_48);
    QSound::play(&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002238ac;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1002238ac:
  (**(code **)(*param_1 + 0xb0))(param_1,uVar2);
  QImage::~QImage((QImage *)local_40);
  return;
}

