
void FUN_1007093b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  QString local_70;
  QString local_68 [2];
  QString local_58;
  QString local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar1 = param_1 + 0x18;
  FUN_1007141d0(lVar1);
  puVar3 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  local_78 = PTR_shared_null_1021e1288;
  local_80 = PTR_shared_null_1021e1288;
  local_88 = PTR_shared_null_1021e15e8;
  FUN_1005819a0(&local_70,&local_78,&local_80,&local_88);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_38[0] = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_100709443;
    }
    FUN_1005596c0(&local_88,puVar3 + (long)(int)*(long *)(puVar3 + 8) * 8 + 0x10,
                  puVar3 + (*(long *)(puVar3 + 8) >> 0x20) * 8 + 0x10);
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_100709443:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 == 0) {
LAB_100709460:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_38[0] = *(int *)puVar2 != 0;
      UNLOCK();
      if (!(bool)local_38[0]) goto LAB_100709460;
    }
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_38[0] = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_38[0]) goto LAB_1007094a9;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_1007094a9:
  FUN_100710490(&local_70);
  FUN_100581a70(lVar1,&local_70);
  FUN_100712630(&local_70);
  FUN_100581a70(lVar1,&local_70);
  FUN_100712fd0(&local_70);
  FUN_100581a70(lVar1,&local_70);
  FUN_100714cc0(&local_70);
  puVar2 = PTR_s_Generic_102274b58;
  if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
    _strlen(PTR_s_Generic_102274b58);
  }
  QString::fromUtf8_helper((char *)&local_50,(int)puVar2);
  QString::operator=(&local_70,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_38[0] = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_10070955a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10070955a:
  puVar2 = PTR_s_Generic_102274b58;
  if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
    _strlen(PTR_s_Generic_102274b58);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)puVar2);
  QString::operator=(local_68,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_38[0] = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_1007095bc;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007095bc:
  FUN_100581a70(lVar1,&local_70);
  FUN_1000fec30(&local_70);
  FUN_100708be0();
  local_90 = (QArrayData *)QString::fromAscii_helper("DEFAULTS",8);
  FUN_1007099c0(lVar1,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38[0] = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_100709633;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100709633:
  FUN_10070aaf0(param_1);
  FUN_10070b710(param_1);
  local_98 = (QArrayData *)QString::fromAscii_helper("AFTER LAOD",10);
  FUN_1007099c0(lVar1,&local_98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38[0] = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_1007096a0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007096a0:
  FUN_10070caf0(param_1);
  local_a0 = (QArrayData *)QString::fromAscii_helper("AFTER MERGE",0xb);
  FUN_1007099c0(lVar1,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38[0] = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_38[0]) goto LAB_100709705;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100709705:
  lVar1 = param_1 + 0x20;
  FUN_100713ea0(lVar1);
  FUN_10071be80(local_38,0x12000000,2,2);
  FUN_10055cf40(lVar1,local_38);
  FUN_10071be80(local_48,0x4000000,4,0);
  FUN_10055cf40(lVar1,local_48);
  FUN_10070d170(param_1);
  return;
}

