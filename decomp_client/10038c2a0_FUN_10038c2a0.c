
void FUN_10038c2a0(long param_1)

{
  QPixmap *pQVar1;
  char cVar2;
  char *pcVar3;
  QArrayData *local_40;
  QPixmap local_38 [39];
  undefined1 local_11;
  
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x38);
  cVar2 = QAbstractButton::isChecked();
  pcVar3 = ":/images/mirrored_off.png";
  if (cVar2 != '\0') {
    pcVar3 = ":/images/mirrored_on.png";
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar3,cVar2 == '\0' | 0x18);
  QPixmap::QPixmap(local_38,&local_40,0,0);
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

