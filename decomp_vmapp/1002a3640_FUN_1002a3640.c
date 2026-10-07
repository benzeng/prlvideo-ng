
void FUN_1002a3640(void)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_28;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar3;
  if ((int)DAT_101116268 < 0) {
    DAT_101116268 =
         (uint)(byte)(-(*(uint *)(DAT_1011c3698 + 0x5c0) < 0x80b) &
                     (*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x800);
    DAT_101116268 = FUN_1007da300("devices.acpi.vmgid",0);
  }
  if (((DAT_101116268 == 0) || (*(long *)(DAT_1011c3698 + 0x110) == 0)) ||
     (lVar6 = CVmConfiguration::getVmIdentification(), lVar6 == 0)) goto LAB_1002a37a5;
  CVmIdentification::getVmUuid();
  FUN_1007d6920(local_38,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002a3727;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002a3727:
  FUN_1007ea840(local_38,&local_48);
  iVar4 = _memcmp(&local_48,&DAT_100b378a8,0x10);
  if (iVar4 != 0) {
    lVar6 = *(long *)(DAT_1011c3698 + 0x1938);
    *(undefined8 *)(lVar6 + 0xa0c8) = local_40;
    *(undefined8 *)(lVar6 + 0xa0c0) = local_48;
    lVar6 = *(long *)(DAT_1011c3698 + 0x1938);
    uVar5 = *(uint *)(lVar6 + 0xa0bc);
    do {
      puVar1 = (uint *)(lVar6 + 0xa0bc);
      LOCK();
      uVar2 = *puVar1;
      bVar7 = uVar5 == uVar2;
      if (bVar7) {
        *puVar1 = uVar5 | 0x20;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      UNLOCK();
    } while (!bVar7);
    FUN_1000acd00(DAT_1011c3698,0x400000,1,1);
  }
LAB_1002a37a5:
  if (lVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

