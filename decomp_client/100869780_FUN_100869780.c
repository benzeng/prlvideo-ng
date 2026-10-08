
void FUN_100869780(undefined8 param_1,QDataStream *param_2)

{
  int iVar1;
  int iVar2;
  QArrayData *local_28;
  
  QString::toUtf8();
  iVar1 = *(int *)(local_28 + 4);
  QDataStream::operator<<(param_2,iVar1);
  if ((iVar1 != 0) &&
     (iVar2 = QDataStream::writeRawData
                        ((char *)param_2,(int)local_28 + (int)*(undefined8 *)(local_28 + 0x10)),
     iVar2 != iVar1)) {
    FUN_100df99c0("","prl_data_serializer",0,
                  "Fatal error on string serialization: attempted to write %u bytes but just %u were written"
                  ,iVar1);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

