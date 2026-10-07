
void FUN_10056da50(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar11 = param_1[2];
  plVar4 = *(long **)(*(long *)(lVar2 + 0x20) + 0x1210);
  if (plVar4 != (long *)0x0) {
    cVar12 = (**(code **)(*plVar4 + 0x48))();
    bVar10 = true;
    if (cVar12 != '\0') goto LAB_10056da98;
  }
  QMutex::lock();
  bVar10 = false;
LAB_10056da98:
  lVar5 = *(long *)(lVar2 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x1298);
  lVar7 = *(long *)(lVar5 + 0x12a0);
  if (*(long *)(lVar3 + 0x148) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Stor->m_LastDirtyFlush",
                  "DiskStatesImp.cpp",0x81f,"SyncHostFlushCallback");
  }
  lVar1 = lVar3 + 0x138;
  if (*(long *)(lVar3 + 0x138) == lVar1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!cd_list_empty(&Stor->m_DirtyEntry)","DiskStatesImp.cpp",0x820,
                  "SyncHostFlushCallback");
  }
  if (*(int *)(lVar3 + 0x150) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Stor->m_RunFlushCnt",
                  "DiskStatesImp.cpp",0x821,"SyncHostFlushCallback");
  }
  if (*(int *)(lVar2 + 0x28) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","CurrentFlush->StorRunFlushCnt",
                  "DiskStatesImp.cpp",0x823,"SyncHostFlushCallback");
  }
  if (*(long *)(lVar2 + 0x10) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","CurrentFlush->FlushCallback",
                  "DiskStatesImp.cpp",0x824,"SyncHostFlushCallback");
  }
  *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
  iVar13 = *(int *)(lVar3 + 0x150) + -1;
  *(int *)(lVar3 + 0x150) = iVar13;
  if ((int)lVar11 < 0) {
    if (-1 < *(int *)(lVar2 + 0x30)) {
      *(int *)(lVar2 + 0x30) = (int)lVar11;
    }
  }
  else if (((iVar13 == 0) && (*(long *)(lVar3 + 0x148) != lVar7)) &&
          (*(long *)(lVar3 + 0x128) == lVar3 + 0x128)) {
    lVar11 = *(long *)(lVar3 + 0x138);
    plVar4 = *(long **)(lVar3 + 0x140);
    *(long **)(lVar11 + 8) = plVar4;
    *plVar4 = lVar11;
    *(long *)(lVar3 + 0x138) = lVar1;
    *(long *)(lVar3 + 0x140) = lVar1;
    FUN_1005ad450(*(long *)(lVar2 + 0x20) + 0x10);
  }
  if (lVar2 == lVar6) {
    while (((plVar4 = *(long **)(lVar5 + 0x1298), plVar4 != (long *)(lVar5 + 0x1298) &&
            (*(int *)((long)plVar4 + 0x2c) == 0)) &&
           (((int)plVar4[5] == 0 && (pcVar9 = (code *)plVar4[2], pcVar9 != (code *)0x0))))) {
      if (*(long **)(lVar3 + 0x148) == plVar4) {
        *(undefined8 *)(lVar3 + 0x148) = 0;
      }
      lVar2 = *plVar4;
      plVar8 = (long *)plVar4[1];
      *(long **)(lVar2 + 8) = plVar8;
      *plVar8 = lVar2;
      *plVar4 = 0x112233;
      plVar4[1] = (long)&DAT_00445566;
      (*pcVar9)(plVar4[3],(int)plVar4[6]);
      _free(plVar4);
    }
  }
  if (bVar10) {
    return;
  }
  QMutex::unlock();
  return;
}

