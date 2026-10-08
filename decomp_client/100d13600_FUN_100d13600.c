
void FUN_100d13600(long *param_1,QTextStream *param_2)

{
  QTextStream *pQVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (0 < *(int *)(*param_1 + 4)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      pQVar1 = (QTextStream *)QTextStream::operator<<(param_2,(QString *)(param_1 + 1));
      pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,".");
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *param_1 = (long)puVar2;
        }
        else {
          FUN_100d13c20(param_1,puVar2[1],puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*param_1;
        }
      }
      pQVar1 = (QTextStream *)
               QTextStream::operator<<
                         (pQVar1,(QString *)((long)puVar2 + lVar4 + *(long *)(puVar2 + 4)));
      pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1," = ");
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          lVar3 = QArrayData::allocate(0x10,8,0);
          *param_1 = lVar3;
        }
        else {
          FUN_100d13c20(param_1,puVar2[1],puVar2[2] & 0x7fffffff,0);
        }
      }
      QString::toUtf8();
      if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
      }
      pQVar1 = (QTextStream *)
               QTextStream::operator<<(pQVar1,(char *)(local_40 + *(long *)(local_40 + 0x10)));
      endl(pQVar1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_32 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_100d137a0;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100d137a0:
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < *(int *)(*param_1 + 4));
  }
  return;
}

