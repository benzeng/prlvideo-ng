
undefined1 FUN_1006d3580(QString *param_1,QString *param_2)

{
  char cVar1;
  QTextStream *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  undefined1 uVar4;
  long lVar5;
  QTextStream local_50 [16];
  long local_40 [2];
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(param_1,param_2);
  }
  QFile::QFile((QFile *)local_40,param_1);
  cVar1 = QFile::open((QFile *)local_40,0x12);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    QTextStream::QTextStream(local_50,(QIODevice *)local_40);
    if (0 < *(int *)(param_1[1].field0_0x0 + 4)) {
      param_1 = param_1 + 1;
      lVar5 = 0;
      do {
        pQVar2 = (QTextStream *)QTextStream::operator<<(local_50,"[");
        pQVar3 = param_1->field0_0x0;
        if (1 < *(uint *)pQVar3) {
          if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) == 0) {
            pQVar3 = (QTypedArrayData<unsigned_short> *)QArrayData::allocate(8,8,0,2);
            param_1->field0_0x0 = pQVar3;
          }
          else {
            FUN_1006d0870(param_1,*(uint *)(pQVar3 + 4),*(uint *)(pQVar3 + 8) & 0x7fffffff,0);
            pQVar3 = param_1->field0_0x0;
          }
        }
        pQVar2 = (QTextStream *)
                 QTextStream::operator<<
                           (pQVar2,(QString *)
                                   (*(long *)(pQVar3 + lVar5 * 8 + *(long *)(pQVar3 + 0x10)) + 8));
        pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,"]");
        endl(pQVar2);
        pQVar3 = param_1->field0_0x0;
        if (1 < *(uint *)pQVar3) {
          if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) == 0) {
            pQVar3 = (QTypedArrayData<unsigned_short> *)QArrayData::allocate(8,8,0,2);
            param_1->field0_0x0 = pQVar3;
          }
          else {
            FUN_1006d0870(param_1,*(uint *)(pQVar3 + 4),*(uint *)(pQVar3 + 8) & 0x7fffffff,0);
            pQVar3 = param_1->field0_0x0;
          }
        }
        FUN_1006d3b90(*(undefined8 *)(pQVar3 + lVar5 * 8 + *(long *)(pQVar3 + 0x10)),local_50);
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1->field0_0x0 + 4));
    }
    QFileDevice::flush();
    (**(code **)(local_40[0] + 0x70))(local_40);
    uVar4 = 1;
    QTextStream::~QTextStream(local_50);
  }
  QFile::~QFile((QFile *)local_40);
  return uVar4;
}

