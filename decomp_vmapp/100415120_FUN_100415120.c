
QByteArray * FUN_100415120(QByteArray *param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  QByteArray *pQVar6;
  undefined **ppuVar7;
  uint uVar8;
  ulong uVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray
            ((QByteArray *)&local_40,
             "<?xml version=\"1.0\"?><!DOCTYPE feature SYSTEM \"gdb-target.dtd\"><feature name=\"org.gnu.gdb.i386."
             ,-1);
  iVar3 = _strcmp(param_3,"core.xml");
  if (iVar3 == 0) {
    pcVar5 = (char *)QByteArray::append((char *)&local_40);
    QByteArray::append(pcVar5);
  }
  else {
    iVar3 = _strcmp(param_3,"sse.xml");
    if (iVar3 == 0) {
      pcVar5 = (char *)QByteArray::append((char *)&local_40);
      QByteArray::append(pcVar5);
    }
    else {
      iVar3 = _strcmp(param_3,"avx.xml");
      if (iVar3 != 0) {
        FUN_1008e3970("","gdbstub",0,"Incorrect feature requested \'%s\'",param_3);
        QByteArray::QByteArray(param_1,"",-1);
        goto LAB_1004154fa;
      }
      QByteArray::append((char *)&local_40);
    }
  }
  uVar8 = 0;
  do {
    uVar9 = (ulong)uVar8;
    if (param_2 - 1U < 2) {
      if (0x31 < uVar8) break;
      ppuVar7 = &PTR_s_eax_101119db0;
    }
    else {
      if (0x49 < uVar8) break;
      ppuVar7 = &PTR_s_rax_10111ad50;
    }
    iVar3 = *(int *)(ppuVar7 + uVar9 * 10 + 2);
    iVar1 = *(int *)(uVar9 * 0x50 + 0x14 + (long)ppuVar7);
    iVar2 = *(int *)(ppuVar7 + uVar9 * 10 + 9);
    iVar4 = _strcmp(param_3,ppuVar7[uVar9 * 10 + 8]);
    if (iVar4 == 0) {
      pcVar5 = (char *)QByteArray::append((char *)&local_40);
      pcVar5 = (char *)QByteArray::append(pcVar5);
      QByteArray::append(pcVar5);
      QByteArray::number((int)&local_48,iVar3 << 3);
      QByteArray::append((QByteArray *)&local_40);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100415345;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100415345:
      pcVar5 = (char *)QByteArray::append((char *)&local_40);
      pcVar5 = (char *)QByteArray::append(pcVar5);
      QByteArray::append(pcVar5);
      pQVar6 = (QByteArray *)QByteArray::append((char *)&local_40);
      QByteArray::number((int)&local_50,iVar1);
      pcVar5 = (char *)QByteArray::append(pQVar6);
      QByteArray::append(pcVar5);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004153de;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_1004153de:
      pcVar5 = (char *)QByteArray::append((char *)&local_40);
      pcVar5 = (char *)QByteArray::append(pcVar5);
      QByteArray::append(pcVar5);
      if (iVar2 != 0) {
        pQVar6 = (QByteArray *)QByteArray::append((char *)&local_40);
        QByteArray::number((int)&local_58,iVar2);
        pcVar5 = (char *)QByteArray::append(pQVar6);
        QByteArray::append(pcVar5);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10041547e;
          }
          QArrayData::deallocate(local_58,1,8);
        }
      }
LAB_10041547e:
      QByteArray::append((char *)&local_40);
    }
    uVar8 = uVar8 + 1;
  } while( true );
  QByteArray::append((char *)&local_40);
  *(QArrayData **)param_1 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
LAB_1004154fa:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return param_1;
}

