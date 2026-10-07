
void FUN_10057a630(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char *pcVar5;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar5 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar5 = "Disabled";
    }
    else {
      pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar5);
    uVar6 = (undefined4)((ulong)pcVar5 >> 0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_10057a705;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_10057a705:
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_2 < 0) {
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",0,"[%p]%s[%zu] Error %d (0x%X) TRUNCATE done in INVALID state",
                  lVar3,local_48 + *(long *)(local_48 + 0x10),*(undefined8 *)(param_1 + 0x28),
                  CONCAT44(uVar6,param_2),param_2);
    if (*(int *)local_48 == -1) goto LAB_10057a87d;
    local_50 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x00010057a7f7;
    }
  }
  else {
    cVar4 = FUN_100597080(*(undefined8 *)(*(long *)(lVar3 + 0x1128) + *(long *)(param_1 + 0x28) * 8)
                         );
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x30) = 7;
      FUN_100577e90(param_1);
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar5 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar5 = "Disabled";
      }
      else {
        pcVar5 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] TRUNCATE done (state [%s])",uVar2,
                    local_58 + *(long *)(local_58 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar5);
      if (*(int *)local_58 == -1) {
        return;
      }
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_58,1,8);
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",0,
                  "[%p]%s[%zu] File truncation failed. TRUNCATE done in INVALID state",uVar2,
                  local_50 + *(long *)(local_50 + 0x10),*(undefined8 *)(param_1 + 0x28));
    if (*(int *)local_50 == -1) goto LAB_10057a87d;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar1 = *(int *)local_50;
      UNLOCK();
joined_r0x00010057a7f7:
      if (iVar1 != 0) goto LAB_10057a87d;
    }
  }
  QArrayData::deallocate(local_50,1,8);
LAB_10057a87d:
  FUN_10057aa00(param_1);
  return;
}

