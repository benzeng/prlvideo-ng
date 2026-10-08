
ulong FUN_1003a0140(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int extraout_var;
  int extraout_var_00;
  QString local_38;
  QLocale local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
  if (iVar2 != 1) {
    iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (iVar2 == 2) {
      return 0x1ae;
    }
    iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (iVar2 == 3) {
      return 0x197;
    }
    iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if ((iVar2 == 4) || (iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2), iVar2 == 5)) {
      (**(code **)(*param_2 + 0x70))(param_2);
      return (ulong)(extraout_var + 6);
    }
    iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if ((iVar2 != 6) && (iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2), iVar2 != 7)) {
      return 0x168;
    }
    (**(code **)(*param_2 + 0x70))(param_2);
    return (ulong)(extraout_var_00 + 0xc);
  }
  QLocale::QLocale(local_30);
  QLocale::name();
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
  cVar1 = operator==(&local_28,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003a01db;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1003a01db:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003a020b;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1003a020b:
  QLocale::~QLocale(local_30);
  uVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar4 = uVar3 >> 0x20;
  if (cVar1 != '\0') {
    uVar4 = (ulong)((int)(uVar3 >> 0x20) + 0x10);
  }
  return uVar4;
}

