
QUrl * FUN_1007e0d00(QUrl *param_1)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/ParallelsToolboxFinalPage.qml",0x26);
  QUrl::QUrl(param_1,&local_20,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

