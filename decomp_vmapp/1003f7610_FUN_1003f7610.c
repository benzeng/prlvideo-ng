
undefined1 FUN_1003f7610(QString *param_1,QString *param_2)

{
  char cVar1;
  QTextStream *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  QTextStream local_58 [16];
  long local_48 [2];
  QFileInfo local_38 [8];
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(param_1,param_2);
  }
  QFileInfo::QFileInfo(local_38,param_1);
  cVar1 = QFileInfo::isFile();
  QFileInfo::~QFileInfo(local_38);
  if (cVar1 == '\0') {
    FUN_1008e3970("","ConfigConverter",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "QFileInfo(m_sConfig).isFile()","ConfigFile.cpp",200,"saveConfig");
  }
  QFile::QFile((QFile *)local_48,param_1);
  cVar1 = QFile::open((QFile *)local_48,0x12);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    QTextStream::QTextStream(local_58,(QIODevice *)local_48);
    if (0 < *(int *)(param_1[1].field0_0x0 + 4)) {
      param_1 = param_1 + 1;
      lVar7 = 0;
      do {
        pQVar2 = (QTextStream *)QTextStream::operator<<(local_58,"[");
        pQVar3 = param_1->field0_0x0;
        if (1 < *(uint *)pQVar3) {
          if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) == 0) {
            pQVar3 = (QTypedArrayData<unsigned_short> *)QArrayData::allocate(8,8,0,2);
            param_1->field0_0x0 = pQVar3;
          }
          else {
            FUN_1003f8c60(param_1,*(uint *)(pQVar3 + 4),*(uint *)(pQVar3 + 8) & 0x7fffffff,0);
            pQVar3 = param_1->field0_0x0;
          }
        }
        lVar5 = 0;
        if (*(long *)(pQVar3 + lVar7 * 8 + *(long *)(pQVar3 + 0x10)) != 0) {
          lVar5 = *(long *)(*(long *)(pQVar3 + lVar7 * 8 + *(long *)(pQVar3 + 0x10)) + 0x10);
        }
        pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,(QString *)(lVar5 + 8));
        pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,"]");
        endl(pQVar2);
        pQVar3 = param_1->field0_0x0;
        if (1 < *(uint *)pQVar3) {
          if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) == 0) {
            pQVar3 = (QTypedArrayData<unsigned_short> *)QArrayData::allocate(8,8,0,2);
            param_1->field0_0x0 = pQVar3;
          }
          else {
            FUN_1003f8c60(param_1,*(uint *)(pQVar3 + 4),*(uint *)(pQVar3 + 8) & 0x7fffffff,0);
            pQVar3 = param_1->field0_0x0;
          }
        }
        uVar6 = 0;
        if (*(long *)(pQVar3 + lVar7 * 8 + *(long *)(pQVar3 + 0x10)) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(pQVar3 + lVar7 * 8 + *(long *)(pQVar3 + 0x10)) + 0x10);
        }
        FUN_1003f81d0(uVar6,local_58);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1->field0_0x0 + 4));
    }
    QFileDevice::flush();
    (**(code **)(local_48[0] + 0x70))(local_48);
    uVar4 = 1;
    QTextStream::~QTextStream(local_58);
  }
  QFile::~QFile((QFile *)local_48);
  return uVar4;
}

