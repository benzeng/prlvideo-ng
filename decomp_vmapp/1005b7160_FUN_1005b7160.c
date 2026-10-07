
int FUN_1005b7160(long param_1,QString *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48 [2];
  undefined1 local_31;
  
  QFile::QFile((QFile *)local_48,param_2);
  uVar5 = 3;
  if (((param_3 & 2) == 0) && (uVar5 = (param_3 & 0x20) >> 4 | 1, (param_3 & 0x20) == 0)) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_1005b74b0(param_1,1000);
    bVar1 = true;
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"XML can\'t be locked");
      goto LAB_1005b73c7;
    }
  }
  cVar2 = QFile::exists();
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"XML [%s] not exists.",local_50 + *(long *)(local_50 + 0x10));
    iVar3 = -0x7ffdef9f;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b73ad;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    cVar2 = QFile::open(local_48,uVar5);
    if (cVar2 == '\0') {
      iVar3 = -0x7ffdefff;
      FUN_1008e3970("","vdisk",0,"XML can\'t be opened (mode=%u)",uVar5);
    }
    else {
      lVar4 = QFile::size();
      if (lVar4 < 0x200000) {
        iVar3 = 0;
        cVar2 = QDomDocument::setContent
                          ((QIODevice *)(param_1 + 0x20),local_48,(int *)0x0,(int *)0x0);
        if (cVar2 == '\0') {
          iVar3 = -0x7ffdeffe;
          FUN_1008e3970("","vdisk",0,"Error setting content!");
        }
      }
      else {
        QFile::fileName();
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"XML is too large [%s]",local_58 + *(long *)(local_58 + 0x10));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b726a;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1005b726a:
        iVar3 = -0x7ffdeffb;
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b73ad;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
    }
  }
LAB_1005b73ad:
  (**(code **)(local_48[0].field0_0x0 + 0x70))(local_48);
  if (bVar1) {
    FUN_1005b7cc0(param_1);
  }
LAB_1005b73c7:
  QFile::~QFile((QFile *)local_48);
  return iVar3;
}

