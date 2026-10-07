
void FUN_1003f81d0(undefined8 *param_1,QTextStream *param_2)

{
  long lVar1;
  uint *puVar2;
  QTextStream *pQVar3;
  undefined8 uVar4;
  QString *pQVar5;
  ulong uVar6;
  long lVar7;
  QArrayData *local_40;
  undefined1 local_32;
  
  puVar2 = (uint *)*param_1;
  uVar6 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    lVar7 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(8,8,0,2);
          *param_1 = puVar2;
        }
        else {
          FUN_1003f83c0(param_1,uVar6,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*param_1;
        }
      }
      lVar1 = *(long *)((long)puVar2 + lVar7 * 8 + *(long *)(puVar2 + 4));
      pQVar5 = (QString *)0x0;
      if (lVar1 != 0) {
        pQVar5 = *(QString **)(lVar1 + 0x10);
      }
      pQVar3 = (QTextStream *)QTextStream::operator<<(param_2,pQVar5);
      pQVar3 = (QTextStream *)QTextStream::operator<<(pQVar3," = ");
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          uVar4 = QArrayData::allocate(8,8,0);
          *param_1 = uVar4;
        }
        else {
          FUN_1003f83c0(param_1,puVar2[1],puVar2[2] & 0x7fffffff,0);
        }
      }
      QString::toUtf8();
      if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
      }
      pQVar3 = (QTextStream *)
               QTextStream::operator<<(pQVar3,(char *)(local_40 + *(long *)(local_40 + 0x10)));
      endl(pQVar3);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_32 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_1003f834f;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1003f834f:
      lVar7 = lVar7 + 1;
      puVar2 = (uint *)*param_1;
      uVar6 = (ulong)(int)puVar2[1];
    } while (lVar7 < (long)uVar6);
  }
  return;
}

