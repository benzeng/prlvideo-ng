
ulong FUN_100060020(long *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  QString *pQVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  QString local_50;
  QTypedArrayData<unsigned_short> *local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar10 = *param_1;
  iVar1 = *(int *)(lVar10 + 0xc);
  iVar2 = *(int *)(lVar10 + 8);
  if ((param_3 < 0) && (param_3 = (iVar1 - iVar2) + param_3, param_3 < 0)) {
    param_3 = 0;
  }
  uVar6 = 0xffffffff;
  if (param_3 < iVar1 - iVar2) {
    lVar7 = (long)iVar2 + (long)(param_3 + -1);
    lVar10 = lVar10 + 0x10 + lVar7 * 8;
    lVar7 = (long)iVar1 * 8 + -8 + lVar7 * -8;
    do {
      if (lVar7 == 0) {
        return 0xffffffff;
      }
      pQVar3 = *(QString **)(lVar10 + 8);
      local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_48 = (QTypedArrayData<unsigned_short> *)param_2[1];
      local_40 = (Data *)param_2[2];
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 == 0) {
          QListData::detach((int)&local_40);
          lVar8 = (long)*(int *)(local_40 + 8);
          lVar4 = param_2[2];
          if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_40 + lVar8 * 8) &&
             (lVar9 = *(int *)(local_40 + 0xc) - lVar8,
             lVar9 != 0 && lVar8 <= *(int *)(local_40 + 0xc))) {
            _memcpy(local_40 + lVar8 * 8 + 0x10,
                    (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar9 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
      }
      local_48 = (QTypedArrayData<unsigned_short> *)param_2[1];
      if (pQVar3[1].field0_0x0 == local_48) {
        cVar5 = operator==(pQVar3,&local_50);
      }
      else {
        cVar5 = '\0';
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100060184;
        }
        QListData::dispose(local_40);
      }
LAB_100060184:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000601b4;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1000601b4:
      lVar10 = lVar10 + 8;
      lVar7 = lVar7 + -8;
    } while (cVar5 == '\0');
    uVar6 = lVar10 - (*param_1 + 0x10 + (ulong)*(uint *)(*param_1 + 8) * 8) >> 3 & 0xffffffff;
  }
  return uVar6;
}

