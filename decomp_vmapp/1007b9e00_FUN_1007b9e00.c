
void FUN_1007b9e00(long param_1,QString *param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 local_28;
  
  local_28 = in_RAX;
  QMutex::lock();
  QString::operator=((QString *)(param_1 + 0xa8),param_2);
  QByteArray::operator=((QByteArray *)(param_1 + 0xb0),(QByteArray *)(param_2 + 1));
  QByteArray::operator=((QByteArray *)(param_1 + 0xb8),(QByteArray *)(param_2 + 2));
  if (*(QTypedArrayData<unsigned_short> **)(param_1 + 0xc0) != param_2[3].field0_0x0) {
    FUN_1007b77c0(&local_28,param_2 + 3);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = local_28;
    local_28 = uVar1;
    FUN_1007c4060(&local_28);
  }
  QMutex::unlock();
  return;
}

