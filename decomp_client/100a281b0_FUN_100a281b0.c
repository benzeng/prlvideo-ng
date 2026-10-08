
void FUN_100a281b0(long param_1,QString *param_2,char param_3)

{
  QString *this;
  QString QVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  QString local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  this = (QString *)(param_1 + 0x58);
  if (param_3 != '\0') {
    cVar2 = operator==(this,param_2);
    if (cVar2 == '\0') {
      QString::operator=(&local_38,(QString *)(param_1 + 0x28));
      QString::operator=(this,param_2);
    }
    goto LAB_100a28324;
  }
  cVar2 = operator==(this,(QString *)(param_1 + 0x28));
  if (cVar2 != '\0') goto LAB_100a28324;
  QString::operator=(&local_38,param_2);
  QString::operator=(this,(QString *)(param_1 + 0x28));
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,&local_38);
  if ((lVar5 == 0) || (iVar3 = FUN_10018f860(lVar5), iVar3 != 9)) goto LAB_100a28324;
  puVar6 = operator_new(0x88);
  QVar1.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_2e = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined8 *)(puVar6 + 8) = 0;
  FUN_100a332c0(puVar6 + 0x10,9,0,0,0,0);
  *(QTypedArrayData<unsigned_short> **)(puVar6 + 0x60) = QVar1.field0_0x0;
  iVar3 = *(int *)QVar1.field0_0x0;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + 1;
    local_2d = *(int *)QVar1.field0_0x0 != 0;
    UNLOCK();
    iVar3 = *(int *)QVar1.field0_0x0;
  }
  *(undefined1 **)(puVar6 + 0x70) = puVar6 + 0x70;
  *(undefined1 **)(puVar6 + 0x78) = puVar6 + 0x70;
  *(undefined8 *)(puVar6 + 0x80) = 0;
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_2c = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2c) goto LAB_100a28315;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_100a28315:
  FUN_100a2ae40(param_1 + 0x80,puVar6);
LAB_100a28324:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_2b = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

