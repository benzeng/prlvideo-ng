
void FUN_1000cfa70(long param_1,int param_2,QString *param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    return;
  }
  QMutex::lock();
  puVar8 = *(uint **)(param_1 + 0x58);
  uVar2 = puVar8[3];
  uVar3 = puVar8[2];
  if (0 < (int)((long)(int)uVar2 - (long)(int)uVar3)) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar9 = 0;
    while( true ) {
      if (1 < *puVar8) {
        FUN_1000e6e10(puVar1,puVar8[1]);
        puVar8 = (uint *)*puVar1;
      }
      lVar5 = *(long *)(puVar8 + ((int)puVar8[2] + lVar9) * 2 + 4);
      cVar7 = operator==((QString *)(lVar5 + 8),param_3);
      if (cVar7 != '\0') break;
      lVar9 = lVar9 + 1;
      if ((long)(int)uVar2 - (long)(int)uVar3 <= lVar9) goto LAB_1000cfcbc;
      puVar8 = (uint *)*puVar1;
    }
    if (lVar5 != 0) {
      QByteArray::QByteArray((QByteArray *)&local_40,0x10,'\0');
      lVar9 = *param_4;
      iVar4 = *(int *)(lVar9 + 8);
      if (iVar4 == *(int *)(lVar9 + 0xc)) goto LAB_1000cfc3e;
      plVar10 = (long *)(lVar9 + 0x10 + (long)iVar4 * 8);
      lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar4 * -8;
      goto LAB_1000cfb60;
    }
  }
  goto LAB_1000cfcbc;
LAB_1000cfb60:
  do {
    if (*(int *)(*plVar10 + 0x10) == 0) {
      QString::toUtf8();
      QByteArray::append((char *)&local_40);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000cfbb7;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1000cfbb7:
      QByteArray::append((char)&local_40);
      lVar6 = *(long *)(param_1 + 0x270);
      if (lVar6 != 0) {
        local_50 = *(QArrayData **)*plVar10;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        FUN_1000efb00(lVar6,&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000cfc30;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
    }
LAB_1000cfc30:
    plVar10 = plVar10 + 1;
    lVar9 = lVar9 + -8;
  } while (lVar9 != 0);
LAB_1000cfc3e:
  QByteArray::append((char)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_1000c4970(lVar5 + 0x30,0x94,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cfcbc;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000cfcbc:
  QMutex::unlock();
  return;
}

