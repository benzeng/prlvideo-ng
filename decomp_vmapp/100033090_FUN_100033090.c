
void FUN_100033090(long param_1,long *param_2,long param_3)

{
  QString *this;
  QString *pQVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  QString local_40;
  undefined1 local_32;
  
  QMutex::lock();
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  this = (QString *)(param_1 + 0x58);
  QString::operator=(this,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10003310b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10003310b:
  lVar2 = *param_2;
  uVar3 = (ulong)*(uint *)(lVar2 + 8);
  lVar4 = 0;
  if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    do {
      pQVar1 = *(QString **)(lVar2 + 0x10 + ((int)uVar3 + lVar4) * 8);
      if (*(int *)&pQVar1[2].field0_0x0 == 3) {
        QString::operator=(this,pQVar1);
        lVar2 = *param_2;
      }
      lVar4 = lVar4 + 1;
      uVar3 = (ulong)*(int *)(lVar2 + 8);
    } while (lVar4 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_1000373c0(param_3,param_1 + 0x48);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x50);
  QString::operator=((QString *)(param_3 + 0x10),this);
  *(undefined1 *)(param_3 + 0x18) = *(undefined1 *)(param_1 + 0x60);
  FUN_100036f60(param_1 + 0x48);
  QMutex::unlock();
  return;
}

