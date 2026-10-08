
void FUN_100acb840(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_RAX;
  undefined8 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  if (param_2 == 0) {
    return;
  }
  iVar4 = FUN_100ae53b0(param_2);
  switch(iVar4) {
  case 2:
    if (0 < DAT_10230ffd0) {
      uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "CoherenceToolClient: ChrControl_ServerBusy. Start in progress = %d",uVar2);
    }
    cVar3 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (cVar3 != '\0') {
      QTimer::stop();
      *(undefined1 *)((long)param_1 + 0x81) = 0;
      FUN_100ae0ef0(param_1,0xb);
      return;
    }
    break;
  case 3:
    FUN_100df99c0("CHRCLIENT","ChrToolClient",0,"CoherenceToolClient: ChrControl_AlreadyStarted");
  case 1:
    iVar4 = FUN_100ae5410(param_2);
    if (iVar4 == 0x10) {
      if (2 < DAT_10230ffd0) {
        QMutex::lock();
        lVar1 = param_1[0xb];
        QMutex::unlock();
        uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
        FUN_100df99c0("CHRCLIENT","ChrToolClient",3,
                      "COMMAND: ChrControl_CoherenceStarted. Started=%d; InProgress=%d",
                      (int)lVar1 == 1,uVar2);
      }
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      if ((int)lVar1 != 1) {
        cVar3 = (**(code **)(*param_1 + 0xa0))(param_1);
        if (cVar3 == '\0') {
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                          "Coherence mode starting confirmation while not in Coherence and not in starting. Ignore it and send StopChr cmd to vm. May be Coherence started timeout appeared"
                         );
          }
          FUN_100acb230(param_1,0,0,0);
          return;
        }
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",3," >> Coherence started confirmation");
        }
        FUN_100acb390(param_1);
        return;
      }
      if (2 < DAT_10230ffd0) {
        pcVar10 = " >> Ignore Mode Started confirmation while in Coherence Mode.";
        uVar11 = 3;
LAB_100acbe37:
        FUN_100df99c0("CHRCLIENT","ChrToolClient",uVar11,pcVar10);
        return;
      }
    }
    else {
      uVar6 = FUN_100ae5410(param_2);
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                    "Invalid mode started confirmation data size [%d; need %ld]. IsCoherenceStarted = %d"
                    ,uVar6,0x10,CONCAT44(uVar7,(uint)((int)lVar1 == 1)));
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      if ((int)lVar1 == 1) {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",3," >> stop Coherence");
        }
        FUN_100acb0d0(param_1,1,7);
        return;
      }
      cVar3 = (**(code **)(*param_1 + 0xa0))(param_1);
      if (cVar3 != '\0') {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",3," >> failed to start Coherence");
        }
        FUN_100ae0ef0(param_1,10);
        *(undefined1 *)((long)param_1 + 0x81) = 0;
      }
    }
    break;
  case 4:
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar10 = "CoherenceToolClient: ChrControl_AlreadyStopped";
    goto LAB_100acb9d0;
  case 5:
    *(undefined1 *)((long)param_1 + 0x81) = 0;
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar10 = "COMMAND: ChrControl_ClientNotActive";
LAB_100acb9d0:
    uVar11 = 2;
    goto LAB_100acbe37;
  case 7:
  case 0xc:
    if (2 < DAT_10230ffd0) {
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      FUN_100df99c0("CHRCLIENT","ChrToolClient",3,
                    "COMMAND: ChrControl_CleanupWindowHash. IsCoherenceStarted=%d",(int)lVar1 == 1);
    }
    QMutex::lock();
    lVar1 = param_1[0xb];
    QMutex::unlock();
    if ((int)lVar1 == 1) {
      FUN_100ad5120(param_1[0xf],1);
      return;
    }
    break;
  case 8:
    iVar5 = FUN_100ae5410(param_2);
    if (iVar5 == 0x10) {
      puVar8 = (undefined8 *)FUN_100ae53e0(param_2);
      uVar11 = *puVar8;
      *(undefined8 *)((long)param_1 + 0x94) = puVar8[1];
      *(undefined8 *)((long)param_1 + 0x8c) = uVar11;
    }
  case 9:
    if (1 < DAT_10230ffd0) {
      pcVar10 = "not available";
      if (iVar4 == 8) {
        pcVar10 = "available";
      }
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                    "CoherenceToolClient: Coherence tool became %s (IsCoherenceStarted=%d)",pcVar10,
                    (int)lVar1 == 1);
    }
    if (iVar4 == 9) {
      *(undefined1 *)((long)param_1 + 0x81) = 0;
      *(undefined8 *)((long)param_1 + 0x94) = 0;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      QTimer::stop();
      QMutex::lock();
      lVar1 = param_1[0xb];
      QMutex::unlock();
      if ((int)lVar1 == 1) {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",3," >> Stop Coherence Mode (tool unavailable)");
        }
        FUN_100acb0d0(param_1,1,8);
      }
    }
    *(bool *)(param_1 + 0x10) = iVar4 == 8;
    FUN_100ae0fb0(param_1,iVar4 == 8);
    return;
  case 0x12:
    QMutex::lock();
    lVar1 = param_1[0xb];
    QMutex::unlock();
    if ((int)lVar1 == 1) {
      FUN_100ad2310(param_1[0xf]);
      return;
    }
    break;
  case 0x15:
    iVar4 = FUN_100ae5410(param_2);
    if (iVar4 == 0x10) {
      uVar11 = FUN_100ae53e0(param_2);
      FUN_100ad8880(param_1[0xf],uVar11);
      return;
    }
    if (DAT_10230ffd0 < 1) {
      return;
    }
    uVar7 = FUN_100ae5410(param_2);
    pcVar10 = "Invalid data size with \'create confirmed\' command [%d; need %ld]";
    uVar11 = 1;
    goto LAB_100acbf13;
  case 0x16:
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "Unsupported display configuration has been set in guest. Coherence must be turned OFF"
                   );
    }
    FUN_100ae11f0(param_1);
    return;
  case 0x17:
    iVar4 = FUN_100ae5410(param_2);
    if (iVar4 == 0x10) {
      puVar9 = (undefined4 *)FUN_100ae53e0();
      FUN_100acc060(param_1,*puVar9);
      return;
    }
    uVar7 = FUN_100ae5410(param_2);
    pcVar10 = "Invalid data size with \'CoherenceStopped_Ex\' command [%d; need %ld]";
    goto LAB_100acbf0e;
  case 0x18:
    iVar4 = FUN_100ae5410(param_2);
    if (iVar4 == 0x10) {
      puVar9 = (undefined4 *)FUN_100ae53e0();
      FUN_100acc7d0(param_1,*puVar9);
      return;
    }
    uVar7 = FUN_100ae5410(param_2);
    pcVar10 = "Invalid data size with \'CannotStart_Ex\' command [%d; need %ld]";
LAB_100acbf0e:
    uVar11 = 0;
LAB_100acbf13:
    FUN_100df99c0("CHRCLIENT","ChrToolClient",uVar11,pcVar10,uVar7,0x10);
    return;
  }
  return;
}

