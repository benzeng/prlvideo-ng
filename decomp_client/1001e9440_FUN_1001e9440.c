
bool FUN_1001e9440(QString *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  bool bVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  char local_31;
  QFile local_30 [23];
  undefined1 local_19;
  
  QFile::QFile(local_30,param_1);
  cVar1 = QFile::open(local_30,1);
  if (cVar1 == '\0') {
    bVar5 = false;
    goto LAB_1001e9536;
  }
  QIODevice::read((longlong)&local_48);
  lVar3 = 0;
  pQVar4 = local_48 + *(long *)(local_48 + 0x10);
  if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
    lVar3 = 0;
    do {
      if (pQVar4[lVar3] == (QArrayData)0x0) break;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(local_48 + 4));
  }
  local_40 = (QArrayData *)QString::fromAscii_helper((char *)pQVar4,(int)lVar3);
  uVar2 = QString::toLongLong((bool *)&local_40,(int)&local_31);
  *param_2 = uVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001e94fb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001e94fb:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001e952b;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1001e952b:
  bVar5 = local_31 != '\0';
LAB_1001e9536:
  QFile::~QFile(local_30);
  return bVar5;
}

