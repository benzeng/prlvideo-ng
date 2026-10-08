
void FUN_1002f1ee0(QObject *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  int iVar4;
  QArrayData *local_38;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR_s_com_parallels_mobile_102271000;
  iVar4 = -1;
  if (PTR_s_com_parallels_mobile_102271000 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_com_parallels_mobile_102271000);
    iVar4 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  MacUtils::findAppWithIdentifier(&local_28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002f1f56;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002f1f56:
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"Parallels Access agent application is not found");
    if (*(int *)(param_1 + 0x88) + 1 == 3) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0x80000001);
    }
    else {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      QTimer::singleShot(500,param_1,"1retrievePaxBundlePath()");
    }
    goto LAB_1002f2049;
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Parallels Access agent installed to \'%s\'",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002f1fc7;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1002f1fc7:
  QString::operator=((QString *)(param_1 + 0x80),&local_28);
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0);
LAB_1002f2049:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

