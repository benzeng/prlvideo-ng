
void FUN_100a49d90(QString *param_1)

{
  uint uVar1;
  QArrayData QVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (DAT_1023112b0 == '\0') {
    ___bzero(&DAT_1023112c0,0x400);
    uVar3 = 0;
    lVar4 = 0;
    do {
      (&DAT_1023112c0)
      [(long)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890-_.~!*\'();:@&=+$,/?%#[]"
             [lVar4] * 4] =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890-_.~!*\'();:@&=+$,/?%#[]"
           [lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x55);
    do {
      if ((&DAT_1023112c0)[uVar3 * 4] == '\0') {
        (&DAT_1023112c0)[uVar3 * 4] = 0x25;
        (&DAT_1023112c1)[uVar3 * 4] = "0123456789ABCDEF"[uVar3 >> 4 & 0xfffffff];
        (&DAT_1023112c2)[uVar3 * 4] = "0123456789ABCDEF"[uVar3 & 0xf];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
    DAT_1023112b0 = '\x01';
  }
  QString::toUtf8();
  uVar1 = *(uint *)(local_48 + 4);
  if (uVar1 == 0) {
LAB_100a49f12:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    return;
  }
  uVar6 = 1;
  do {
    if ((int)(uVar6 - 1) < *(int *)(local_48 + 4)) {
      QVar2 = local_48[(long)(int)(uVar6 - 1) + *(long *)(local_48 + 0x10)];
    }
    else {
      QVar2 = (QArrayData)0x0;
    }
    pcVar5 = &DAT_1023112c0 + (ulong)(byte)QVar2 * 4;
    if (pcVar5 != (char *)0x0) {
      _strlen(pcVar5);
    }
    QString::fromUtf8_helper((char *)&local_40,(int)pcVar5);
    QString::append(param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a49f05;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100a49f05:
    if (uVar1 <= uVar6) goto LAB_100a49f12;
    uVar6 = uVar6 + 1;
  } while( true );
}

