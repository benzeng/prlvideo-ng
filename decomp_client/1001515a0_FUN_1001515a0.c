
void FUN_1001515a0(QObject *param_1,int param_2,undefined8 param_3,char param_4,undefined8 *param_5,
                  QObject *param_6)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_6);
  *(undefined ***)param_1 = &PTR_FUN_1021fccd0;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e1288;
  if (param_4 == '\0') {
    uVar3 = FUN_100152280();
    cVar2 = FUN_100155010(uVar3,param_3,0);
    if (cVar2 == '\0') {
      FUN_10015aab0(param_1 + 0x18,param_3);
      goto LAB_100151632;
    }
  }
  uVar3 = QString::fromAscii_helper("Local Client",0xc);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
LAB_100151632:
  piVar1 = (int *)*param_5;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  if (param_2 == 3) {
    QString::fromUtf8_helper((char *)&local_48,0x1dc1ce1);
    QString::operator=((QString *)(param_1 + 0x10),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else if (param_2 == 5) {
    QString::fromUtf8_helper((char *)&local_40,0x1dc1cf9);
    QString::operator=((QString *)(param_1 + 0x10),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return;
}

