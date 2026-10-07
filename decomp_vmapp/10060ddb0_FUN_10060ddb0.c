
void FUN_10060ddb0(long *param_1)

{
  long lVar1;
  int iVar2;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_71;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  undefined4 local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_18 = lVar1;
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_60);
  if (iVar2 < 0) {
    FUN_1008e3970("","crypt",0,"Failed to dump engine info.");
    goto LAB_10060dfd0;
  }
  FUN_1007d6cd0(local_70,local_34);
  FUN_1008e3970("","crypt",0,"Engine information dump:");
  FUN_1008e3970("","crypt",0,"Description short: %s",local_50);
  FUN_1008e3970("","crypt",0,"Description long:  %s",local_48);
  FUN_1008e3970("","crypt",0,"Vendor:            %s",local_60);
  FUN_1008e3970("","crypt",0,"Copyright:         %s",local_58);
  FUN_1008e3970("","crypt",0,"Version:           %u.%u.%u",local_40,local_40 >> 0x20,local_38);
  FUN_1007d6a70(&local_88,local_70);
  QString::toLocal8Bit();
  FUN_1008e3970("","crypt",0,"Uid:               %s",local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_71 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_71) goto LAB_10060df31;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10060df31:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_71 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_71) goto LAB_10060df61;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10060df61:
  FUN_1008e3970("","crypt",0,"Key length:        %u",local_24);
  FUN_1008e3970("","crypt",0,"Block length:      %u",local_20);
LAB_10060dfd0:
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

