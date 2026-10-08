
undefined8 * FUN_100285470(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined4 local_40;
  undefined4 local_3c;
  QFileInfo local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_30 = (QArrayData *)QString::fromAscii_helper(".app",4);
  cVar1 = QString::endsWith((QString *)(param_2 + 0x80),&local_30,1);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    QFileInfo::QFileInfo(local_38,(QString *)(param_2 + 0x80));
    cVar1 = QFileInfo::isBundle();
    QFileInfo::~QFileInfo(local_38);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028554c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10028554c:
  if (cVar1 != '\0') {
    local_3c = 0;
    FUN_100129840(param_1,&local_3c);
  }
  local_40 = 1;
  FUN_100129840(param_1,&local_40);
  return param_1;
}

