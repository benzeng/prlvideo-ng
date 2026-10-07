
void FUN_1000357a0(long param_1,undefined4 param_2,QString *param_3)

{
  long lVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long local_58 [2];
  QArrayData *local_48;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  lVar1 = *(long *)(param_1 + 0x38);
  lVar4 = QThread::currentThread();
  if (lVar1 == lVar4) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("PRINTING_TOOL","vm",3,"processCommand (TG thread)");
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.cmd not CMD_NONE");
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1008e3970("PRINTING_TOOL","vm",0,"m_command.currentCmd not CMD_NONE");
    }
    *(undefined4 *)(param_1 + 0x78) = param_2;
    QString::operator=((QString *)(param_1 + 0x80),param_3);
    return;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"processCommand (not TG thread)");
  }
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_38 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  FUN_1000349c0(param_1,param_2,param_3,local_58);
  if (local_58[0] != 0) {
    cVar3 = FUN_1000356e0();
    uVar5 = 0xf000001c;
    if (cVar3 != '\0') {
      uVar5 = 0;
    }
    FUN_1004c07d0(param_1,local_58[0],uVar5);
  }
  pQVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100035894;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100035894:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

