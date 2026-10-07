
undefined1
FUN_100761080(undefined8 param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
             int param_6,uint param_7)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined1 uVar4;
  ulong in_stack_ffffffffffffff98;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  FUN_100761480(local_40);
  if (param_6 != 1) {
    uVar4 = 0;
    FUN_1008e3970("","dbgdump",0,
                  "Requested dump type is not supported. Mach-O format supports only full dumps");
    goto LAB_1007612ca;
  }
  QString::toUtf8();
  cVar2 = FUN_100761540(local_40,local_48 + *(long *)(local_48 + 0x10),0,0,0,0,
                        in_stack_ffffffffffffff98 & 0xffffffff00000000);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076111a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10076111a:
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dbgdump",0,"Error opening output file %s",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar4 = 0;
          goto LAB_1007612ca;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      uVar4 = 0;
    }
    goto LAB_1007612ca;
  }
  QString::toUtf8();
  iVar1 = *(int *)(param_4 + 0x18);
  if (iVar1 == 3) {
    pcVar3 = "EM64";
  }
  else if (iVar1 == 2) {
    pcVar3 = "PAE";
  }
  else {
    pcVar3 = "unknown";
    if (iVar1 == 1) {
      pcVar3 = "legacy";
    }
  }
  FUN_1008e3970("","dbgdump",0,"converting to %s, cr3=0x%llx %s paging",
                local_58 + *(long *)(local_58 + 0x10),
                *(undefined8 *)(param_3 + 0x90 + (ulong)param_7 * 0x768),pcVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100761260;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100761260:
  cVar2 = FUN_100760ef0(param_1,local_40,param_3,param_4,param_2,param_7);
  if (cVar2 == '\0') {
    FUN_1008e3970("","dbgdump",0,"WriteMachODump failed");
    FUN_1007614d0(local_40);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    FUN_1007614d0(local_40);
  }
LAB_1007612ca:
  FUN_100761500(local_40);
  return uVar4;
}

