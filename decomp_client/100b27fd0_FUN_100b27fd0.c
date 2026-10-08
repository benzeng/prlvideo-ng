
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100b27fd0(QString *param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  QString *pQVar5;
  uint uVar6;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_59;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar2 = rdtsc();
  qsrand((uint)uVar2);
  iVar4 = qrand();
  puVar3 = PTR_shared_null_1021e1288;
  uVar6 = (int)((double)iVar4 / _DAT_101cdb7b8) + 0x10000000;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar5 = (QString *)QString::sprintf((char *)&local_68,"%08x",(ulong)uVar6);
  QString::operator=(param_1,pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_59 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100b28084;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b28084:
  FUN_100deb400(&local_48);
  FUN_100deb400(&local_58);
  local_70 = (QArrayData *)puVar3;
  pQVar5 = (QString *)
           QString::sprintf((char *)&local_70,"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                            (ulong)local_48 & 0xff,((ulong)local_48 & 0xff00) >> 8,
                            ((ulong)local_48 & 0xff0000) >> 0x10,(ulong)local_48._3_1_,
                            uStack_44 & 0xff,uStack_44 >> 8 & 0xff,uStack_44 >> 0x10 & 0xff,
                            uStack_44 >> 0x18,local_40 & 0xff,local_40 >> 8 & 0xff,
                            local_40 >> 0x10 & 0xff,local_40 >> 0x18);
  QString::operator=(param_2,pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_59 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100b28171;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b28171:
  QString::append(param_2);
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar5 = (QString *)
           QString::sprintf((char *)&local_78,
                            "%02x %02x %02x %02x %02x %02x %02x %02x-%02x %02x %02x %02x %02x %02x %02x %02x"
                            ,(ulong)local_58 & 0xff,(ulong)(local_58 >> 8 & 0xff),
                            ((ulong)local_58 & 0xff0000) >> 0x10,(ulong)local_58._3_1_,
                            uStack_54 & 0xff,uStack_54 >> 8 & 0xff,uStack_54 >> 0x10 & 0xff,
                            uStack_54 >> 0x18,local_50 & 0xff,local_50 >> 8 & 0xff,
                            (uint)(CONCAT44(uStack_4c,local_50) >> 0x10) & 0xff,local_50 >> 0x18,
                            uStack_4c & 0xff,uStack_4c >> 8 & 0xff,uStack_4c >> 0x10 & 0xff,
                            uStack_4c >> 0x18);
  QString::operator=(param_3,pQVar5);
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_59 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100b282ad;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b282ad:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

