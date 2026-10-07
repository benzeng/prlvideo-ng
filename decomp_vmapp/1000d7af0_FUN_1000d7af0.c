
undefined8 FUN_1000d7af0(long *param_1,QByteArray *param_2,QByteArray *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  
  lVar4 = *(long *)param_2;
  iVar14 = *(int *)(lVar4 + 4);
  if (iVar14 < 0x10) {
    return 0xfffffff8;
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  iVar3 = *(int *)(lVar5 + 8 + lVar4);
  uVar17 = 0xfffffffb;
  switch(iVar3) {
  case 0:
  case 5:
    QMutex::lock();
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
    if ((char)param_1[8] == '\0') {
      FUN_100430270(*(undefined8 *)(*param_1 + 0xf0));
    }
    goto LAB_1000d7b7c;
  case 1:
  case 6:
    QMutex::lock();
    *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
    if ((char)param_1[8] == '\0') {
      FUN_100430270(*(undefined8 *)(*param_1 + 0xf0));
    }
    QMutex::unlock();
    QByteArray::operator=(param_3,param_2);
    goto LAB_1000d7c2b;
  case 3:
    if (iVar14 < 0x1c) {
      return 0xfffffff8;
    }
    QByteArray::operator=(param_3,param_2);
    puVar11 = *(uint **)param_3;
    if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
      puVar11 = *(uint **)param_3;
    }
    *(undefined1 *)(*(long *)(puVar11 + 4) + 0x10 + (long)puVar11) = 1;
LAB_1000d7c2b:
    uVar10 = DAT_1011c3748;
    puVar11 = *(uint **)param_3;
    if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
      puVar11 = *(uint **)param_3;
    }
    *(undefined4 *)(*(long *)(puVar11 + 4) + 0x14 + (long)puVar11) = uVar10;
    uVar17 = 0;
    break;
  case 4:
  case 10:
    if (*(int *)(lVar4 + 4) < 0x28) {
      uVar17 = 0xfffffff8;
    }
    else if ((iVar3 == 4) &&
            (*(int *)(lVar4 + 4) <
             *(int *)(lVar4 + 0x20 + lVar5) * *(int *)(lVar4 + 0x24 + lVar5) * 4 + 0x28)) {
      uVar17 = 0xfffffff8;
    }
    else {
      uVar17 = 0xfffffff7;
      if ((*(uint *)(lVar4 + 0x20 + lVar5) < 0x81) && (*(uint *)(lVar4 + 0x24 + lVar5) < 0x81)) {
        QMutex::lock();
        piVar6 = (int *)param_1[5];
        if (piVar6 != (int *)0x0) {
          *piVar6 = *(int *)(lVar4 + 0x18 + lVar5) + *(int *)(lVar4 + 0x10 + lVar5);
          piVar6[1] = *(int *)(lVar4 + 0x1c + lVar5) + *(int *)(lVar4 + 0x14 + lVar5);
          piVar6[2] = *(int *)(lVar4 + 0x18 + lVar5);
          piVar6[3] = *(int *)(lVar4 + 0x1c + lVar5);
          piVar6[4] = *(int *)(lVar4 + 0x20 + lVar5);
          piVar6[5] = *(int *)(lVar4 + 0x24 + lVar5);
          puVar11 = (uint *)(piVar6 + 6);
          if (*(int *)(lVar4 + 8 + lVar5) == 4) {
            _memcpy(puVar11,(void *)(lVar4 + 0x28 + lVar5),
                    (ulong)(uint)(*(int *)(lVar4 + 0x20 + lVar5) * *(int *)(lVar4 + 0x24 + lVar5) *
                                 4));
          }
          else {
            uVar13 = *(int *)(lVar4 + 0x24 + lVar5) * *(int *)(lVar4 + 0x20 + lVar5);
            uVar19 = (long)*(int *)(*(long *)param_2 + 4) + 0x3ffffffd8U >> 2;
            iVar14 = (int)uVar19;
            bVar27 = iVar14 != 0;
            bVar28 = uVar13 != 0;
            if ((bVar28) && (iVar14 != 0)) {
              puVar26 = (uint *)(lVar4 + 0x28 + lVar5);
              puVar1 = puVar11 + uVar13;
              puVar21 = puVar11;
              do {
                uVar13 = *puVar26;
                uVar18 = (ulong)uVar13;
                if (uVar18 < 0x1000000) {
                  if (uVar13 < 0x100) {
                    puVar20 = puVar21 + uVar18 + 1;
                    if (puVar1 < puVar20) goto LAB_1000d8088;
                    ___bzero(puVar21,uVar18 * 4 + 4);
                  }
                  else {
                    uVar25 = (ulong)(uVar13 >> 8);
                    if (puVar21 + -uVar25 < puVar11) goto LAB_1000d8088;
                    uVar22 = (uint)(uVar18 & 0xff);
                    if (puVar1 < puVar21 + (uVar18 & 0xff) + 1) goto LAB_1000d8088;
                    lVar23 = (ulong)(uVar13 & 0xff) + 1;
                    lVar24 = lVar23 - ((ulong)(uVar13 + 1) & 7);
                    if ((lVar24 == 0) ||
                       ((puVar21 <= puVar21 + ((uVar13 & 0xff) - uVar25) &&
                        (puVar21 + -uVar25 <= puVar21 + (uVar13 & 0xff))))) {
                      lVar24 = 0;
                      puVar20 = puVar21;
                    }
                    else {
                      puVar20 = puVar21 + lVar24;
                      uVar22 = uVar22 - (int)lVar24;
                      puVar16 = puVar21 + 4;
                      lVar12 = ((ulong)(uVar13 & 0xff) + 1) - ((ulong)(byte)((char)uVar13 + 1) & 7);
                      do {
                        puVar2 = puVar16 + (-4 - uVar25);
                        uVar15 = puVar2[1];
                        uVar7 = puVar2[2];
                        uVar8 = puVar2[3];
                        uVar17 = *(undefined8 *)(puVar16 + -uVar25);
                        uVar9 = *(undefined8 *)(puVar16 + -uVar25 + 2);
                        puVar16[-4] = *puVar2;
                        puVar16[-3] = uVar15;
                        puVar16[-2] = uVar7;
                        puVar16[-1] = uVar8;
                        *(undefined8 *)puVar16 = uVar17;
                        *(undefined8 *)(puVar16 + 2) = uVar9;
                        puVar16 = puVar16 + 8;
                        lVar12 = lVar12 + -8;
                      } while (lVar12 != 0);
                    }
                    if (lVar23 != lVar24) {
                      uVar15 = uVar22;
                      if ((uVar22 + 1 & 3) != 0) {
                        iVar14 = -(uVar22 + 1 & 3);
                        do {
                          *puVar20 = puVar20[-uVar25];
                          puVar20 = puVar20 + 1;
                          uVar15 = uVar15 - 1;
                          iVar14 = iVar14 + 1;
                        } while (iVar14 != 0);
                      }
                      if (2 < uVar22) {
                        uVar15 = ~uVar15;
                        do {
                          *puVar20 = puVar20[-uVar25];
                          puVar20[1] = puVar20[1 - uVar25];
                          puVar20[2] = puVar20[2 - uVar25];
                          puVar20[3] = puVar20[3 - uVar25];
                          puVar20 = puVar20 + 4;
                          uVar15 = uVar15 + 4;
                        } while (uVar15 != 0);
                      }
                    }
                    puVar20 = puVar21 + (ulong)(uVar13 & 0xff) + 1;
                  }
                }
                else {
                  *puVar21 = uVar13;
                  puVar20 = puVar21 + 1;
                }
                puVar26 = puVar26 + 1;
                bVar28 = puVar20 < puVar1;
                bVar27 = puVar26 < (uint *)(lVar4 + lVar5 + 0x28 + (uVar19 & 0xffffffff) * 4);
              } while ((bVar27) && (puVar21 = puVar20, puVar20 < puVar1));
            }
            if ((bVar28) || (bVar27)) {
LAB_1000d8088:
              piVar6[5] = 0;
              piVar6[4] = 0;
              FUN_1000d7810(param_1);
              return 0xfffffff8;
            }
          }
          FUN_1000d7810(param_1);
          uVar17 = 0;
        }
      }
    }
    break;
  case 7:
    DAT_1011c374c = *(undefined4 *)(lVar5 + 0x14 + lVar4);
    uVar17 = 0;
    break;
  case 9:
    if (iVar14 < 0x18) {
      return 0xfffffff8;
    }
    uVar19 = *(ulong *)(lVar4 + 0x10 + lVar5);
    lVar23 = 0;
    if ((uVar19 & 7) == 0) {
      uVar18 = uVar19;
      if (0xafffffff < uVar19) {
        uVar18 = 0xffffffffffffffff;
        if (0xffffffff < uVar19) {
          uVar18 = uVar19 - 0x50000000;
        }
      }
      lVar23 = FUN_10008c320(DAT_1011c3688,uVar18,8,0,0);
    }
    QMutex::lock();
    if (((char)param_1[4] != '\0') && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
      uVar17 = *(undefined8 *)param_1[3];
      *(int *)param_1[5] = (int)uVar17;
      *(int *)(param_1[5] + 4) = (int)((ulong)uVar17 >> 0x20);
    }
    if ((param_1[3] != 0) && (uVar19 = param_1[2], uVar19 != 0xffffffffffffffff)) {
      uVar18 = uVar19;
      if (0xafffffff < uVar19) {
        uVar18 = 0xffffffffffffffff;
        if (0xffffffff < uVar19) {
          uVar18 = uVar19 - 0x50000000;
        }
      }
      FUN_10008c640(DAT_1011c3688,uVar18,8,0,0,0);
    }
    if (lVar23 == 0) {
      param_1[2] = -1;
      param_1[3] = 0;
      QMutex::unlock();
      return 0xfffffff9;
    }
    param_1[2] = *(long *)(lVar4 + 0x10 + lVar5);
    param_1[3] = lVar23;
LAB_1000d7b7c:
    QMutex::unlock();
    uVar17 = 0;
  }
  return uVar17;
}

