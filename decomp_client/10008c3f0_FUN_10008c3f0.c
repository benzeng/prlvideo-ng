
void FUN_10008c3f0(QPixmap *param_1,QPixmap *param_2)

{
  char cVar1;
  QArrayData *local_70;
  QPixmap local_68 [32];
  QArrayData *local_48;
  QPixmap local_40 [39];
  undefined1 local_19;
  
  cVar1 = QPixmap::isNull();
  if (cVar1 != '\0') {
    local_48 = (QArrayData *)QString::fromAscii_helper("invalid",7);
    FUN_10008c2a0(local_40,&local_48,0);
    QPixmap::operator=(param_1,local_40);
    QPixmap::~QPixmap(local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10008c473;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10008c473:
  cVar1 = QPixmap::isNull();
  if (cVar1 != '\0') {
    local_70 = (QArrayData *)QString::fromAscii_helper("invalid",7);
    FUN_10008c2a0(local_68,&local_70,1);
    QPixmap::operator=(param_2,local_68);
    QPixmap::~QPixmap(local_68);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  return;
}

