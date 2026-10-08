
undefined1 FUN_100092b60(long param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  QUrl *this;
  undefined1 uVar7;
  QUrl local_60 [8];
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 0;
  }
  uVar4 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018d860(&local_48,uVar4);
  QDir::toNativeSeparators(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100092be3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100092be3:
  uVar3 = QDir::separator();
  cVar2 = QString::endsWith(&local_40,uVar3,1);
  if (cVar2 != '\0') {
    QString::chop((int)&local_40);
  }
  QMimeData::urls();
  uVar5 = (ulong)*(uint *)(local_50 + 8);
  uVar7 = 1;
  if ((int)*(uint *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
    lVar6 = 0;
    do {
      QUrl::QUrl(local_60,(QUrl *)(local_50 + ((int)uVar5 + lVar6) * 8 + 0x10));
      MacUtils::localPathForUrl((QUrl *)&local_58);
      QUrl::~QUrl(local_60);
      cVar2 = '\x01';
      if (*(int *)(local_58 + 4) != 0) {
        cVar2 = operator==((QString *)&local_58,&local_40);
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092cb5;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100092cb5:
      if (cVar2 != '\0') {
        uVar7 = 0;
        break;
      }
      lVar6 = lVar6 + 1;
      uVar5 = (ulong)*(int *)(local_50 + 8);
    } while (lVar6 < (long)((long)*(int *)(local_50 + 0xc) - uVar5));
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100092d5a;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      this = (QUrl *)(local_50 + (long)iVar1 * 8 + 8);
      do {
        QUrl::~QUrl(this);
        this = this + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100092d5a:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

