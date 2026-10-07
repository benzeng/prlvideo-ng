
QString * FUN_1004d0450(QString *param_1,undefined8 *param_2,undefined8 param_3,QString *param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  long lVar4;
  QString QVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint local_9c;
  QString local_80;
  QString local_78;
  long *local_70;
  QArrayData *local_68;
  undefined1 local_59;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pQVar3 = param_4->field0_0x0;
  param_1->field0_0x0 = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_59 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if ((param_6 & 0x32) != 0) {
    puVar1 = param_2 + 1;
    local_9c = 1;
    do {
      puVar7 = (uint *)*puVar1;
      if (1 < *puVar7) {
        FUN_1004d6bf0(puVar1,puVar7[1]);
        puVar7 = (uint *)*puVar1;
      }
      puVar9 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
      while( true ) {
        if (1 < *puVar7) {
          FUN_1004d6bf0(puVar1,puVar7[1]);
          puVar7 = (uint *)*puVar1;
        }
        if (puVar9 == puVar7 + (long)(int)puVar7[3] * 2 + 4) goto LAB_1004d05cb;
        iVar6 = QString::compare(**(long **)puVar9 + 0x10,param_1,0);
        if (iVar6 == 0) break;
        puVar9 = puVar9 + 2;
        puVar7 = (uint *)*puVar1;
      }
      _sprintf(local_58,"-%d",(ulong)local_9c);
      QString::operator=(param_1,param_4);
      _strlen(local_58);
      QString::fromUtf8_helper((char *)&local_68,(int)local_58);
      QString::append(param_1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_59 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1004d04d0;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004d04d0:
      local_9c = local_9c + 1;
    } while( true );
  }
LAB_1004d05cb:
  plVar8 = operator_new(0x90);
  FUN_1004d7fc0(plVar8,param_3,param_1,param_5,*param_2,param_6,param_7);
  uVar10 = (undefined4)((ulong)param_7 >> 0x20);
  local_70 = plVar8;
  FUN_1004d6d80(param_2 + 1,&local_70);
  *(long *)(DAT_1011cc980 + 0xf0) = *(long *)(DAT_1011cc980 + 0xf0) + 1;
  if (DAT_1011b55f8 < 3) goto LAB_1004d0707;
  QString::toUtf8_helper(&local_78);
  QVar5.field0_0x0 = local_78.field0_0x0;
  lVar4 = *(long *)(local_78.field0_0x0 + 0x10);
  QString::toUtf8_helper(&local_80);
  FUN_1008e3970("","SharedFoldersHost",3,"folder added: \"%s\", \"%s\", ro=%d, auto=%d, global=%d",
                (QArrayData *)(QVar5.field0_0x0 + lVar4),
                (QArrayData *)(local_80.field0_0x0 + *(long *)(local_80.field0_0x0 + 0x10)),
                CONCAT44(uVar10,(uint)*(byte *)(plVar8 + 6)),*(undefined1 *)((long)plVar8 + 0x31),
                *(undefined1 *)((long)plVar8 + 0x32));
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_59 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1004d06d7;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
  }
LAB_1004d06d7:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_59 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1004d0707;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,1,8);
  }
LAB_1004d0707:
  LOCK();
  plVar2 = plVar8 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

