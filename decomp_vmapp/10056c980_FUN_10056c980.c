
void FUN_10056c980(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar11 = param_1 + 0x233;
  local_38 = lVar3;
  if (((ulong)plVar11 & 1) == 0) {
    QReadWriteLock::lockForRead();
    plVar11 = (long *)((ulong)plVar11 | 1);
  }
  if ((param_1[0x242] == 0) || (param_1[0x243] == 0)) {
    FUN_1008e3970("","vdisk",0,"Error: disk was not opened correctly!");
  }
  else if ((*(byte *)(param_1 + 0x228) & 0x28) == 0) {
    lVar10 = (ulong)*(uint *)(param_1 + 0x22b) + *param_2;
    plVar1 = param_1 + 2;
    cVar7 = FUN_1005abdf0(plVar1,lVar10);
    if (cVar7 == '\0') {
      if ((uint)((int)param_1[0x24c] << 7) <= *(uint *)(param_1 + 0x24f)) {
        FUN_10057de10(param_1 + 0x249,(int)param_1[0x24c] + 1);
        *(int *)(param_1 + 0x24c) = (int)param_1[0x24c] + 1;
        lVar5 = param_1[0x249];
        lVar9 = 0;
        do {
          lVar2 = lVar5 + 0x10 + lVar9;
          *(long *)(lVar5 + 0x18 + lVar9) = lVar2;
          plVar4 = (long *)param_1[0x24e];
          param_1[0x24e] = lVar2;
          *(long **)(lVar5 + 0x10 + lVar9) = param_1 + 0x24d;
          *(long **)(lVar5 + 0x18 + lVar9) = plVar4;
          *plVar4 = lVar2;
          lVar2 = lVar5 + 0x40 + lVar9;
          *(long *)(lVar5 + 0x48 + lVar9) = lVar2;
          plVar4 = (long *)param_1[0x24e];
          param_1[0x24e] = lVar2;
          *(long **)(lVar5 + 0x40 + lVar9) = param_1 + 0x24d;
          *(long **)(lVar5 + 0x48 + lVar9) = plVar4;
          *plVar4 = lVar2;
          lVar9 = lVar9 + 0x60;
        } while (lVar9 != 0x1800);
      }
      if ((long *)param_1[0x24d] == param_1 + 0x24d) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "!cd_list_empty(&m_AsyncReqsList)","DiskStatesImp.cpp",0x6d3,"SubmitAsync");
      }
      plVar4 = (long *)param_1[0x24e];
      lVar5 = *plVar4;
      plVar6 = (long *)plVar4[1];
      *(long **)(lVar5 + 8) = plVar6;
      *plVar6 = lVar5;
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
      *(int *)(param_1 + 0x24f) = (int)param_1[0x24f] + 1;
      plVar4[4] = (long)param_1;
      plVar4[5] = (long)param_2;
      FUN_1005abf40(plVar1,FUN_10056cd00,plVar4,0xffffffff,lVar10);
      goto LAB_10056ca32;
    }
    local_50 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    local_40 = 0;
    local_48 = 0;
    iVar8 = FUN_1005abe90(plVar1,0xffffffff,lVar10,&local_58);
    if (-1 < iVar8) {
      if (param_1[0x270] != 0) {
        plVar1 = (long *)(param_1[0x270] + 0xf0);
        *plVar1 = *plVar1 + 1;
      }
      (**(code **)(*param_1 + 0x410))(param_1,param_2,&local_58);
      goto LAB_10056ca32;
    }
    FUN_1008e3970("","vdisk",0,"Error: GetElementLazy failed with err 0x%x");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x6b7,
                  "SubmitAsync");
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: disk is opened as fake");
  }
  FUN_10070aef0(param_2,0xe);
LAB_10056ca32:
  if (((ulong)plVar11 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

