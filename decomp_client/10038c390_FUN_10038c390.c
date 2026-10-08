
void FUN_10038c390(long param_1)

{
  QPixmap *pQVar1;
  uint uVar2;
  char *pcVar3;
  QArrayData *local_40;
  QPixmap local_38 [39];
  undefined1 local_11;
  
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0xe0);
  uVar2 = QGuiApplication::keyboardModifiers();
  pcVar3 = ":/images/alt_key.png";
  if ((uVar2 & 0x8000000) != 0) {
    pcVar3 = ":/images/alt_key_pressed.png";
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar3,((uVar2 & 0x8000000) >> 0x18) + 0x14);
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

