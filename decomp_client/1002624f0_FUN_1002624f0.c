
void FUN_1002624f0(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Transporter wizard finished with 0x%x [%s]",param_2,uVar1);
  *(int *)(param_1 + 0xe) = param_2;
  if ((param_2 != 100) && ((char)param_1[7] == '\0')) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  lVar2 = 0;
  if ((param_1[5] != 0) && (lVar2 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar2 = param_1[6];
  }
  FUN_100990b70(&local_38,lVar2);
  QString::operator=((QString *)(param_1 + 0xc),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002625b6;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002625b6:
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Migrated vm path: [%s]",local_40 + *(long *)(local_40 + 0x10)
               );
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100262618;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100262618:
  if ((param_2 == 0) && (*(int *)(((QString *)(param_1 + 0xc))->field0_0x0 + 4) != 0)) {
    lVar2 = *param_1;
    uVar1 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = 0x80000009;
  }
  (**(code **)(lVar2 + 0xb0))(param_1,uVar1);
  return;
}

