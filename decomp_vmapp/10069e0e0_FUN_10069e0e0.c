
int FUN_10069e0e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,uint param_6)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint local_58 [4];
  QArrayData *local_48;
  undefined1 local_31;
  
  uVar8 = (ulong)param_6;
  uVar7 = (ulong)*(uint *)(param_1[4] + 0x10);
  uVar2 = (param_5 & 0xffffffff) / uVar7;
  if (param_6 == 0xffffffff) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar4 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x38))
                      ((long)param_1 + *(long *)(*param_1 + -0x18),local_58,
                       (param_5 & 0xffffffff) % uVar7);
    if (iVar4 < 0) {
      uVar8 = 0xffffffff;
      bVar3 = false;
      FUN_1008e3970("CountReclaimed","dimg",0,"GetParameters() failed with error 0x%X",iVar4);
    }
    else {
      uVar8 = (ulong)local_58[0];
      bVar3 = true;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("CountReclaimed","dimg",3,"count set to whole disk size %u (0x%X) sectors",
                      uVar8,local_58[0]);
      }
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10069e1e5;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10069e1e5:
    if (!bVar3) {
      return iVar4;
    }
    uVar7 = (ulong)*(uint *)(param_1[4] + 0x10);
  }
  plVar5 = operator_new(0x8b0,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    FUN_1008e3970("CountReclaimed","dimg",0,"No memory for BatScanningContext");
    return -0x7ffeffed;
  }
  FUN_10069db50(plVar5,param_1,param_2,param_3,param_4,uVar2,(int)(((uVar8 - 1) + uVar7) / uVar7));
  if (plVar5[1] == 0) {
    FUN_1008e3970("CountReclaimed","dimg",0,"BatScanningContext initialization failed");
    iVar4 = -0x7ffdf000;
LAB_10069e2f2:
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  else {
    lVar6 = *(long *)(*param_1 + -0x18);
    if ((*(byte *)(lVar6 + 0x18 + (long)param_1) & 2) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x80))(param_1);
      if (iVar4 < 0) {
        FUN_1008e3970("CountReclaimed","dimg",0,"FlushOffsets() failed, error = 0x%X",iVar4);
        goto LAB_10069e2f2;
      }
      lVar6 = *(long *)(*param_1 + -0x18);
    }
    plVar1 = *(long **)(lVar6 + 8 + (long)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,plVar5 + 8);
    iVar4 = 0;
  }
  return iVar4;
}

