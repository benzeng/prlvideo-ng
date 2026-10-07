
void FUN_1002e97c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QString *pQVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_1002dbac0(param_1,param_2,0,&PTR_DAT_1011171e0,&PTR_DAT_1011171e0,0);
  *param_1 = &PTR_FUN_100bb5250;
  FUN_1002528b0();
  puVar4 = param_1 + 0xb;
  auVar7._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar7._0_8_ = PTR_shared_null_100ba2180;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar7;
  if (-1 < DAT_1011c568c) {
    local_58 = *(QArrayData **)(param_1[1] + 0x20);
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] Virtual BT constructed <%s>",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e98aa;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002e98aa:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e98da;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1002e98da:
  local_5c = 0x409;
  uVar1 = FUN_1002e4d40(param_1 + 6,&local_5c);
  local_60 = 4;
  pQVar2 = (QString *)FUN_1002e4ea0(uVar1,&local_60);
  QString::fromUtf8_helper((char *)&local_48,0xa1db0c);
  QString::operator=(pQVar2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e9958;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e9958:
  local_64 = 0x409;
  uVar1 = FUN_1002e4d40(param_1 + 6,&local_64);
  local_68 = 5;
  pQVar2 = (QString *)FUN_1002e4ea0(uVar1,&local_68);
  QString::fromUtf8_helper((char *)&local_40,0xa1db24);
  QString::operator=(pQVar2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e99d2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e99d2:
  puVar5 = &DAT_100bb5300;
  uVar6 = 0;
  do {
    puVar3 = (undefined8 *)FUN_1002ee1c0(param_1 + 10,puVar5);
    *puVar3 = puVar5;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 0x38;
  } while (uVar6 < 0x36);
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5ed0);
  *puVar3 = &DAT_100bb5ed0;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5ee0);
  *puVar3 = &DAT_100bb5ee0;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5ef0);
  *puVar3 = &DAT_100bb5ef0;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f00);
  *puVar3 = &DAT_100bb5f00;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f10);
  *puVar3 = &DAT_100bb5f10;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f20);
  *puVar3 = &DAT_100bb5f20;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f30);
  *puVar3 = &DAT_100bb5f30;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f40);
  *puVar3 = &DAT_100bb5f40;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f50);
  *puVar3 = &DAT_100bb5f50;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f60);
  *puVar3 = &DAT_100bb5f60;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f70);
  *puVar3 = &DAT_100bb5f70;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f80);
  *puVar3 = &DAT_100bb5f80;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5f90);
  *puVar3 = &DAT_100bb5f90;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5fa0);
  *puVar3 = &DAT_100bb5fa0;
  puVar3 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5fb0);
  *puVar3 = &DAT_100bb5fb0;
  puVar4 = (undefined8 *)FUN_1002ee340(puVar4,&DAT_100bb5fc0);
  *puVar4 = &DAT_100bb5fc0;
  ___bzero(param_1 + 0xd,0x100);
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((long)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_100252930(param_1 + 8);
  return;
}

