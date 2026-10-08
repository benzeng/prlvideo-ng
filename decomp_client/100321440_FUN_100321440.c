
void FUN_100321440(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100df99c0("","prl_client_app",0,"Tools installation stage changed");
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  local_30 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallStage.guest.cross",0x27)
  ;
  lVar3 = FUN_10032d8b0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003214c6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003214c6:
  iVar4 = 0;
  if (lVar3 != 0) {
    FUN_10032cd60(&local_38,lVar3,0);
    iVar4 = 0;
    if (0xf < *(uint *)(local_38 + 4)) {
      if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
      }
      iVar4 = 0;
      if (local_38 + *(long *)(local_38 + 0x10) != (QArrayData *)0x0) {
        iVar1 = *(int *)(local_38 + *(long *)(local_38 + 0x10));
        iVar4 = 1;
        if (iVar1 != 1) {
          if (iVar1 == 2) {
            iVar4 = 2;
          }
          else {
            iVar4 = (uint)(iVar1 == 3) + (uint)(iVar1 == 3) * 2;
          }
        }
      }
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10032156c;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10032156c:
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != iVar4) {
    *(int *)(param_1 + 0x58) = iVar4;
    FUN_100df99c0("","prl_client_app",0,"Tools installation stage changed from [%d] to [%d]",iVar1,
                  iVar4);
    FUN_10082a090(param_1,iVar4,iVar1);
  }
  return;
}

