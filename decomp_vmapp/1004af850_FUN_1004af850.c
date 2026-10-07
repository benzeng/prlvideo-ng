
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1004af850(long param_1,QString *param_2,undefined4 *param_3,undefined8 param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  QString *pQVar6;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  long local_c0 [6];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  long local_80 [4];
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  cVar2 = FUN_10052aeb0(param_4);
  if (cVar2 == '\0') {
    QMutex::lock();
    pQVar1 = param_2->field0_0x0;
    iVar3 = QString::compare_helper
                      (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"",0xffffffff,1
                      );
    if (iVar3 == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"Client_StartCoherence() Invalid client handle");
      }
    }
    else if (*(int *)(param_1 + 0x88) == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      "Client_StartCoherence() Coherence guest service stopped");
      }
      local_c0[1] = 0;
      local_c0[2] = 0;
      local_c0[0] = 0;
      FUN_1004b43e0(local_c0,0x18,local_c0 + 1,0x10);
      if (local_c0[0] != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
      }
    }
    else if ((*(char *)(param_1 + 0x8c) == '\0') &&
            (pQVar6 = (QString *)(param_1 + 0x120), *(char *)(param_1 + 0x8d) == '\0')) {
      cVar2 = operator==(param_2,pQVar6);
      if ((cVar2 == '\0') || ((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2)) {
        if ((*(int *)(pQVar6->field0_0x0 + 4) == 0) ||
           ((cVar2 = operator==(param_2,pQVar6), cVar2 != '\0' &&
            ((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2)))) {
          cVar2 = operator==(param_2,pQVar6);
          if ((0 < DAT_1011b55f8) && (cVar2 == '\x01')) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                          "Client_StartCoherence() CoherenceStopped and hClient==m_hActiveClient. Start Coherence anyway."
                         );
          }
          if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                          "Client_StartCoherence() Fatal Error: Coherence Mode started. Not InProgress. But active client is NULL"
                         );
          }
          else {
            cVar2 = FUN_1004affd0(param_1,param_4);
            if (cVar2 == '\0') {
              if (0 < DAT_1011b55f8) {
                FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                              "Cannot start Coherence: Guest Video Mem too low");
              }
              local_58 = 3;
              local_54 = 0;
              local_50 = 0;
              local_4c = 0;
              local_60 = 0;
              FUN_1004b43e0(&local_60,0x18,&local_58,0x10);
              if (local_60 != 0) {
                FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_2);
              }
            }
            else if (*(char *)(param_1 + 0x151) == '\0') {
              if (0 < DAT_1011b55f8) {
                FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                              "Cannot start Coherence: Dynamic resolution is not available");
              }
              local_40 = 4;
              local_3c = 0;
              local_38 = 0;
              local_34 = 0;
              local_48 = 0;
              FUN_1004b43e0(&local_48,0x18,&local_40,0x10);
              if (local_48 != 0) {
                FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_2);
              }
            }
            else {
              QString::operator=(pQVar6,param_2);
              *(undefined1 *)(param_1 + 0x8c) = 1;
              FUN_1004b7810(*(undefined8 *)(param_1 + 0xf0),pQVar6);
              FUN_10052ac80(param_1 + 0xf8,param_4);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                              "   **** Start Coherence [send START_CHR] command to guest");
              }
              pvVar5 = operator_new(0x18);
              *(undefined4 *)((long)pvVar5 + 4) = 1;
              FUN_1004ae8a0(param_1,pvVar5,param_1 + 0x98,0);
              *(undefined4 *)(param_1 + 0x118) = *param_3;
              *(undefined4 *)(param_1 + 0x11c) = param_3[1];
            }
          }
        }
        else {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                          "Client_StartCoherence() Cannot start Coherence due to internal error\n");
          }
          local_80[1] = 0;
          local_80[2] = 0;
          local_80[0] = 0;
          FUN_1004b43e0(local_80,0x18,local_80 + 1,0x10);
          if (local_80[0] != 0) {
            FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_2);
          }
        }
      }
      else {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "Client_StartCoherence() Coherence already started");
        }
        lVar4 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
        local_90 = 1;
        if (*(long *)(lVar4 + 0x868) != 0) {
          local_90 = 2;
        }
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_c0[5] = 0;
        FUN_1004b43e0(local_c0 + 5,3,&local_90,0x10);
        if (local_c0[5] != 0) {
          FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),pQVar6);
        }
      }
    }
    else {
      pQVar6 = (QString *)(param_1 + 0x120);
      cVar2 = operator==(param_2,pQVar6);
      if (cVar2 == '\0') {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "Client_StartCoherence() Server busy and another client is active");
        }
        local_c0[3] = 0;
        FUN_1004b43e0(local_c0 + 3,5,0,0);
        if (local_c0[3] != 0) {
          FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),pQVar6);
        }
      }
      else if (*(char *)(param_1 + 0x8d) == '\0') {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "Client_StartCoherence() Multiple Coherence starting: STUB now");
        }
        FUN_10052ac80(param_1 + 0xf8,param_4);
        FUN_1004ae450(param_1,param_4);
        *(undefined4 *)(param_1 + 0x118) = *param_3;
        *(undefined4 *)(param_1 + 0x11c) = param_3[1];
        FUN_1004bb550(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x30));
      }
      else {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"Client_StartCoherence() Coherence stopping now")
          ;
        }
        local_c0[4] = 0;
        FUN_1004b43e0(local_c0 + 4,2,0,0);
        if (local_c0[4] != 0) {
          FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),pQVar6);
        }
      }
    }
    QMutex::unlock();
  }
  else {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "Empty display configuration while starting Coherence.");
    }
    local_d0 = 1;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_d8 = 0;
    FUN_1004b43e0(&local_d8,0x18,&local_d0,0x10);
    if (local_d8 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
    }
  }
  return 0;
}

