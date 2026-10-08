
uint FUN_1006af500(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  cVar1 = FUN_1001756c0(0x1e);
  if (cVar1 == '\0') {
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_48 = (QArrayData *)
             QString::fromAscii_helper("Application preferences/Show Develop Menu",0x29);
  QVariant::QVariant(&local_58,true);
  QSettings::value((QString *)&local_30,&local_40);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_30);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006af5b0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006af5b0:
  QSettings::~QSettings((QSettings *)&local_40);
  if (cVar1 != '\0') {
    iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
    uVar3 = iVar2 + 0xcffffffc;
    if (uVar3 < 10) {
      return CONCAT31((int3)(uVar3 >> 8),(char)(0x303 >> ((byte)uVar3 & 0x1f))) & 0xffffff01;
    }
  }
  return 0;
}

