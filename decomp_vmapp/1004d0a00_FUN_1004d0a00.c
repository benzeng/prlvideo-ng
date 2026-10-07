
void FUN_1004d0a00(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  QString QVar5;
  char cVar6;
  uint *puVar7;
  bool bVar8;
  uint *puVar9;
  undefined1 local_68 [8];
  uint *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  bVar8 = true;
  plVar1 = param_1 + 1;
  puVar7 = (uint *)param_1[1];
  if (1 < *puVar7) {
    FUN_1004d6bf0(plVar1,puVar7[1]);
    puVar7 = (uint *)*plVar1;
  }
  puVar9 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
  do {
    if (1 < *puVar7) {
      FUN_1004d6bf0(plVar1,puVar7[1]);
      puVar7 = (uint *)*plVar1;
    }
    if (puVar9 == puVar7 + (long)(int)puVar7[3] * 2 + 4) goto LAB_1004d0d1f;
    plVar3 = (long *)**(long **)puVar9;
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    QString::toUpper_helper(&local_40);
    QString::toUpper_helper(&local_48);
    cVar6 = operator==(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d0b34;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1004d0b34:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d0b64;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1004d0b64:
    if (cVar6 != '\0') break;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    puVar9 = puVar9 + 2;
    puVar7 = (uint *)*plVar1;
  } while( true );
  if (DAT_1011b55f8 < 3) goto LAB_1004d0c83;
  QString::toUtf8_helper(&local_50);
  QVar5.field0_0x0 = local_50.field0_0x0;
  lVar4 = *(long *)(local_50.field0_0x0 + 0x10);
  QString::toUtf8_helper(&local_58);
  FUN_1008e3970("","SharedFoldersHost",3,"folder removed: \"%s\", \"%s\", ro=%d, auto=%d, global=%d"
                ,(QArrayData *)(QVar5.field0_0x0 + lVar4),
                (QArrayData *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10)),
                (char)plVar3[6],*(undefined1 *)((long)plVar3 + 0x31),
                *(undefined1 *)((long)plVar3 + 0x32));
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d0c53;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,1,8);
  }
LAB_1004d0c53:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d0c83;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,1,8);
  }
LAB_1004d0c83:
  local_60 = puVar9;
  FUN_1004d4dd0(local_68,plVar1,&local_60);
  *(long *)(DAT_1011cc980 + 0xf0) = *(long *)(DAT_1011cc980 + 0xf0) + -1;
  bVar8 = false;
  QMutex::unlock();
  FUN_1004d81e0(plVar3);
  FUN_1004d5770(*(undefined8 *)(*param_1 + 0xb0),0);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
LAB_1004d0d1f:
  if (bVar8) {
    QMutex::unlock();
  }
  return;
}

