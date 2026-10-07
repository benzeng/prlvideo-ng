
undefined8 FUN_10050fa80(int param_1,QString *param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  QString *this;
  uint *puVar3;
  uint *puVar4;
  QString *pQVar5;
  uint uVar6;
  int local_3c;
  QString local_38;
  undefined1 local_29;
  
  local_3c = param_1;
  QMutex::lock();
  if (1 < *DAT_1011bc2b0) {
    FUN_10050fe40(&DAT_1011bc2b0);
  }
  puVar1 = *(uint **)(DAT_1011bc2b0 + 4);
  puVar3 = (uint *)0x0;
  if (*(uint **)(DAT_1011bc2b0 + 4) == (uint *)0x0) {
LAB_10050fb1e:
    puVar4 = DAT_1011bc2b0 + 2;
  }
  else {
    do {
      while (puVar4 = puVar1, uVar6 = puVar4[6], param_1 <= (int)uVar6) {
        puVar1 = *(uint **)(puVar4 + 2);
        puVar3 = puVar4;
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_10050fb19;
      }
      puVar1 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    if (puVar3 == (uint *)0x0) goto LAB_10050fb1e;
    uVar6 = puVar3[6];
    puVar4 = puVar3;
LAB_10050fb19:
    if (param_1 < (int)uVar6) goto LAB_10050fb1e;
  }
  if (param_3 == '\0') {
    if (1 < *DAT_1011bc2b0) {
      FUN_10050fe40(&DAT_1011bc2b0);
    }
    if (puVar4 == DAT_1011bc2b0 + 2) goto LAB_10050fb57;
    pQVar5 = (QString *)(puVar4 + 8);
    this = param_2;
  }
  else {
LAB_10050fb57:
    cVar2 = FUN_10050f790(param_1,param_2,1);
    if (cVar2 == '\0') {
      if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
        local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        QString::operator=(param_2,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_29 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10050fb86;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
      goto LAB_10050fb86;
    }
    this = (QString *)FUN_10050fcb0(&DAT_1011bc2b0,&local_3c);
    pQVar5 = param_2;
  }
  QString::operator=(this,pQVar5);
LAB_10050fb86:
  QMutex::unlock();
  return CONCAT71((int7)((ulong)param_2->field0_0x0 >> 8),*(int *)(param_2->field0_0x0 + 4) != 0);
}

