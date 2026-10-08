
QByteArray * FUN_100d372f0(QByteArray *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  QArrayData *local_38;
  undefined1 local_2b;
  
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  do {
    FUN_100d37180((QByteArray *)&local_38,"0123456789",10,6);
    QByteArray::operator=(param_1,(QByteArray *)&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2b = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2b) goto LAB_100d37370;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100d37370:
    lVar6 = *(long *)param_1;
    if (*(int *)(lVar6 + 4) == 6) {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((((((byte)(*(char *)(lVar6 + lVar7) - 0x30U) < 10) &&
            (cVar1 = *(char *)(lVar7 + 1 + lVar6), (byte)(cVar1 - 0x30U) < 10)) &&
           (cVar2 = *(char *)(lVar7 + 2 + lVar6), (byte)(cVar2 - 0x30U) < 10)) &&
          ((cVar3 = *(char *)(lVar7 + 3 + lVar6), (byte)(cVar3 - 0x30U) < 10 &&
           (cVar4 = *(char *)(lVar7 + 4 + lVar6), (byte)(cVar4 - 0x30U) < 10)))) &&
         (cVar5 = *(char *)(lVar7 + 5 + lVar6), (byte)(cVar5 - 0x30U) < 10)) {
        if (*(char *)(lVar7 + 1 + lVar6) == cVar2) {
          bVar8 = *(char *)(lVar6 + lVar7) == cVar1 | 2;
        }
        else {
          bVar8 = 1;
        }
        if (bVar8 != 3) {
          if (*(char *)(lVar7 + 2 + lVar6) == cVar3) {
            bVar8 = bVar8 + 1;
          }
          else {
            bVar8 = 1;
          }
          if (((bVar8 < 3) &&
              ((cVar1 = *(char *)(lVar7 + 3 + lVar6), cVar1 != cVar4 || ((byte)(bVar8 + 1) < 3))))
             && ((*(char *)(lVar7 + 4 + lVar6) != cVar5 || (cVar1 != cVar4)))) {
            return param_1;
          }
        }
      }
    }
  } while( true );
}

