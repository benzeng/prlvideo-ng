
void FUN_100032ce0(long param_1,char param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  QString *pQVar6;
  ulong uVar7;
  long lVar8;
  QString local_50;
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  puVar4 = PTR_shared_null_100ba20d8;
  if (param_2 != '\0') {
    local_40 = PTR_shared_null_100ba20d8;
    FUN_100037480(param_1 + 0x90,&local_40);
    if (*(int *)puVar4 != -1) {
      if (*(int *)puVar4 != 0) {
        LOCK();
        *(int *)puVar4 = *(int *)puVar4 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100032d72;
      }
      if (*(long *)(puVar4 + 0x10) != 0) {
        FUN_100013720();
        QMapDataBase::freeTree((QMapNodeBase *)puVar4,(int)*(undefined8 *)(puVar4 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_100ba20d8);
    }
  }
LAB_100032d72:
  lVar5 = *param_3;
  uVar7 = (ulong)*(uint *)(lVar5 + 8);
  if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
    lVar1 = param_1 + 0x90;
    lVar8 = 0;
    do {
      local_48 = (QArrayData *)**(undefined8 **)(lVar5 + 0x10 + ((int)uVar7 + lVar8) * 8);
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        lVar5 = *param_3;
      }
      local_50.field0_0x0 =
           *(QTypedArrayData<unsigned_short> **)
            (*(long *)(lVar5 + 0x10 + (*(int *)(lVar5 + 8) + lVar8) * 8) + 8);
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        lVar5 = *param_3;
      }
      iVar2 = *(int *)(*(long *)(lVar5 + 0x10 + (*(int *)(lVar5 + 8) + lVar8) * 8) + 0x10);
      if (iVar2 == 0) {
        pQVar6 = (QString *)FUN_100037140(lVar1,&local_48);
        QString::operator=(pQVar6,&local_50);
      }
      else if (iVar2 == 1) {
        FUN_100037270(lVar1,&local_48);
      }
      else if (iVar2 == 2) {
        pQVar6 = (QString *)FUN_100037140(lVar1,&local_48);
        QString::operator=(pQVar6,&local_50);
      }
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100032e90;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100032e90:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100032ec0;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100032ec0:
      lVar8 = lVar8 + 1;
      lVar5 = *param_3;
      uVar7 = (ulong)*(int *)(lVar5 + 8);
    } while (lVar8 < (long)((long)*(int *)(lVar5 + 0xc) - uVar7));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.cmd not CMD_NONE");
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.currentCmd not CMD_NONE");
    }
    *(undefined4 *)(param_1 + 0x7c) = 4;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  param_4[1] = *(undefined8 *)(param_1 + 0x78);
  *param_4 = uVar3;
  QString::operator=((QString *)(param_4 + 2),(QString *)(param_1 + 0x80));
  *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 0x88);
  FUN_100037480(param_4 + 4,param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x70) = 0;
  QMutex::unlock();
  return;
}

