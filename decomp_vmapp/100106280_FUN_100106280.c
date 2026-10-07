
undefined8 FUN_100106280(long *param_1,QByteArray *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 == 0) {
    pcVar7 = "!Error:  got null pointer < pCmdDispObj >";
  }
  else {
    cVar3 = QByteArray::isNull();
    if ((cVar3 == '\0') && (lVar2 = *param_1, *(int *)(lVar2 + 4) != 0)) {
      iVar1 = *(int *)(*(long *)(lVar2 + 0x10) + 8 + lVar2);
      if (iVar1 != 0x26) {
        if (iVar1 != 0) {
          return 0xfffffffb;
        }
        QByteArray::QByteArray((QByteArray *)&local_28,0x21,'\0');
        QByteArray::operator=(param_2,(QByteArray *)&local_28);
        if (*(int *)local_28 != -1) {
          if (*(int *)local_28 != 0) {
            LOCK();
            *(int *)local_28 = *(int *)local_28 + -1;
            local_19 = *(int *)local_28 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100106413;
          }
          QArrayData::deallocate(local_28,1,8);
        }
LAB_100106413:
        puVar5 = *(uint **)param_2;
        if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
          QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
          puVar5 = *(uint **)param_2;
        }
        lVar2 = *(long *)(puVar5 + 4);
        *(undefined4 *)(lVar2 + 0x14 + (long)puVar5) = 1;
        *(undefined4 *)(lVar2 + 0x10 + (long)puVar5) = 8;
        *(undefined4 *)(lVar2 + 0x18 + (long)puVar5) = 0x6774;
        return 0;
      }
      QByteArray::QByteArray((QByteArray *)&local_30,0x1d,'\0');
      QByteArray::operator=(param_2,(QByteArray *)&local_30);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100106316;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_100106316:
      puVar5 = *(uint **)param_2;
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = *(uint **)param_2;
      }
      lVar2 = *(long *)(puVar5 + 4);
      *(undefined4 *)(lVar2 + 0x14 + (long)puVar5) = 0;
      *(undefined4 *)(lVar2 + 0x10 + (long)puVar5) = 4;
      if (DAT_1011c3650 == 0) {
        uVar4 = 0xffff;
        uVar6 = 0xfffffff7;
      }
      else {
        uVar4 = FUN_100060640();
        *(undefined4 *)((long)puVar5 + lVar2 + 0x14) = 1;
        uVar6 = 0;
      }
      *(undefined4 *)(lVar2 + 0x18 + (long)puVar5) = uVar4;
      return uVar6;
    }
    pcVar7 = "!Error: got null or empty input data < inData >";
  }
  FUN_1008e3970("","vm",0,pcVar7);
  return 0xfffffff7;
}

