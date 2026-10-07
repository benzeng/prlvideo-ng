
int FUN_100488f00(undefined8 param_1,QString *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  uint *local_50;
  uint *local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar1 = FUN_100494cc0(param_1,&local_48,&local_50,&local_54);
  if (iVar1 < 0) goto LAB_10048906f;
  if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(param_2,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100488f8c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100488f8c:
  if (local_48 < local_50) {
    puVar2 = local_48;
    do {
      if ((*puVar2 & param_3) != 0) {
        if (puVar2[1] == 0xffffffff) {
          _strlen((char *)(puVar2 + 2));
        }
        QString::fromUtf8_helper((char *)&local_68,(int)(puVar2 + 2));
        QString::normalized(&local_60,&local_68,1,0);
        QString::append(param_2);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048902d;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_10048902d:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048905d;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_10048905d:
      puVar2 = (uint *)((ulong)puVar2[1] + 8 + (long)puVar2);
    } while (puVar2 < local_50);
  }
LAB_10048906f:
  if ((local_54 != 0) && (local_48 != (uint *)0x0)) {
    _free(local_48);
  }
  return iVar1;
}

