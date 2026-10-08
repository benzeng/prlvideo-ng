
void FUN_10009b7f0(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  CScreenSaverBlocker *this;
  uint *puVar9;
  int iVar10;
  undefined1 local_58 [8];
  uint *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((param_3 != 4) && (param_3 < 0x10)) {
    if (0 < DAT_10230ffd0) {
      uVar6 = 0;
      if (*param_2 != 0) {
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
      }
      FUN_100df99c0("FSCRMONC","prl_client_app",1,
                    "Warning: bad size of Fullscreen Monitor request: ptr=%p, size=%u (<%u)",uVar6,
                    param_3,0x10);
    }
    return;
  }
  QTimer::stop();
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 0x20);
  if (lVar7 == 0) {
    QString::toUtf8();
    FUN_100df99c0("FSCRMONC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return;
  }
  FUN_10018c2b0(lVar7);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmCoherence();
  cVar5 = CVmCoherence::isSwitchToFullscreenOnDemand();
  if (cVar5 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    FUN_100df99c0("FSCRMONC","prl_client_app",2,"Fullscreen Monitor disable in configuration");
    return;
  }
  local_48 = 0;
  iVar10 = 0;
  piVar3 = *(int **)(*param_2 + 0x10);
  iVar2 = *piVar3;
  if ((param_3 != 4) && (local_48 = *(long *)(piVar3 + 1), iVar10 = 0, 0xf < param_3)) {
    iVar10 = piVar3[3];
  }
  lVar7 = local_48;
  if (iVar2 == 3) {
    if ((*(int *)(param_1 + 0x28) == 3) && (cVar5 = FUN_1000a6420(), cVar5 != '\0')) {
      puVar1 = (undefined8 *)(param_1 + 0x50);
      puVar8 = *(uint **)(param_1 + 0x50);
      if (1 < *puVar8) {
        FUN_10009c6d0(puVar1,puVar8[1]);
        puVar8 = (uint *)*puVar1;
      }
      puVar9 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
      while( true ) {
        if (1 < *puVar8) {
          FUN_10009c6d0(puVar1,puVar8[1]);
          puVar8 = (uint *)*puVar1;
        }
        if (puVar9 == puVar8 + (long)(int)puVar8[3] * 2 + 4) goto LAB_10009ba61;
        if (*(long *)(*(long *)(**(long **)puVar9 + 0x10) + 0x10) == lVar7) break;
        puVar9 = puVar9 + 2;
      }
      QTimer::stop();
      local_50 = puVar9;
      FUN_10009bfd0(local_58,puVar1,&local_50);
LAB_10009ba61:
      FUN_10009c090(param_1 + 0x48,&local_48);
      puVar4 = PTR_m_instance_1021e1420;
      if (*(int *)(*(long *)(param_1 + 0x48) + 0xc) == *(int *)(*(long *)(param_1 + 0x48) + 8)) {
        this = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
        if (this == (CScreenSaverBlocker *)0x0) {
          this = operator_new(0x18);
          CScreenSaverBlocker::CScreenSaverBlocker(this);
          *(CScreenSaverBlocker **)puVar4 = this;
          DAT_10226c8a0 = 1;
        }
        CScreenSaverBlocker::removeBlocker(this,1);
      }
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x10) < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x2c) != 3) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
  else {
    if (iVar2 == 2) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        if (local_48 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x28) != 3) {
          return;
        }
        cVar5 = FUN_1000a6420();
        if (cVar5 == '\0') {
          return;
        }
        uVar6 = 0;
        iVar10 = 0;
        goto LAB_10009bb71;
      }
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 3;
      goto LAB_10009baee;
    }
    if (iVar2 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 3) {
      return;
    }
    if (*(char *)(param_1 + 0x31) == '\0') {
      if (local_48 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x28) != 3) {
        return;
      }
      cVar5 = FUN_1000a6420();
      if (cVar5 == '\0') {
        return;
      }
      uVar6 = 1;
LAB_10009bb71:
      FUN_10009bbf0(param_1,lVar7,uVar6,iVar10);
      return;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    if (-1 < *(int *)(*(long *)(param_1 + 0x40) + 0x10)) goto LAB_10009baee;
  }
  FUN_10009be40(param_1);
LAB_10009baee:
  QTimer::start();
  return;
}

