
void FUN_1000efb00(long param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  QString local_48;
  undefined1 local_40 [8];
  uint *local_38;
  undefined1 local_29;
  
  lVar6 = *(long *)(param_1 + 0x10);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  lVar5 = *(long *)(lVar6 + 0x30);
  plVar8 = (long *)(lVar6 + 0x30);
  iVar1 = *(int *)(lVar5 + 8);
  if (iVar1 < *(int *)(lVar5 + 0xc)) {
    lVar6 = lVar5 + 8 + (long)iVar1 * 8;
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (lVar5 == 0) goto LAB_1000efba1;
      cVar2 = operator==((QString *)(lVar6 + 8),&local_48);
      lVar6 = lVar6 + 8;
      lVar5 = lVar5 + -8;
    } while (cVar2 == '\0');
    uVar7 = lVar6 - (*plVar8 + 0x10 + (ulong)*(uint *)(*plVar8 + 8) * 8) >> 3;
    if ((int)uVar7 != -1) {
      FUN_100094da0(plVar8,uVar7 & 0xffffffff);
    }
  }
LAB_1000efba1:
  FUN_1000341d0(plVar8,&local_48);
  puVar3 = (uint *)*plVar8;
  uVar4 = puVar3[2];
  if (100 < (int)(puVar3[3] - uVar4)) {
    if (1 < *puVar3) {
      FUN_100036c40(plVar8,puVar3[1]);
      puVar3 = (uint *)*plVar8;
      uVar4 = puVar3[2];
    }
    local_38 = puVar3 + (long)(int)uVar4 * 2 + 4;
    FUN_1000557c0(local_40,plVar8,&local_38);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

