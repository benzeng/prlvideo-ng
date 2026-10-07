
undefined1
FUN_1006d65e0(QString *param_1,uint param_2,QByteArray *param_3,char param_4,char param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  QFile::QFile((QFile *)local_48,param_1);
  cVar2 = QFile::open((QFile *)local_48,1);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1006d6873;
  }
  if ((param_4 != '\0') && (lVar3 = QFile::size(), (long)(ulong)param_2 < lVar3)) {
    pcVar1 = *(code **)(local_48[0] + 0x88);
    lVar3 = QFile::size();
    (*pcVar1)(local_48,lVar3 - (ulong)param_2);
  }
  QIODevice::read((longlong)&local_50);
  QByteArray::operator=(param_3,(QByteArray *)&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006d66af;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1006d66af:
  if (param_5 != '\0') {
    pcVar5 = (char *)(*(long *)param_3 + *(long *)(*(long *)param_3 + 0x10));
    if (pcVar5 != (char *)0x0) {
      _strlen(pcVar5);
    }
    QString::fromUtf8_helper((char *)&local_60,(int)pcVar5);
    QString::normalized(&local_58,&local_60,1,0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d6721;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1006d6721:
    uVar7 = *(uint *)(local_58 + 4);
    if (0 < (int)uVar7) {
      lVar3 = 0;
      pQVar8 = local_58;
      do {
        uVar6 = 0;
        if (lVar3 < (int)*(uint *)(pQVar8 + 4)) {
          uVar6 = (uint)*(ushort *)(pQVar8 + lVar3 * 2 + *(long *)(pQVar8 + 0x10));
        }
        cVar2 = QChar::isPrint(uVar6);
        if (((cVar2 == '\0') &&
            (((int)*(uint *)(pQVar8 + 4) <= lVar3 ||
             (*(short *)(pQVar8 + lVar3 * 2 + *(long *)(pQVar8 + 0x10)) != 10)))) &&
           (((int)*(uint *)(pQVar8 + 4) <= lVar3 ||
            (*(short *)(pQVar8 + lVar3 * 2 + *(long *)(pQVar8 + 0x10)) != 0xd)))) {
          if (lVar3 < (int)uVar7) {
            if ((1 < *(uint *)pQVar8) || (*(long *)(pQVar8 + 0x10) != 0x18)) {
              QString::reallocData((uint)&local_58,(bool)((char)uVar7 + '\x01'));
            }
          }
          else {
            QString::expand((uint)&local_58);
          }
          *(undefined2 *)(local_58 + lVar3 * 2 + *(long *)(local_58 + 0x10)) = 0x3f;
          uVar7 = *(uint *)(local_58 + 4);
          pQVar8 = local_58;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)uVar7);
    }
    QString::toUtf8();
    QByteArray::operator=(param_3,(QByteArray *)&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d6833;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1006d6833:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006d6863;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1006d6863:
  uVar4 = 1;
  (**(code **)(local_48[0] + 0x70))(local_48);
LAB_1006d6873:
  QFile::~QFile((QFile *)local_48);
  return uVar4;
}

