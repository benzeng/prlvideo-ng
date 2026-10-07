
void FUN_100574e40(long param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar7;
  undefined4 uVar8;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  param_2 = param_2 & 0xffffffff;
  uVar5 = *(long *)(param_1 + 0x58) + param_2;
  *(ulong *)(param_1 + 0x58) = uVar5;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x1398) != 0) {
    plVar1 = (long *)(*(long *)(lVar3 + 0x1398) + 0xf0);
    *plVar1 = *plVar1 + param_2;
  }
  if (*(long *)(lVar3 + 0x13a0) != 0) {
    plVar1 = (long *)(*(long *)(lVar3 + 0x13a0) + 0xf0);
    *plVar1 = *plVar1 + param_2;
  }
  if (DAT_1011cc9b8 == 0) {
    return;
  }
  if (uVar5 <= DAT_1011cc9b8) {
    return;
  }
  if (3 < DAT_1011b55f8) {
    QString::toUtf8();
    iVar4 = *(int *)(param_1 + 0x30);
    if ((long)iVar4 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar4 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar4];
    }
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] After-TRIM Start: state [%s], trim count %llu",
                  lVar3,local_30 + *(long *)(local_30 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar6
                  ,uVar7);
    uVar8 = (undefined4)((ulong)uVar7 >> 0x20);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_100574f5f;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_100574f5f:
  iVar4 = FUN_100575b80(*(undefined8 *)(param_1 + 0x20));
  if (iVar4 < 0) {
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] After-TRIM Start: state [%s], err = 0x%X",uVar7,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar6,
                  CONCAT44(uVar8,iVar4));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_40,1,8);
    return;
  }
  if (2 < DAT_1011b55f8) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar4 = *(int *)(param_1 + 0x30);
    if ((long)iVar4 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar4 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar4];
    }
    FUN_1008e3970("Compact","vdisk",3,
                  "[%p]%s[%zu] After-TRIM Start: state [%s], trim count %llu > %llu",uVar7,
                  local_38 + *(long *)(local_38 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar6,
                  *(undefined8 *)(param_1 + 0x58),DAT_1011cc9b8);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10057508c;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10057508c:
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x13a0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0xf0) = 0;
  }
  return;
}

