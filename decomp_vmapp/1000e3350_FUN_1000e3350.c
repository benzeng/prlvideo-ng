
undefined8
FUN_1000e3350(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,void *param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_1007d6a70(&local_48);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e33cc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000e33cc:
  if (DAT_1011c3780 != (undefined8 *)0x0) {
    puVar2 = DAT_1011c3780;
    puVar6 = &DAT_1011c3780;
    do {
      while (puVar5 = puVar2, cVar3 = operator<((QString *)(puVar5 + 4),&local_40), cVar3 == '\0') {
        puVar6 = puVar5;
        puVar2 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_1000e3420;
      }
      puVar2 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
LAB_1000e3420:
    if (((undefined8 **)puVar6 != &DAT_1011c3780) &&
       (cVar3 = operator<(&local_40,(QString *)(puVar6 + 4)), cVar3 == '\0')) {
      iVar4 = *(int *)(puVar6[5] + 4);
      iVar1 = *param_5;
      *param_5 = iVar4;
      uVar8 = 0x80000006;
      if (iVar4 <= iVar1) {
        if (param_4 != (void *)0x0) {
          puVar2 = puVar6 + 5;
          puVar7 = (uint *)*puVar2;
          if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
            QByteArray::reallocData(puVar2,puVar7[1] + 1,puVar7[2] >> 0x1f);
            puVar7 = (uint *)*puVar2;
            iVar4 = *param_5;
          }
          _memcpy(param_4,(void *)((long)puVar7 + *(long *)(puVar7 + 4)),(long)iVar4);
        }
        uVar8 = 0;
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = *(undefined1 *)(puVar6 + 6);
        }
      }
      goto LAB_1000e344b;
    }
  }
  *param_5 = 0;
  uVar8 = 0x80000010;
LAB_1000e344b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

