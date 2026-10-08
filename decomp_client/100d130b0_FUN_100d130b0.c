
undefined1 FUN_100d130b0(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  QTextStream *pQVar2;
  ulong uVar3;
  uint *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  QTextStream local_50 [16];
  long local_40 [2];
  
  this = (QString *)(param_1 + 8);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(this,param_2);
  }
  QFile::QFile((QFile *)local_40,this);
  cVar1 = QFile::open((QFile *)local_40,0x12);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    QTextStream::QTextStream(local_50,(QIODevice *)local_40);
    puVar4 = *(uint **)(param_1 + 0x10);
    uVar3 = (ulong)puVar4[1];
    if (0 < (int)puVar4[1]) {
      puVar7 = (undefined8 *)(param_1 + 0x10);
      lVar8 = 0;
      lVar6 = 0;
      do {
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *puVar7 = puVar4;
          }
          else {
            FUN_100d13c20(puVar7,uVar3 & 0xffffffff,puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*puVar7;
          }
        }
        pQVar2 = (QTextStream *)
                 QTextStream::operator<<
                           (local_50,(QString *)((long)puVar4 + lVar8 + *(long *)(puVar4 + 4)));
        pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2," = ");
        puVar4 = (uint *)*puVar7;
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *puVar7 = puVar4;
          }
          else {
            FUN_100d13c20(puVar7,puVar4[1],puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*puVar7;
          }
        }
        pQVar2 = (QTextStream *)
                 QTextStream::operator<<
                           (pQVar2,(QString *)((long)puVar4 + lVar8 + 8 + *(long *)(puVar4 + 4)));
        endl(pQVar2);
        lVar6 = lVar6 + 1;
        puVar4 = (uint *)*puVar7;
        uVar3 = (ulong)(int)puVar4[1];
        lVar8 = lVar8 + 0x10;
      } while (lVar6 < (long)uVar3);
    }
    puVar4 = *(uint **)(param_1 + 0x18);
    uVar3 = (ulong)puVar4[1];
    if (0 < (int)puVar4[1]) {
      puVar7 = (undefined8 *)(param_1 + 0x18);
      lVar6 = 0;
      do {
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar7 = puVar4;
          }
          else {
            FUN_100d14250(puVar7,uVar3,puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*puVar7;
          }
        }
        FUN_100d13600(*(undefined8 *)((long)puVar4 + lVar6 * 8 + *(long *)(puVar4 + 4)),local_50);
        lVar6 = lVar6 + 1;
        puVar4 = (uint *)*puVar7;
        uVar3 = (ulong)(int)puVar4[1];
      } while (lVar6 < (long)uVar3);
    }
    QFileDevice::flush();
    (**(code **)(local_40[0] + 0x70))(local_40);
    uVar5 = 1;
    QTextStream::~QTextStream(local_50);
  }
  QFile::~QFile((QFile *)local_40);
  return uVar5;
}

