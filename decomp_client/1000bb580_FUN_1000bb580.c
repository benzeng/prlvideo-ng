
int FUN_1000bb580(long *param_1,void *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int unaff_EBX;
  QVariant local_c0;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  undefined *local_70;
  int *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_29;
  
  if ((*(uint *)((long)param_2 + 0x10) & 1) == 0) {
    bVar2 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    goto LAB_1000bb795;
  }
  if ((*(uint *)((long)param_2 + 0x10) & 2) == 0) {
    local_b0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onLaunchAppAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant &)",
                          0x47);
    if (DAT_10226cd88 == 0) {
      DAT_10226cd88 = FUN_1000bf7f0("CSharedApps::LaunchAppData",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_c0,DAT_10226cd88,param_2,0);
    FUN_100a1c600(local_a8,param_1,&local_b0,&local_c0);
    QVariant::~QVariant(&local_c0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000bb66e;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1000bb66e:
    iVar3 = FUN_1000bafe0(param_1,local_a8,0,(long)param_2 + 8);
    if (iVar3 == -1) {
      unaff_EBX = -2;
LAB_1000bb74e:
      bVar1 = false;
    }
    else {
      if (iVar3 != 0) {
        if (iVar3 == 3) {
          *(byte *)((long)param_2 + 0x10) = *(byte *)((long)param_2 + 0x10) | 2;
          unaff_EBX = 1;
        }
        else {
          unaff_EBX = -1;
        }
        goto LAB_1000bb74e;
      }
      *(byte *)((long)param_2 + 0x10) = *(byte *)((long)param_2 + 0x10) | 2;
      bVar1 = true;
    }
    QVariant::~QVariant(local_88);
    if (local_a8[0] != (int *)0x0) {
      LOCK();
      *local_a8[0] = *local_a8[0] + -1;
      local_29 = *local_a8[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_a8[0] != (int *)0x0)) {
        operator_delete(local_a8[0]);
      }
    }
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  else {
    local_68 = (int *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    local_58 = 0;
    local_40 = 0x80000000;
    local_48.field7 = 0;
    local_38 = 1;
    local_70 = PTR_shared_null_1021e15e8;
    iVar3 = FUN_1000bafe0(param_1,&local_68,0xffffffff,&local_70);
    FUN_100039a80(&local_70);
    QVariant::~QVariant((QVariant *)&local_48);
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_29 = *local_68 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
        operator_delete(local_68);
      }
    }
    if (iVar3 != 0) {
      return 1;
    }
  }
  bVar2 = FUN_1000bad80(param_1,param_2);
LAB_1000bb795:
  return (int)((uint)(byte)~bVar2 << 0x1f) >> 0x1f;
}

