
void FUN_1006c4050(QString *param_1,QString *param_2)

{
  QString local_70;
  QString local_68;
  QString local_60;
  undefined4 local_58;
  undefined1 local_54;
  QString local_50;
  QTypedArrayData<unsigned_short> *local_48;
  undefined2 local_40;
  undefined1 local_31;
  
  local_70.field0_0x0 = param_1->field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  local_68.field0_0x0 = param_1[1].field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  local_60.field0_0x0 = param_1[2].field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  local_54 = *(undefined1 *)((long)&param_1[3].field0_0x0 + 4);
  local_58 = *(undefined4 *)&param_1[3].field0_0x0;
  local_50.field0_0x0 = param_1[4].field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = *(undefined2 *)&param_1[6].field0_0x0;
  local_48 = param_1[5].field0_0x0;
  QString::operator=(param_1,param_2);
  QString::operator=(param_1 + 1,param_2 + 1);
  QString::operator=(param_1 + 2,param_2 + 2);
  *(undefined1 *)((long)&param_1[3].field0_0x0 + 4) =
       *(undefined1 *)((long)&param_2[3].field0_0x0 + 4);
  *(undefined4 *)&param_1[3].field0_0x0 = *(undefined4 *)&param_2[3].field0_0x0;
  QString::operator=(param_1 + 4,param_2 + 4);
  *(undefined2 *)&param_1[6].field0_0x0 = *(undefined2 *)&param_2[6].field0_0x0;
  param_1[5].field0_0x0 = param_2[5].field0_0x0;
  QString::operator=(param_2,&local_70);
  QString::operator=(param_2 + 1,&local_68);
  QString::operator=(param_2 + 2,&local_60);
  *(undefined1 *)((long)&param_2[3].field0_0x0 + 4) = local_54;
  *(undefined4 *)&param_2[3].field0_0x0 = local_58;
  QString::operator=(param_2 + 4,&local_50);
  *(undefined2 *)&param_2[6].field0_0x0 = local_40;
  param_2[5].field0_0x0 = local_48;
  FUN_10027a4b0(&local_70);
  return;
}

