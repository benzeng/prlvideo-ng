
undefined8 FUN_1004ad400(long param_1)

{
  uint uVar1;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  long local_30;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"State %d startInProgress %d stopInProgress %d",
                  *(undefined4 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x8c),
                  *(undefined1 *)(param_1 + 0x8d));
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((uVar1 & 0xfffffffe) == 2) {
    FUN_1004ad650(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((uVar1 & 0xfffffffe) == 2) {
    FUN_1004ada90(param_1,0xf0000000,1);
  }
  *(undefined2 *)(param_1 + 0x8c) = 0;
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x120),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ad503;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004ad503:
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                  "UNAVAILABLE");
  }
  local_30 = 0;
  FUN_1004b43e0(&local_30,9,0,0);
  if (local_30 != 0) {
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_48);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

