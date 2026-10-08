
uint FUN_1001c9320(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pcVar2 = DAT_10230ff00;
  iVar7 = -1;
  if (DAT_10230ff00 != (char *)0x0) {
    sVar6 = _strlen(DAT_10230ff00);
    iVar7 = (int)sVar6;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  bVar4 = FUN_100df2570(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001c939a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001c939a:
  puVar3 = PTR_s___detach_opened_vm_10230ff08;
  iVar7 = -1;
  if (PTR_s___detach_opened_vm_10230ff08 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s___detach_opened_vm_10230ff08);
    iVar7 = (int)sVar6;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  cVar5 = FUN_100df2570(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001c9407;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001c9407:
  puVar3 = PTR_s___start_minimized_10230ff10;
  uVar8 = (uint)bVar4;
  if (cVar5 != '\0') {
    uVar8 = bVar4 + 4;
  }
  iVar7 = -1;
  if (PTR_s___start_minimized_10230ff10 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s___start_minimized_10230ff10);
    iVar7 = (int)sVar6;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  cVar5 = FUN_100df2570(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1001c947a;
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001c947a:
  uVar1 = uVar8 | 2;
  if (cVar5 == '\0') {
    uVar1 = uVar8;
  }
  return uVar1;
}

